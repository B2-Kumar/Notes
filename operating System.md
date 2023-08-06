An Operating System can be defined as an interface between user and hardware.The purpose of an operating system is to provide an environment in which a user can execute programs in convenient and efficient manner.
1. Process Management
2. Process Synchronization
3. Memory Management
4. CPU Scheduling
5. File Management
6. Security

batch os - similar jobs are grouped together in batches and then executed in groups.
advantages - eliminates cpu time between two jobs.
disadvantages - suffers starvation. non-interactive

multiprogramming os - each process requires cpu time and i/o time. when a process does i/o cpu start the execution of other processes improving the efficiency and removing idleness of the system. non - interactive.

multiprocessing os - parallel computing. more than one processors present which can execute more than one process at the same time.

multitasking os - allows to run multiple tasks run concurrently. cpu switches rapidly among tasks, allocating a small time to each process.

network os - used in business environments and organizations where multiple computers need to be interconnected for data sharing, collaboration, and resource management.

real time os - requires precise ans predictable timing.video call.

Time sharing os - allows multiple users to simultaneously share the resources of a single computer.

Distributed os - These systems allow resources and processing tasks to be distributed across the network, providing increased scalability and fault tolerance

Program - a set of instructions or code written in a high level programming language.
Process - execution of program.

Process states : https://static.javatpoint.com/operating-system/images/os-process-state-diagram.png
new - a program picked up first time is called new process.
ready - program is queued and waiting for cpu to be asingned.
running - the program is getting executed.
blocked/waiting - waiting for i/o processes.
terminates - execution completed or terminated due to some issues.
suspend ready/wait - completes the i/o processes and waiting to be queued in ready state.

process scheduling:
what is short term, long term and mediun term schedular?
long term schedular - it chooses processes from the secondary memory and keeps them in the ready queue in main memory.
short term schedular - it selects one of the process from the ready state and put in the running state.
medium term schedular - if a process needs i/o processing time then it is sent from running state to waiting state.

Arrival time - time at which process enters ready queue.
Burst time - time taken to execute the process excluding waiting time.
Completion time - time at which process completes the execution.
Turnaround time - total time spent from its arrival to completion including waiting time.
waiting time - time for which process waits for cpu in ready state.
response time time at which process gets cpu for the first time.

cpu scheduling - it determines the order in which processes are allocated cpu time to achieve efficient cpu utilization and provide reasonable response time to the users and applications.

FCFS - first come first serve. (FIFO).
Round Robin / preemptive type of scheduling.
shortest job first.
shortest remaining time first - preemptive version of shortest job first.
priority scheduling.
Highest Response Ratio first - (waiting time + burst time)/burst time.

non-preemptive - once a process starts, it continues untill it completes.
preemptive - os can interrupt the running process and allocate cpu to the another process.

process synchronization: A cooperative process is the one which can affect the execution of other process or can be affected by the execution of other process. Such processes need to be synchronized so that their order of execution can be guaranteed.

Race Condition : occurs when two or more threads try to read, write and possibly make the decisions based on the memory that they are accessing concurrently.

Critical Section : The regions of a program that try to access shared resources and may cause race conditions are called critical section. To avoid race condition among the processes, we need to assure that only one process at a time can execute within the critical section.

Requirements of Synchronization mechanisms:
Primary:
1. Mutual Exclusion - if one process is executing inside critical section then the other process must not enter in the critical section.
2. Progress - if one process doesn't need to execute into critical section then it should not stop other processes to get into the critical section.
Secondary:
1. Bounded Waiting - The process must not be endlessly waiting for getting into the critical section.
2. Architectural Neutrality - If the mechanism is working on one architecture then it should also run on the other ones as well.

Lock Variable - value of variable lock can be 0 or 1.A process which wants to get into the critical section first checks the value of the lock variable. If it is 0 then it sets the value of lock as 1 and enters into the critical section, otherwise it waits.

Turn Variable: valid only for two processes.

Paterson Solution:

semaphores: used to synchronize the processes.
1. Counting Semaphores.
2. Binary Semaphores.






Deadlock: a state in a computer system where two or more processes are unable to proceed further because each is waiting for a resource that is held by another process in the set.
necessary conditions for deadlock:
Mutual Exclusion - two process can not use same resource at the same time.
hold and wait - Processes hold resources while waiting for additional resources that are held by other processes.
No Preemption: Resources cannot be forcibly taken away from a process; they must be released voluntarily by the process.
Circular Wait: There exists a circular chain of processes, where each process is waiting for a resource held by another process in the chain.
Strategies to resolve deadlocks:
Ignorance: ignores the deadlock. it is useful when deadlock occurs very rarely.
Prevention: Ensuring that one of the four necessary conditions for deadlock never occurs. This can be challenging to achieve in practice and may lead to resource underutilization.
Avoidance: Employing resource allocation algorithms to determine if granting a resource to a process may lead to deadlock. If a deadlock is possible, the allocation is deferred until it is safe.
Detection and Recovery: Periodically checking for the existence of deadlocks in the system. If a deadlock is detected, the system can break the deadlock by releasing some resources or terminating one or more processes called rollback.
Resource Allocation Graph.

Memory Management:
fixed partitioning - a memory management technique where the main memory (RAM) is divided into fixed-sized partitions or regions. Each partition is a distinct block of memory that can be allocated to a process or task. The size of each partition remains constant, and processes are required to fit into these pre-defined partitions.

Internal Fragmentation - if the size of process is lesser than the size of partition then some memory get wasted this is called internal fragmentation.

External Fragmentation - when there is enough total free memory available to satisfy a memory request, but the free memory is scattered in small, non-contiguous blocks or pages

Limitation on the size of the process - if process size is larger than than the partition size then the process can not be loaded into the memory.

Degree of Multiprogramming is less and fixed.

Dynamic Partitioning : partition size is declared  at the time of process loading.

no internal framgmentation.
degree of multiprogramming is dynamic.
no limitation on the size of the process.

external fragmentation.
compaction - using this all free spaces are tranferred to single space and merged.

Partitioning Algorithms:
First Fit Algorithms - the operating system searches for the first available memory block that is large enough to accommodate the process and allocates that block to the process.
Next Fit Algorithms - the operating system starts searching for an available memory block from the last allocated block and moves forward in memory until it finds a suitable block that can accommodate the process.
Best Fit algorithm - the operating system searches for the smallest available memory block that can accommodate the process and allocates that block to the process. 
Worst Fit algorithm - the operating system searches for the largest available memory block and allocates that block to the process.


Paging: Paging is a memory management scheme in which the main memory (RAM) is divided into fixed-sized blocks called frames, and the processes are divided into fixed-sized blocks called pages. Each page of a process can be mapped to any available frame in the main memory.
1. Non-contiguous Memory Allocation
2. Efficient Memory Utilization
3. Simplified Memory Management
4. Memory Protection
5. Virtual Memory
6. Shared Memory

Virtual Memory : With virtual memory, processes can use more memory than is physically available in the main memory. Pages that are not currently needed can be stored on secondary storage (e.g., hard disk) and brought into memory only when required (demand paging).

Segmentation : 


Disk Scheduling: a process needs two type of time, CPU time and IO time. For I/O, it requests the Operating system to access the disk.The technique that operating system uses to determine the request which is to be satisfied next is called disk scheduling.

Disk Scheduling Alogorithms: 
