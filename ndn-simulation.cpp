/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/**
 * Copyright (c) 2011-2015  Regents of the University of California.
 *
 * This file is part of ndnSIM. See AUTHORS for complete list of ndnSIM authors and
 * contributors.
 *
 * ndnSIM is free software: you can redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * ndnSIM is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * ndnSIM, e.g., in COPYING.md file.  If not, see <http://www.gnu.org/licenses/>.
 **/

// ndn-simulation.cpp

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/ndnSIM-module.h"

namespace ns3 {

/**
 * This scenario simulates a very simple network topology:
 *                   /------\   /------\ 
 *                   |  C-1 |   |  C-2 |    
 *                   \------/   \------/   
 *                       ^         ^       
 *                       |         |     
 *                        \       /    
 *                         \     / 10Mbps/1ms
 *                          \   /    
 *                           | |       
 *                           v v         
 *                        /-------\        
 *                        | router|         
 *                        \-------/          
 *                            ^   
 *                            |      
 *                            | 10 Mpbs / 1ms
 *                            | 
 *                            |  
 *                            v  
 *                        /--------\
 *                        |Producer|
 *                        \--------/
 *                                    
 * Consumers C-1 and C-2  requests data from producer with a time difference of 2 secs 
 * We use interests that contain constantly increasing sequence numbers
 * Producer replies with a payload of 1024 bytes for each interest received.
 *
 * To run scenario and see what is happening, use the following command:
 *
 *     NS_LOG=ndn.Consumer:ndn.Producer:ndn.Consumer ./waf --run=ndn-simulation
 */

int main(int argc, char* argv[])
{
  // setting default parameters for PointToPoint links and channels
  Config::SetDefault("ns3::PointToPointNetDevice::DataRate", StringValue("1Mbps"));
  Config::SetDefault("ns3::PointToPointChannel::Delay", StringValue("10ms"));
  Config::SetDefault("ns3::DropTailQueue::MaxPackets", StringValue("100"));

  // Creating nodes
  NodeContainer nodes;
  nodes.Create(4);

  // Connecting nodes using two links
  PointToPointHelper p2p;
  p2p.Install(nodes.Get(0), nodes.Get(1));
  p2p.Install(nodes.Get(1), nodes.Get(2));
  p2p.Install(nodes.Get(3), nodes.Get(1));

  // Install NDN stack on all nodes
  ndn::StackHelper ndnHelper;
  ndnHelper.SetDefaultRoutes(true);
  ndnHelper.SetOldContentStore("ns3::ndn::cs::Lru", "MaxSize",
                               "0"); // default ContentStore parameters
  ndnHelper.InstallAll();

  // Choosing forwarding strategy
  ndn::StrategyChoiceHelper::InstallAll("/data", "/localhost/nfd/strategy/multicast");

  // Consumer
  ndn::AppHelper consumerHelper("ns3::ndn::ConsumerCbr");
  // Consumer will request /prefix/0, /prefix/1, ...
  consumerHelper.SetAttribute("StartSeq", IntegerValue(5));
  consumerHelper.SetPrefix("/data");
   
  consumerHelper.Install(nodes.Get(0));                        // first consumer
  consumerHelper.Install(nodes.Get(0)).Start(Seconds(0));      // first consumer

  consumerHelper.SetPrefix("/data");
  consumerHelper.SetAttribute("StartSeq", IntegerValue(5));    // second consumer 
  consumerHelper.Install(nodes.Get(3)).Start(Seconds(2));      // second consumer
  
  // Producer
  ndn::AppHelper producerHelper("ns3::ndn::Producer");
  
  // Producer will reply to all requests starting with /data
  producerHelper.SetPrefix("/data");
  producerHelper.SetAttribute("PayloadSize", StringValue("1024"));
  producerHelper.Install(nodes.Get(2)); // producer

  Simulator::Stop(Seconds(4.0));

  Simulator::Run();
  Simulator::Destroy();

  return 0;
}

} // namespace ns3

int
main(int argc, char* argv[])
{
  return ns3::main(argc, argv);
}
