Network: It refers to a collection of interconnected devices that can communicate and share resources with each other. 

Internet: The internet is a global network of networks. It's a massive interconnected system of various networks worldwide that enables communication and resource sharing on a global scale.

Protocol: a set of rules and conventions that govern how data is exchanged between devices or systems in a network or communication environment.
tcp - data is not corrupted and 100% data has reached the destination.
udp - some data may be lost. video call.
http - used by web browsers. format of data transfered in the servers contains all the rules.
To know the IP address of the internet provider - $ curl if config.me -s. some of the ports are reserved. 0 - 1023 are reserved.

> IP address is used to identify the device and port is used to identify to identify application.

> 1mbps = 1000000 bits/second.

WWW - world wide web (Tim Berners Lee).

NIC (Network Interface Card) : A NIC is a hardware component that allows a computer or other device to physically connect to a network and communicate with other devices over that network.

Hub: A hub is a basic networking device that operates at the physical layer of the OSI model. It simply receives data packets from one device and broadcasts them to all other devices connected to the hub.

Switch: A switch is a more advanced networking device that operates at the data link layer of the OSI model. Unlike hubs, switches are intelligent and can learn the MAC addresses of devices connected to them. They use this information to forward data only to the specific device for which the data is intended. This significantly reduces unnecessary network traffic and improves overall network performance.

Router: A device that connects different networks and manages the flow of data between them. Determines the best path for data based on IP addresses of source and destination and network protocols.

modem : convert the digita data into analog data.

Types of Network:
LAN: Local Area Network - offices, buildings.
WAN: Wide Area Network - across the countries.
MAN: Metropoliton Area Network - across the cities.
PAN: Personal Area Network - personal bluetooth, hotstop.

Network Topology - It defines the structure of the network of how all the components are interconnected to each other. There are two types of topology: physical and logical topology.
Physical topology is the geometric representation of all the nodes in a network.
Bus Topology - designed in such a way that all the stations are connected through a single cable known as a backbone cable. only one person can send data at one time.
Ring Topology - like a bus topology, but with connected ends.The data in a ring topology flow in a clockwise direction.
Tree Topology - a type of structure in which all the computers are connected with each other in hierarchical fashion.There is only one path exists between two nodes for the data transmission. Thus, it forms a parent-child hierarchy. it can also be said as combination of many star topology.
Star Topology - an arrangement of the network in which every node is connected to the central hub, switch or a central computer.
if central device fails sysytem won't work.
Mesh Topology - an arrangement of the network in which computers are interconnected with each other through various redundant connections.
Full Mesh Topology: In a full mesh topology, each computer is connected to all the computers available in the network.
Partial Mesh Topology: In a partial mesh topology, not all but certain computers are connected to those computers with which they communicate frequently.
Hybrid Topology - The combination of various different topologies.

Transmission modes
The way in which data is transmitted from one device to another device is known as transmission mode.
Simplex Mode: the communication is unidirectional, i.e., the data flow in one direction. A device can only send the data but cannot receive it or it can receive the data but cannot send the data. e.g - keyword, monitor
Half-Duplex Mode: Messages flow in both the directions, but not at the same time. e.g - walkies talkies
Full-duplex mode: The communication is bi-directional, i.e., the data flow in both the directions. Both the stations can send and receive the message simultaneously. e.g - Telephone Network.

OSI Model:
OSI stands for Open System Interconnection is a reference model that describes how information from a software application in one computer moves through a physical medium to the software application in another computer.
OSI consists of seven layers, and each layer performs a particular network function.

Physical, data link, network layer - Responsibilty of the network also called lower layer.

Transport, Session, Presentation, Application - Resposibility of the host also called upper layer.

Physical Layer:
This layer deals with the physical transmission of data over the network medium.
Functions:
Defines the hardware characteristics of the network, including cables, connectors, voltage levels, and transmission speeds.
Converts digital data into signals suitable for transmission.
Example: Ethernet cables, fiber optics, wireless radio waves.

Data Link Layer:
This layer focuses on creating a reliable link between two directly connected nodes and managing data frames.
Functions:
Framing: Divides data into frames for transmission.
Physical addressing: Adds MAC addresses to frames for addressing.
Flow control: Ensures data flows at a rate both sender and receiver can handle.
Error detection and correction: Detects and handles errors in transmitted data.
Example: Ethernet frames, Wi-Fi frames.

Network Layer:
This layer is responsible for routing data packets across different networks to reach their destinations.
Functions:
Logical addressing: Assigns IP addresses to devices for identification.
Routing: Determines the best path for data packets to travel between networks.
Subnetting: Divides networks into smaller segments for efficient routing.
Example: IP (Internet Protocol), routers.

Transport Layer:
This layer ensures end-to-end communication, reliability, and data integrity between devices on different networks.
Functions:
Segmentation and reassembly: Divides large messages (with port no and sequenct no) into smaller segments and reassembles them at the destination.
Flow control: Manages data flow to prevent congestion.
Error detection and correction: Ensures data integrity.
Example: TCP (Transmission Control Protocol), UDP (User Datagram Protocol).

Session Layer:
This layer manages the establishment, maintenance, and termination of communication sessions between two devices.
Functions:
Session establishment, maintenance, and termination.
Synchronization of data exchange.
Example: NetBIOS, RPC (Remote Procedure Call).

Presentation Layer:
This layer deals with data format conversion, encryption, and compression to ensure compatibility between different devices and systems.
Functions:
Data translation: Converts data between different formats.
Encryption and decryption: Secures data during transmission.
Data compression: Reduces the size of data for efficient transmission.
Example: SSL/TLS, JPEG, GIF.

Application Layer:
This is the top layer that directly interacts with user applications and provides network services.
Functions:
Application protocols: Support specific services for users and applications.
User interfaces and APIs: Provide interfaces for application communication.
Example: HTTP, FTP, SMTP, DNS.

client to server architecture:
client <==> server

Peer to peer architecture:
every device can act as a server as well as client.

> TCP / IP model.
Internet Protocol suite.
Layers 5 - application, transport, network, datalink, physical.

repeater.
active and passive hub.
bridge.
transparent
source routing
switch.
router
gateway
Brouter

Physical Layer:
Multiplexing is a technique used to combine and send the multiple data streams over a single medium. The process of combining the data streams is known as multiplexing and hardware used for multiplexing is known as a multiplexer.

Multiplexing is achieved by using a device called Multiplexer (MUX) that combines n input lines to generate a single output line. Multiplexing follows many-to-one, i.e., n input lines and one output line.

More than one signal can be sent over a single medium.
The bandwidth of a medium can be utilized effectively.

Demultiplexing is achieved by using a device called Demultiplexer (DEMUX) available at the receiving end. DEMUX separates a signal into its component signals (one input and n outputs). Therefore, we can say that demultiplexing follows the one-to-many approach




protocols:
web protocols - 
TCP / IP : HTTP, DHCP, FTP, SMTP, POP3 & IMAC, SSH, VNC
Telnet : port-23
UDP: stateless connection, data may be lost.
threads - a process can have multiple threads. thread can do only one operations at a time.
a process can have multiple threads.

sockets : 

Ports : Port tells us which application should data be sent.
Ephemeral port : used to identify the threads.

HTTP - hyper text transfer protocol. application layer protocols. it has get, post requests. It uses TCP in tranport layer. It is a stateless protocols. 

status codes:
100 - informational
200 - success status
300 - redirecting
400 - client error
500 - server error

cookies - unique string stored in the browser.
Third Party cookies - cookies which set for the url which was not visited.

SMTP - uses TCP.
if sender and receiver are not using the same email then
sender->Sender's SMTP server->Receiver's SMTP server->Receiver.
else direct sent.

we can receive the email using pop with the help of pop server.
using this it will be available only on that devices.

If done using IMAP it will be available on all the devices where that email has been logged.

DNS - Domain Name System. convert the url to ip address.
divided in different databases.
mail.google.com
mail - sub-domain, google - second-level domain, com - top-level domain.
root dns server: .io, .com, .org ans so on.
second level domain: google.com, student.io and so on.
first search in device then local dns server - isp(internet service provider) then root dns server.
domain name can not be bought. it can only be rented.

Transport Layer:
from the network to application and vice versa. It works within the device only.
TCP (Transmission Control Protocol): connection protocol. application layer send a lot of raw data, tcp divides it into segments and add headers and do check sums.
congestion control- takes care of when the data arrived and maintain the order of data.
features: connection oriented. error control, congestion control, full duplex.
one tcp connection is only between two devices.
Three-Way Handshakes. sequence no are random for the security purposes.
UDP(User Datagram Protocol): data may not get delivered, data may not be in order, may detoriate. It is connectionless protocol.
UDP Packets: source port no and destination port no, length of data, check sum, data.
data - non header. 2^16 - 8.
remianing - header 8 bytes
It is faster.video call, gaming.
Multiplexer:
Demultiplexer:
socket attaches the port no in this layer.
it controls the congestion which happens due to difference in flow speed at sender and receiver end.
congestion control algorithms:
check sum:
Timers: 

Transport - segments.
Network - packets.
data link - frames.

Network Layer:
Routing Table is used to find the best route to reach the destination.
Control plan: It is used to create the routing table.
static routing.
dynamic routing.
IP (Internet Protocol):
IPV4 - 32 bits, 4 words.
IPV6 - 128 bits.
classes in IP addresses.
subnet:
Resevered address and loopback addresses.

packets : Header is of 20 bytes.

IPV4 vs IPV6

Middle Boxes:
firewall: 
framing:
Error Detection: