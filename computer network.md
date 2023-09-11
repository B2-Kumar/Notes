Network: It refers to a collection of interconnected devices that can communicate and share resources with each other. 

The first network ARPANET is made.

Internet: The internet is a global network of networks. It's a massive interconnected system of various networks worldwide that enables communication and resource sharing on a global scale.

Internet uses a packet switching technique to transmit the data. Thus, the data to be sent is divided into packets and the data is sent in the form of packets only. Each packet of data contains various information like the address of the destination, error control information, etc. Internet majorly uses protocols called Internet Protocol also simply called protocol (IP) and Transmission Control Protocol (TCP) to transmit data from one computer to another.

Protocol: a set of rules and conventions that govern how data is exchanged between devices or systems in a network or communication environment.

TCP - data is not corrupted and 100% data has reached the destination.

UDP - some data may be lost. video call.

HTTP - used by web browsers. format of data transfered in the servers contains all the rules.

Also, there are several other protocols that are used by the internet for different purposes. For example, it uses Simple Mail Transfer Protocol (SMTP) to send mail from one client to another, it uses File Transfer Protocol (FTP) to transfer files over the internet, it uses Hypertext Transfer Protocol (HTTP) through which a browser (client) can interact with the internet server.

To know the IP address of the internet provider - $ curl if config.me -s. some of the ports are reserved. 0 - 1023 are reserved.

> IP address is used to identify the device and port is used to identify to identify application.

> 1mbps = 1000000 bits/second.

WWW - world wide web (Tim Berners Lee).

What happens when we surf the Internet?
1. Extracting IP address of a URL (Uniform Resource Locator) In our browser, we enter the URL (Uniform Resource Locator) address of the website we want to visit. Once we enter the URL address of the website, the browser with the help of the DNS (Domain Name System) extracts the IP address corresponding to the URL address that is entered. The DNS (Domain Name System) contains the mapping of the URLs along with their corresponding IP addresses.
2. Sending request to the server to access the webpage and receiving response Once we get the IP address of the website we want to access using DNS, the browser sends an HTTP (Hypertext Transfer Protocol) request to the server to extract the HTM (Hypertext Markup Language)L webpage corresponding to the IP address. This request is sent over PORT 80 using TCP (Transmission Control Protocol). Once the server receives this HTTP request, it responds back with an HTTP response. This HTTP response consists of the information related to the HTML page corresponding to the IP address of the website.
3. Receiving HTTP response and displaying the webpage The browser receives the HTML (Hypertext Markup Language) information for the website along with the response and hence, it processes and displays the HTML page on the browser. Finally, the users can see an HTML page for the URL that they entered.

What is Circuit Switching?
In circuit switching, a dedicated communication channel is set up between the sender and the receiver. Due to the dedicated circuit, there is extremely little chance of data loss or error but a lot of bandwidth is lost because other senders cannot utilize the same channel when a transmission is going on.
example - Traditional Telephone calls, Emergency services.

What is packet swithching?
In packet switching, the message is first divided into data packets and then transmitted  individually over the network, and each packet can take a different route to reach its destination. It is connectionless, as it doesn't require a dedicated communication channel. These data packets are then grouped at the receiver's end to obtain the actual data or message.
example - Internet Browsing, streaming communication, email communication.

NIC (Network Interface Card) : A NIC is a hardware component that allows a computer or other device to physically connect to a network and communicate with other devices over that network.

Hub: A hub is a basic networking device that operates at the physical layer of the OSI model. It simply receives data packets from one device and broadcasts them to all other devices connected to the hub. Flooding is a simple computer network routing technique in which a source or node sends packets through every outgoing link. The flooding algorithm is easy to implement. The hubs use the flooding algorithm to forward data.

Switch: A switch is a more advanced networking device that operates at the data link layer of the OSI model. Unlike hubs, switches are intelligent and can learn the MAC addresses of devices connected to them. They use this information to forward data only to the specific device for which the data is intended. This significantly reduces unnecessary network traffic and improves overall network performance. When a data frame arrives at any network switch port, it evaluates the destination address(destination MAC address ), performs the necessary checks, and sends the frame to the associated device.

Router: A router is a networking device that operates at the network layer (Layer 3) of the OSI (Open Systems Interconnection) model. Its primary function is to route data packets between different networks. Routers make decisions based on IP addresses and are responsible for determining the best path for data to travel from the source to the destination across multiple networks.

Bridge : A bridge is a device or software component that operates at the data link layer (Layer 2) of the OSI model. Its primary function is to connect and filter traffic between two or more network segments, making them function as a single network.

bridge vs gateway?

modem : A modem is a network device that modulates and demodulates analog carrier signals (known as sine waves) to encode and decode digital data for processing. Because modems perform both of these tasks simultaneously, the term modem is a combination of "modulate" and "demodulate".

Repeater : A repeater is a two-port device that operates at the physical layer . It is used to regenerate the signal over the same network before it becomes too weak or corrupted, allowing the signal to be transmitted for a longer distance over the same network. It is important to understand that repeaters do not amplify the signal. When the signal weakens, repeaters copy it bit by bit and regenerate it at its original strength.

modem vs router?
Hub vs Switch?
Bridge vs Repeater?

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
Simplex Mode: the communication is unidirectional, i.e., the data flow in one direction. A device can only send the data but cannot receive it or it can receive the data but cannot send the data. e.g - keyword, monitor, Radio, TV
Half-Duplex Mode: Messages flow in both the directions, but not at the same time. e.g - walkies talkies, Railway Track
Full-duplex mode: The communication is bi-directional, i.e., the data flow in both the directions. Both the stations can send and receive the message simultaneously. e.g - Telephone Network.

OSI Model:
OSI stands for Open System Interconnection is a reference model that describes how information from a software application in one computer moves through a physical medium to the software application in another computer.
OSI consists of seven layers, and each layer performs a particular network function.

Physical, data link, network layer - Responsibilty of the network also called lower layer.
Transport, Session, Presentation, Application - Resposibility of the host also called upper layer.
Transport Layer is heart of OSI model.
physical, data link, network layer - Hardware Layers.
Application, Presentation, Session layer - software layers.

benefits of osi model:
The change in one layer does not affect the other layers.
The layered architecture reduces the complexity by dividing the task in a manageable way.
The layered architecture provides abstraction from other layers.
Each layer can be changed, tested, and analyzed independently.

Physical Layer: Lowermost Layer of the OSI Model.
This layer deals with the physical transmission of data over the network medium.
Functions:
Defines the hardware characteristics of the network, including cables, connectors, voltage levels, and transmission speeds.
Converts digital data into signals suitable for transmission.
It deals with the type of network topology.
It also deals with the type of transmission - simplex, half-duplex, full-duplex.
Bits synchronization :
Example: Ethernet cables, fiber optics, wireless radio waves.
The various protocols used in the physical layer are :
Digital Subscriber Line.
Integrated Services Digital Network.
Ethernet, etc.
The various devices used in the physical layer are :
Network adapters,
Hubs,
Cables,
Repeaters,
Modem, etc.

point to point configuration : It provides a dedicated linking or the cabling between two devices. The entire capacity of the link is reserved for the data transmission between those two devices. It is the simplest and the most efficient point of connection topology between the devices.

Network devices are physical devices that enable communication and interaction between hardware on a computer network. e.g - hub, bridge, repeater, modem, router, gateway, etc.

Reasons to Have Both IP and MAC Addresses: 
Every MAC address assigned to the NIC of a physical device that aids in network device identification is the solution to this question.
On the internet, a response is sent to our IP address when we ask for a page to load.
The internet protocol suite has different layers on which MAC and IP addresses work. The layer 2 MAC address identifies the devices connected to the same broadcast network (such as the router). On the other hand, layer 3 uses IP addresses to aid distinguish between devices on various networks. The MAC address is still required to locate the devices on the same network even when we have the IP address to identify the device over other networks.
IP addresses manage the logical routable connection from computer to computer AND network to network while MAC addresses manage the actual connection between computers.

Bandwidth : Bandwidth in computer networks refers to the maximum data transfer rate or capacity of a network channel or communication link. It represents the amount of data that can be transmitted in a given time frame.

Data Link Layer:
This layer focuses on creating a reliable link between two directly connected nodes and managing data frames.
Functions:
Framing : It is the technique in which the data is divided into streams of bits (called frames) received from the network layer. Along with the conversion of data into frames, the data link layer adds a header and trailer to the frames. The header (present at the starting of the frame) contains the hardware's physical address of source and destination. The trailer (present at the end of the frame) contains the error detection and correction bits.
Physical addressing: Adds MAC addresses to frames for addressing.
Flow control: Ensures data flows at a rate both sender and receiver can handle.
Error detection and correction: Detects and handles errors in transmitted data.
Example: Ethernet frames, Wi-Fi frames.
The various protocols used in this layer are :
PPP (Point-to-Point Protocol),
Frame Relay,
ATM (The asynchronous transfer mode protocol), etc.
The various devices used in this layer are :
Bridges,
Switches,
NIC cards (Network Interface Cards), etc.
Ethernet?

What is Flow Control in Data Link Layer ?
Flow control is a set of procedures that restrict the amount of data a sender should send before it waits for some acknowledgment from the receiver.
Methods of Flow Control are Stop-and-wait and Sliding window.
Buffers are blocks in the memory that store data until it is processed. If the buffer is overloaded and there is more incoming data, then the receiver will start losing frames.Thus, flow control is the method of controlling the rate of transmission of data to a value that the receiver can handle.

ACK (Acknowledgment): This bit is set to indicate that the receiver has successfully received the data or frame. It serves as a positive acknowledgment to the sender, indicating that the data was received without errors.
NACK (Negative Acknowledgment): In some protocols, a NACK bit is used to indicate that the receiver encountered errors or issues while trying to receive the data. A NACK is a negative acknowledgment, indicating that the data transmission was not successful.

Stop-and-wait Protocol
Stop-and-wait protocol works under the assumption that the communication channel is noiseless and transmissions are error-free.
Working :
The sender sends data to the receiver.
The sender stops and waits for the acknowledgment.
The receiver receives the data and processes it.
The receiver sends an acknowledgment for the above data to the sender.
The sender sends data to the receiver after receiving the acknowledgment of previously sent data.
The process is unidirectional and continues until the sender sends the End of Transmission (EoT) frame.
It is secure.
Problems Occur Due to Lost Data - Infinite waiting time.
Problems Occur Due to Lost Acknowledgment

Stop-and-Wait ARQ (Automatic Repeat Request)
Initially, the sender sends one frame as the window size is 1. The receiver on the other end receives the frame and sends the ACK for the correctly received frame. The sender waits for the ACK until the timer expires. If the sender does not receive the ACK within the timer limit, it re-transmits the frame for which the ACK has not been received.
Problem of Lost Data Packet
Problem of Lost/ Delayed Acknowledgement - To overcome this type of problem, the sender uses sequence numbering. When the sender sends the data packet, it attaches a certain sequence number which helps the receiver identify the data packet. If the timer goes off before receiving the acknowledgment from the receiver, the sender retransmits the same data packet. But in this case, the receiver already has the data packet, so it discards the data and sends it back an acknowledgment.
Problem of Damaged Packet
The window size of the sender and the receiver is only 1. So, only one frame can be sent at a time.
There is no negative acknowledgment for the lost or damaged frames. So, there is no NACK (negative acknowledgment) in case of stop and wait ARQ.

Go-Back-N ARQ Protocol
Go Back N ARQ is a sliding window protocol which is used for flow control purposes. Multiple frames present in a single window are sent together from sender to receiver.
Pipelining is allowed in the Go Back N ARQ protocol. Pipelining means sending a frame before receiving the acknowledgment for the previously sent frame.
The size of the sender window in Go Back N ARQ is equal to N.
The size of the receiver window in Go Back N ARQ is equal to 1.
When the acknowledgment for one frame is not received by the sender or the frames received by the receiver are out of order, then the whole window starting from the corrupted frame is retransmitted.
Retransmission of all the frames on detecting a corrupted frame increases channel congestion and also increases the bandwidth requirement.

Selective Repreat ARQ
In selective repeat ARQ, the sender sets a timer for each frame so whenever the timer is over and the sender has not received any acknowledgment for the frame or receiver sends NACK, then the sender knows that the particular frame is either lost or damaged. So, the sender sends back the lost or damaged frame once the timer is out. The ACK and the NACK have the sequence number of the frame that helps the sender to identify the lost frame.
As the receiver may receive the frames in a different order, the receiver has the capability of sorting the frames present in the memory buffer using the sequence numbers. On the other hand, the sender must be capable enough to search for the lost frame for which the NACK has been received. So searching at the sender's end and sorting at the receiver's are two minor drawbacks of the selective repeat ARQ.

Error Detection Techniques
Three methods are used to detect an error in frames: Parity check, Checksum, and Cyclic Redundancy Check (CRC).
1. Parity Check The parity check is performed by adding an extra bit to the data known as the parity bit, which results in a number of 1s that are either even in the case of even parity or odd in the case of odd parity. The parity check is only useful for detecting single-bit errors.
The sender counts the amount of 1s in the frame and adds the parity bit in the following manner:
Even parity: If the number of 1s is even, the parity bit value will be 0. The parity bit value will be 1 if the number of 1s is odd.
Odd parity: If the number of 1s is odd, the parity bit value will be 0. The parity bit value will be 1 if the number of 1s is even.
2. Cyclic Redundancy Check(CRC) :  In the sender part, we have appended n bits (all zeroes) to the data part, and then we divide the total data part (data + appended bits) with the divisor (generated from the generator polynomial). Now we get n CRC bits as the remainder. We append the CRC bits to the data part and send it to the receiver.
On the receiver side, we divide the received data with the same divisor. If the receiver gets the remainder value as 0, then the received data is totally correct, or else the received data has some error.
3. CheckSum : The sender divides data into blocks of equal size and then adds the data of every block using 1’s complement arithmetic to get the sum. It then complements the sum to get the Checksum and sends it along with the data frames. 
The receiver receives data + Checksum and passes it to the checksum validator.
Then do the same process as it is done at the sender's end. If we got a result that contains only 0, then ACCEPT the data, otherwise, REJECT the data.

Network Layer:
This layer is responsible for routing data packets across different networks to reach their destinations.
Functions:
Logical addressing: Assigns IP addresses to devices for identification.
Routing: Determines the best path for data packets to travel between networks.
Subnetting: Divides networks into smaller segments for efficient routing.
Example: IP (Internet Protocol), routers.
The various protocols used in this layer are :
IPv4 (Internet Protocol version 4),
IPv6 (Internet Protocol version 6),
ICMP (Internet Control Message Protocol),
IPSEC ( IP Security),
ARP (Address Resolution Protocol),
MPLS (Multiprotocol Label Switching), etc.
The various devices used in this layer are :
Routers,
Brouters, etc.

Transport Layer:
This layer ensures end-to-end communication, reliability, and data integrity between devices on different networks.
Functions:
One of the major tasks of the transport layer is to add the port addressing (addition of a port number to the header of the data). The port number is added so that the data can be sent at the respective process only.
Segmentation and reassembly: Divides large messages (with port no and sequenct no) into smaller segments and reassembles them at the destination.
Flow control: Manages data flow to prevent congestion.
Error detection and correction: Ensures data integrity.
Example: TCP (Transmission Control Protocol), UDP (User Datagram Protocol).
The various protocols used in this layer are :
TCP (Transmission Control Protocol),
UDP (User Datagram Protocol), etc.
The various devices used in this layer are :
Segments,
Load Balancers/Firewalls, etc.

Session Layer:
This layer manages the establishment, maintenance, and termination of communication sessions between two devices.
The session layer is responsible to create a dialog box which allows two systems to enter into a dialog and transmit the data in either half-duplex or full-duplex mode.
The session layer is also responsible t adding synchronization bits or checkpoints into the stream of data. These checkpoints help to detect any kind of error that may have occurred during the data transmission. So, if an error has occurred in between the transmission then the re-transmission will take place from the last checkpoint only.
Functions:
Session establishment, maintenance, and termination.
Synchronization of data exchange.
Example: NetBIOS, RPC (Remote Procedure Call).
The various protocols used in this layer are :
PAP (Password Authentication Protocol)
PPTP (Point-to-Point Tunneling Protocol)
RPC (Remote Procedure Call Protocol)
RTCP (Real-time Transport Control Protocol), etc.
The various devices used in this layer are :
Gateway, etc.

Presentation Layer:
This layer deals with data format conversion, encryption, and compression to ensure compatibility between different devices and systems. Since different computer systems use different encoding systems so the presentation layer must translate the data into a computer-dependent format.
Functions:
Data translation: Converts data between different formats.
Encryption and decryption: Secures data during transmission.
Data compression: Reduces the size of data for efficient transmission.
Example: SSL/TLS, JPEG, GIF.
The various protocols used in this layer are:
AFP (Apple Filing Protocol),
ICA (Independent Computing Architecture),
Citrix system core protocol,
LPP (Lightweight Presentation Protocol),
NCP (NetWare Core Protocol),
NDR (Network Data Representation),
Tox protocol, etc.

Application Layer:
This is the top layer that directly interacts with user applications and provides network services. Application layers allow users to access and share files, access and send emails, access webpages (via the world wide web), etc.
Functions:
Application protocols: Support specific services for users and applications.
User interfaces and APIs: Provide interfaces for application communication.
Example: HTTP, FTP, SMTP, DNS.
The various protocols used in this layer are:
DNS (Domain Name System),
SMTP (Simple Mail Transfer Protocol),
FTP (File Transfer Protocol),
POP (Post Office Protocol),
HTTP (HyperText Transfer Protocol), etc.
The various devices used in this layer are:
PC's (Personal Computer),
Phones,
Servers,
Firewalls, etc.

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

>  In general the first address is the network identification and the last one is the broadcast, they cannot be used as regular addresses.

packets : Header is of 20 bytes.

IPV4 vs IPV6

Middle Boxes:
firewall: 
framing:
Error Detection:

VPN?