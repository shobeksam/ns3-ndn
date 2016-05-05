# ns3-ndn
Using NS3 for NDN simulations

Output of ndn-simulation.cpp
0s -1 ndn.Consumer:Consumer()
0s -1 ndn.Consumer:Consumer()
0s -1 ndn.Consumer:Consumer()
0s -1 ndn.Producer:Producer()
0s 0 ndn.Consumer:StartApplication()
0s 0 ndn.Consumer:StartApplication()
0s 2 ndn.Producer:StartApplication()
0s 0 ndn.Consumer:SendPacket()
0s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 5
0s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 5 with +0.0ns. already 0 items
0s 0 ndn.Consumer:SendPacket()
0s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 5
0s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 5 with +0.0ns. already 0 items
0.020416s 2 ndn.Producer:OnInterest(0x2320630, 0x2391ff8)
0.020416s 2 ndn.Producer:OnInterest(): [INFO ] node(2) responding with Data: /data/%FE%05
0.05736s 0 ndn.Consumer:OnData(0x22f8ef0, 0x23937e8)
0.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 5
0.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
0.05736s 0 ndn.Consumer:OnData(0x2318500, 0x23937e8)
0.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 5
0.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
1s 0 ndn.Consumer:SendPacket()
1s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 6
1s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 6 with +1000000000.0ns. already 0 items
1s 0 ndn.Consumer:SendPacket()
1s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 6
1s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 6 with +1000000000.0ns. already 0 items
1.02042s 2 ndn.Producer:OnInterest(0x2320630, 0x2354688)
1.02042s 2 ndn.Producer:OnInterest(): [INFO ] node(2) responding with Data: /data/%FE%06
1.05736s 0 ndn.Consumer:OnData(0x22f8ef0, 0x2345f38)
1.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 6
1.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
1.05736s 0 ndn.Consumer:OnData(0x2318500, 0x2345f38)
1.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 6
1.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
2s 3 ndn.Consumer:StartApplication()
2s 0 ndn.Consumer:SendPacket()
2s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 7
2s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 7 with +2000000000.0ns. already 0 items
2s 0 ndn.Consumer:SendPacket()
2s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 7
2s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 7 with +2000000000.0ns. already 0 items
2s 3 ndn.Consumer:SendPacket()
2s 3 ndn.Consumer:SendPacket(): [INFO ] > Interest for 5
2s 3 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 5 with +2000000000.0ns. already 0 items
2.02042s 2 ndn.Producer:OnInterest(0x2320630, 0x2350088)
2.02042s 2 ndn.Producer:OnInterest(): [INFO ] node(2) responding with Data: /data/%FE%07
2.02889s 3 ndn.Consumer:OnData(0x2320320, 0x2353738)
2.02889s 3 ndn.Consumer:OnData(): [INFO ] < DATA for 5
2.02889s 3 ndn.Consumer:OnData(): [DEBUG] Hop count: 1
2.05736s 0 ndn.Consumer:OnData(0x22f8ef0, 0x2392448)
2.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 7
2.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
2.05736s 0 ndn.Consumer:OnData(0x2318500, 0x2392448)
2.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 7
2.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
3s 0 ndn.Consumer:SendPacket()
3s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 8
3s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 8 with +3000000000.0ns. already 0 items
3s 0 ndn.Consumer:SendPacket()
3s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 8
3s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 8 with +3000000000.0ns. already 0 items
3s 3 ndn.Consumer:SendPacket()
3s 3 ndn.Consumer:SendPacket(): [INFO ] > Interest for 6
3s 3 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 6 with +3000000000.0ns. already 0 items
3.02042s 2 ndn.Producer:OnInterest(0x2320630, 0x234e3b8)
3.02042s 2 ndn.Producer:OnInterest(): [INFO ] node(2) responding with Data: /data/%FE%08
3.02889s 3 ndn.Consumer:OnData(0x2320320, 0x2395018)
3.02889s 3 ndn.Consumer:OnData(): [INFO ] < DATA for 6
3.02889s 3 ndn.Consumer:OnData(): [DEBUG] Hop count: 1
3.05736s 0 ndn.Consumer:OnData(0x22f8ef0, 0x2395018)
3.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 8
3.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
3.05736s 0 ndn.Consumer:OnData(0x2318500, 0x2395018)
3.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 8
3.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2

Output of ndn-simulation-2.cpp

0s -1 ndn.Consumer:Consumer()
0s -1 ndn.Consumer:Consumer()
0s -1 ndn.Consumer:Consumer()
0s -1 ndn.Producer:Producer()
0s 0 ndn.Consumer:StartApplication()
0s 0 ndn.Consumer:StartApplication()
0s 2 ndn.Producer:StartApplication()
0s 0 ndn.Consumer:SendPacket()
0s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 5
0s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 5 with +0.0ns. already 0 items
0s 0 ndn.Consumer:SendPacket()
0s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 5
0s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 5 with +0.0ns. already 0 items
0.020416s 2 ndn.Producer:OnInterest(0xa74630, 0xae5ff8)
0.020416s 2 ndn.Producer:OnInterest(): [INFO ] node(2) responding with Data: /data/%FE%05
0.05736s 0 ndn.Consumer:OnData(0xa4cef0, 0xae77e8)
0.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 5
0.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
0.05736s 0 ndn.Consumer:OnData(0xa6c500, 0xae77e8)
0.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 5
0.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
1s 0 ndn.Consumer:SendPacket()
1s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 6
1s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 6 with +1000000000.0ns. already 0 items
1s 0 ndn.Consumer:SendPacket()
1s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 6
1s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 6 with +1000000000.0ns. already 0 items
1.02042s 2 ndn.Producer:OnInterest(0xa74630, 0xaa8688)
1.02042s 2 ndn.Producer:OnInterest(): [INFO ] node(2) responding with Data: /data/%FE%06
1.05736s 0 ndn.Consumer:OnData(0xa4cef0, 0xa99f38)
1.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 6
1.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
1.05736s 0 ndn.Consumer:OnData(0xa6c500, 0xa99f38)
1.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 6
1.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
2s 3 ndn.Consumer:StartApplication()
2s 0 ndn.Consumer:SendPacket()
2s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 7
2s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 7 with +2000000000.0ns. already 0 items
2s 0 ndn.Consumer:SendPacket()
2s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 7
2s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 7 with +2000000000.0ns. already 0 items
2s 3 ndn.Consumer:SendPacket()
2s 3 ndn.Consumer:SendPacket(): [INFO ] > Interest for 15
2s 3 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 15 with +2000000000.0ns. already 0 items
2.02042s 2 ndn.Producer:OnInterest(0xa74630, 0xaaa358)
2.02042s 2 ndn.Producer:OnInterest(): [INFO ] node(2) responding with Data: /data/%FE%07
2.02062s 2 ndn.Producer:OnInterest(0xa74630, 0xaa72f8)
2.02062s 2 ndn.Producer:OnInterest(): [INFO ] node(2) responding with Data: /data/%FE%0F
2.05736s 0 ndn.Consumer:OnData(0xa4cef0, 0xaeb778)
2.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 7
2.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
2.05736s 0 ndn.Consumer:OnData(0xa6c500, 0xaeb778)
2.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 7
2.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
2.06583s 3 ndn.Consumer:OnData(0xa74320, 0xaeb778)
2.06583s 3 ndn.Consumer:OnData(): [INFO ] < DATA for 15
2.06583s 3 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
3s 0 ndn.Consumer:SendPacket()
3s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 8
3s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 8 with +3000000000.0ns. already 0 items
3s 0 ndn.Consumer:SendPacket()
3s 0 ndn.Consumer:SendPacket(): [INFO ] > Interest for 8
3s 0 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 8 with +3000000000.0ns. already 0 items
3s 3 ndn.Consumer:SendPacket()
3s 3 ndn.Consumer:SendPacket(): [INFO ] > Interest for 16
3s 3 ndn.Consumer:WillSendOutInterest(): [DEBUG] Trying to add 16 with +3000000000.0ns. already 0 items
3.02042s 2 ndn.Producer:OnInterest(0xa74630, 0xaeb6f8)
3.02042s 2 ndn.Producer:OnInterest(): [INFO ] node(2) responding with Data: /data/%FE%08
3.02062s 2 ndn.Producer:OnInterest(0xa74630, 0xae54a8)
3.02062s 2 ndn.Producer:OnInterest(): [INFO ] node(2) responding with Data: /data/%FE%10
3.05736s 0 ndn.Consumer:OnData(0xa4cef0, 0xaaca68)
3.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 8
3.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
3.05736s 0 ndn.Consumer:OnData(0xa6c500, 0xaaca68)
3.05736s 0 ndn.Consumer:OnData(): [INFO ] < DATA for 8
3.05736s 0 ndn.Consumer:OnData(): [DEBUG] Hop count: 2
3.06583s 3 ndn.Consumer:OnData(0xa74320, 0xaaca68)
3.06583s 3 ndn.Consumer:OnData(): [INFO ] < DATA for 16
3.06583s 3 ndn.Consumer:OnData(): [DEBUG] Hop count: 2

