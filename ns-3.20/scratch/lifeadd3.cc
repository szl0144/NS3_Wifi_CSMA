/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "ns3/core-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/network-module.h"
#include "ns3/applications-module.h"
#include "ns3/wifi-module.h"
#include "ns3/mobility-module.h"
#include "ns3/csma-module.h"
#include "ns3/internet-module.h"
#include "ns3/command-line.h"
#include "ns3/config.h"
#include "ns3/yans-wifi-phy.h"
#include "ns3/yans-wifi-helper.h"
#include "ns3/wifi-net-device.h"

// Default Network Topology
//
//   Wifi 10.1.3.0
//                 AP
//  *    *    *    *
//  |    |    |    |    10.1.1.0
// n5   n6   n7   n0 -------------- n1   n2   n3   n4
//                   point-to-point  |    |    |    |
//                                   ================
//                                     LAN 10.1.2.0

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("ThirdScriptExample"); 

//Ptr<YansWifiPhy>
//GetYansWifiPhyPtr (const NetDeviceContainer &nc)
//{
//  Ptr<WifiNetDevice> wnd = nc.Get (0)->GetObject<WifiNetDevice> ();
//  Ptr<WifiPhy> wp = wnd->GetPhy ();
//  return wp->GetObject<YansWifiPhy> ();
//}

int 
main (int argc, char *argv[])
{
  RngSeedManager ::SetSeed (5);
  RngSeedManager ::SetRun (5);
  bool verbose = true;
  std::string phyMode ("DsssRate2Mbps");
  //uint32_t nCsma = 3;
  uint32_t nWifi = 3;
  bool enableRts = 0;

  CommandLine cmd;
  //cmd.AddValue ("nCsma", "Number of \"extra\" CSMA nodes/devices", nCsma);
  cmd.AddValue ("phyMode", "Wifi Phy mode", phyMode);
  cmd.AddValue ("nWifi", "Number of wifi STA devices", nWifi);
  cmd.AddValue ("verbose", "Tell echo applications to log if true", verbose);
  cmd.AddValue ("enableRts", "Enable or disable RTS/CTS", enableRts);
  cmd.Parse (argc,argv);

  // Fix non-unicast data rate to be the same as that of unicast
  Config::SetDefault ("ns3::WifiRemoteStationManager::NonUnicastMode",
                       StringValue (phyMode));
 

  Config::SetDefault ("ns3::WifiRemoteStationManager::RtsCtsThreshold", enableRts ? StringValue ("0") : StringValue ("999999"));

  if (nWifi > 18)
    {
      std::cout << "Number of wifi nodes " << nWifi << 
                   " specified exceeds the mobility bounding box" << std::endl;
      exit (1);
    }

  if (verbose)
    {
      //LogComponentEnable ("UdpEchoClientApplication", LOG_LEVEL_DEBUG);
      //LogComponentEnable ("UdpEchoServerApplication", LOG_LEVEL_DEBUG);
      //LogComponentEnable ("YansWifiChannel", LOG_LEVEL_WARN);
      //LogComponentEnable ("YansWifiPhy", LOG_LEVEL_WARN);
      LogComponentEnable ("MacLow", LOG_LEVEL_WARN);
      //LogComponentEnable ("WifiPhyStateHelper", LOG_LEVEL_WARN);
      //LogComponentEnable ("RandomVariableStream", LOG_LEVEL_WARN);
      //LogComponentEnable ("DcfManager",LOG_LEVEL_DEBUG);
      //LogComponentEnable ("DcaTxop",LOG_LEVEL_WARN);
      //LogComponentEnable ("InterferenceHelper",LOG_LEVEL_DEBUG);
      //LogComponentEnable ("UanMacCw", LOG_LEVEL_DEBUG);
      //LogComponentEnable ("UdpEchoClientApplication", LOG_LEVEL_WARN);
      //LogComponentEnable ("UdpEchoServerApplication", LOG_LEVEL_WARN);
      //LogComponentEnable ("UdpClientApplication", LOG_LEVEL_INFO);
      //LogComponentEnable ("UdpServerApplication", LOG_LEVEL_INFO);
    }
//NS_LOG_INFO ("a transmission that did not require an ACK just finished");  
  /*NodeContainer p2pNodes;
  p2pNodes.Create (2);*/

  /*PointToPointHelper pointToPoint;
  pointToPoint.SetDeviceAttribute ("DataRate", StringValue ("5Mbps"));
  pointToPoint.SetChannelAttribute ("Delay", StringValue ("2ms"));

  NetDeviceContainer p2pDevices;
  p2pDevices = pointToPoint.Install (p2pNodes);*/

  /*NodeContainer csmaNodes;
  csmaNodes.Add (p2pNodes.Get (1));
  csmaNodes.Create (nCsma);

  CsmaHelper csma;
  csma.SetChannelAttribute ("DataRate", StringValue ("100Mbps"));
  csma.SetChannelAttribute ("Delay", TimeValue (NanoSeconds (6560)));*/

  /*NetDeviceContainer csmaDevices;
  csmaDevices = csma.Install (csmaNodes);*/

  NodeContainer wifiStaNodes;
  wifiStaNodes.Create (nWifi);
  NodeContainer wifiApNode;
  wifiApNode.Create (1);

  YansWifiChannelHelper channel = YansWifiChannelHelper::Default ();
  YansWifiPhyHelper phy = YansWifiPhyHelper::Default ();
  phy.SetChannel (channel.Create ());

  WifiHelper wifi = WifiHelper::Default ();
  wifi.SetStandard (WIFI_PHY_STANDARD_80211b);
  Config::Set ("/NodeList/*/DeviceList/*/$ns3::WifiNetDevice/Phy/CcaModelThreshold",DoubleValue (-100.0));
  //wifi.SetRemoteStationManager ("ns3::AarfWifiManager");

  NqosWifiMacHelper mac = NqosWifiMacHelper::Default ();

  wifi.SetRemoteStationManager ("ns3::ConstantRateWifiManager",
                                 "DataMode",StringValue (phyMode),
                                 "ControlMode",StringValue (phyMode));

  Ssid ssid = Ssid ("ns-3-ssid");
  mac.SetType ("ns3::StaWifiMac",
               "Ssid", SsidValue (ssid),
               "ActiveProbing", BooleanValue (false));

  NetDeviceContainer staDevices;
  staDevices = wifi.Install (phy, mac, wifiStaNodes);

  mac.SetType ("ns3::ApWifiMac",
               "Ssid", SsidValue (ssid));
               //"BeaconGeneration", BooleanValue (false));

  NetDeviceContainer apDevices;
  apDevices = wifi.Install (phy, mac, wifiApNode);


  //Ptr<YansWifiPhy> phySta;
  //phySta = GetYansWifiPhyPtr (staDevices);
  // We expect channel 1, width 22, frequency 2412
  //NS_ASSERT (phySta->GetChannelNumber () == 1);
  //NS_ASSERT (phySta->GetChannelWidth () == 22);
  //NS_ASSERT (phySta->GetFrequency () == 2412);


  Ptr<NetDevice> dev = staDevices.Get (1);
  Ptr<WifiNetDevice> wifi_dev = DynamicCast<WifiNetDevice> (dev);
  Ptr<WifiMac> wifi_mac = wifi_dev->GetMac ();
  PointerValue ptr;
  Ptr<DcaTxop> Exop_;
  wifi_mac->GetAttribute ("DcaTxop", ptr);
  Exop_ = ptr.Get<DcaTxop> ();
  Exop_->mean = 399;

  Ptr<NetDevice> dev_0 = staDevices.Get (0);
  Ptr<WifiNetDevice> wifi_dev_0 = DynamicCast<WifiNetDevice> (dev_0);
  Ptr<WifiMac> wifi_mac_0 = wifi_dev_0->GetMac ();
  PointerValue ptr_0;
  Ptr<DcaTxop> Exop_0;
  wifi_mac_0->GetAttribute ("DcaTxop", ptr_0);
  Exop_0 = ptr_0.Get<DcaTxop> ();
  Exop_0->mean = 399;

  Ptr<NetDevice> dev_2 = staDevices.Get (2);
  Ptr<WifiNetDevice> wifi_dev_2 = DynamicCast<WifiNetDevice> (dev_2);
  Ptr<WifiMac> wifi_mac_2 = wifi_dev_2->GetMac ();
  PointerValue ptr_2;
  Ptr<DcaTxop> Exop_2;
  wifi_mac_2->GetAttribute ("DcaTxop", ptr_2);
  Exop_2 = ptr_2.Get<DcaTxop> ();
  Exop_2->mean = 399;





  MobilityHelper mobility;

  mobility.SetPositionAllocator ("ns3::GridPositionAllocator",
                                 "MinX", DoubleValue (0.0),
                                 "MinY", DoubleValue (0.0),
                                 "DeltaX", DoubleValue (5.0),
                                 "DeltaY", DoubleValue (10.0),
                                 "GridWidth", UintegerValue (3),
                                 "LayoutType", StringValue ("RowFirst"));

  mobility.SetMobilityModel ("ns3::RandomWalk2dMobilityModel",
                             "Bounds", RectangleValue (Rectangle (-50, 50, -50, 50)));
  mobility.Install (wifiStaNodes);

  mobility.SetMobilityModel ("ns3::ConstantPositionMobilityModel");
  mobility.Install (wifiApNode);

  InternetStackHelper stack;
  //stack.Install (csmaNodes);
  stack.Install (wifiApNode);
  stack.Install (wifiStaNodes);

  Ipv4AddressHelper address;

  /*address.SetBase ("10.1.1.0", "255.255.255.0");
  Ipv4InterfaceContainer p2pInterfaces;
  p2pInterfaces = address.Assign (p2pDevices);

  address.SetBase ("10.1.2.0", "255.255.255.0");
  Ipv4InterfaceContainer csmaInterfaces;
  csmaInterfaces = address.Assign (csmaDevices);*/

  address.SetBase ("10.1.3.0", "255.255.255.0");
  Ipv4InterfaceContainer staNodeInterface;
  Ipv4InterfaceContainer apNodeInterface;

  staNodeInterface=address.Assign (staDevices);
  apNodeInterface=address.Assign (apDevices);

  //UdpEchoServerHelper echoServer (9);
  uint16_t port = 9;

  UdpEchoServerHelper server (port);
  //UdpServerHelper server (port);
  ApplicationContainer serverApps = server.Install (wifiApNode.Get (0));
  serverApps.Start (Seconds (1));
  serverApps.Stop (Seconds (21.0));

  UdpEchoClientHelper client (apNodeInterface.GetAddress (0), 9);
  //UdpClientHelper client (apNodeInterface.GetAddress (0), 9);
  client.SetAttribute ("MaxPackets", UintegerValue (4294967295u));
  client.SetAttribute ("Interval", TimeValue (Seconds (0.00001)));
  client.SetAttribute ("PacketSize", UintegerValue (1062));

  ApplicationContainer clientApps0 = client.Install (wifiStaNodes.Get (0));
  clientApps0.Start (Seconds (1));
  clientApps0.Stop (Seconds (21.0));
  ApplicationContainer clientApps1 = client.Install (wifiStaNodes.Get (1));
  clientApps1.Start (Seconds (1));
  clientApps1.Stop (Seconds (21.0)); 
  ApplicationContainer clientApps2 = client.Install (wifiStaNodes.Get (2));
  clientApps2.Start (Seconds (1));
  clientApps2.Stop (Seconds (21.0));

  //Ipv4GlobalRoutingHelper::PopulateRoutingTables ();

  Simulator::Stop (Seconds (21));

  //pointToPoint.EnablePcapAll ("lifeadd1");
  phy.EnablePcap ("lifeadd3", apDevices.Get (0));
  //csma.EnablePcap ("lifeadd1", csmaDevices.Get (0), true);
  
  AsciiTraceHelper ascii;
  //pointToPoint.EnableAsciiAll (ascii.CreateFileStream ("myfirst.tr"));
  phy.EnableAsciiAll (ascii.CreateFileStream ("myfirst.tr"));
  Simulator::Run ();



  Simulator::Destroy ();
  return 0;
}
