DBMS : 
a set of applications or programs that provides tool or interface to create and maintain database.
e.g - MySql, MongoDB, etc.

RDBMS : 
Relational database management system. store data in form of tables thus making it easier to access and store data efficiently.
ex - MySql, Oracle db, etc.

Differences between DBMS and RDBMS.
https://www.geeksforgeeks.org/difference-between-rdbms-and-dbms/

Data - Raw Information, unorganised facts.
Information - Organised facts and data.

Database : 
The database is a collection of inter-related or organised data which is used to retrieve, insert and delete the data efficiently. CRUD operations.

example of cloud database - AWS, Oracle database cloud services, Microsoft SQL server
benefits: Lower costs, Automated, Increase Accessibility

advantages of dbms?
controls database redundancy
data sharing
easily maintained
reduce development and maintainance time.

Types of DBMS architecture??
1-tier Architecture - All the components of dbms like client, database and server reside on the same system.
2-tier Architecturen - Server and database reside on the same machine while client reside on a different machine. Applications on client communicate with server with the help of apis like ODBC, JDBC, etc. It has two different layers so it is easy to maintain. Multiple users can use the database at the same time.
3-tier Architecture - It contains another layer between the client and server. So, the client can't directly communicate with the server.The application on the client end interacts with an application server which further communicates with the database system. It enhances security, data integrity, and scalability.

schema - structural representation of the database.It defines the arrangement of the data in the database and provides the blueprint for how data is stored, accessed and related to each other.

different languages in dbms?
ddl - data definition language.define the database.
ex - create, alter, drop, truncate, rename, comment
dml - data manipulation language. manipulate the data.
ex - select, update, insert, delete, merge, call, explain plan, lock table
dcl - data control language.deals with permission and controls of database system.
ex - grant, revoke
tcl - transaction control language.deal with transaction of database.
ex - commit, rollback, savepoint.

acid properties in dbms:
atomicity - all changes in data must be performed successfully or not at all.Atomicity involves the following two operations:
- Abort: If a transaction aborts then all the changes made are not visible.
- Consistency: If a transaction commits then all the changes made are visible.
consistent - data must be consistent before and after the transaction.
- isolation - no other process can change the data while trasaction is going on. each transaction is occurring independently of the others.
- durable - data doesn't get lost in case of system failure or restart and is present in the same state as it was before the system failure or restart.

Data models are used to describe how the data is stored, accessed, and updated in a DBMS. e.g - ER model, Hierarchical model.

ER (Entity Relationship) diagram in DBMS:
Entity - any object, class, person or place.
Strong Entity - Independent Entity.
Weak Entity - An entity that depends on another entity is called weak entity.
Loan-----Installment.
Loan - Strong Entity
Installment - Weak Entity

Attributes - Property of an entity.represented by eclipse.
simple - represents a single, atomic value.
composite - multiple simple attributes.
multi-valued - can have multiple values.
derived - not stored directly but can be derived from other attributes or data in database.
key attributes - attribute that uniquely identify each row in table. primary and composite key are key attributes.

Relationship - describe relations between entities.represented by diamond or rhombus.
one-to-one.
one-to-many.
many-to-one.
many-to-many.

Representation of an ER Diagram.

Cardinality : It means how the entities are arranged to each other or what is the relationship structure between entities in a relationship set.

Keys : It is used to uniquely identify any record from the table and establish and identify relationship between tables.

Primary Key: It is the key which can identify each instance of the entity uniquely.

Candidate key : 
The minimal set of attributes that can uniquely identify a tuple is known as a candidate key.
It is primary key + alternate keys. All keys in the candidate keys that are not primary key are alternate keys.

Super Key : 
A super key is a set of all the keys (with single or multiple attributes) which can uniquely identify the records of the table.

Foreign key : 
Foreign keys are the column of the table used to point to the primary key of another table.

Unique Key : 
Unique Keys are the keys that define the record uniquely in the table. It is different from Primary Keys, as Unique Key can contain one NULL value but Primary Key does not contain any NULL values.

Composite Key:
A composite key is a key that consists of two or more columns working together to uniquely identify records.While a primary key can be a composite key (using multiple columns), not all composite keys are primary keys.It can be a primary key or part of a candidate key.

Generalization
Generalization is like a bottom-up approach in which two or more entities of lower level combine to form a higher level entity if they have some attributes in common.In generalization, entities are combined to form a more generalized entity, i.e., subclasses are combined to make a superclass.

Specialization
Specialization is a top-down approach, and it is opposite to Generalization. In specialization, one higher level entity can be broken down into two lower level entities.
Specialization is used to identify the subset of an entity set that shares some distinguishing characteristics.
Normally, the superclass is defined first, the subclass and its related attributes are defined next, and relationship set are then added.

Aggregation: In aggregation, the relation between two entities is treated as a single entity. In aggregation, relationship with its corresponding entities is aggregated into a higher level entity.

Relational Model:
Domain: It contains a set of atomic values that an attribute can take.
Attribute: It contains the name of a column in a particular table.

Relational Algebra:
1. Select Operation: select tuples that satisfy a given predicate. denoted by sigma.e.g - σ BRANCH_NAME="perryride" (LOAN)  
2. project Operation: select those attribute which we want to appear in the result table. It is denoted by pi.e.g - ∏ NAME, CITY (CUSTOMER)  
3. Union Operation: Suppose there are two tuples R and S. The union operation contains all the tuples that are either in R or S or both in R & S.
R and S must have the attribute of the same number.
It eliminates the duplicate tuples. It is denoted by ∪.
Notation: R ∪ S  
4. Set Intersection: Suppose there are two tuples R and S. The set intersection operation contains all tuples that are in both R & S.
It is denoted by intersection ∩.
Notation: R ∩ S   
5. Set Difference:
Suppose there are two tuples R and S. The set intersection operation contains all tuples that are in R but not in S.
It is denoted by intersection minus (-).
Notation: R - S 
6. Cartesian product
The Cartesian product is used to combine each row in one table with each row in the other table. It is also known as a cross product.
It is denoted by X.
Notation: E X D 
7. Rename Operation:
The rename operation is used to rename the output relation. It is denoted by rho (ρ).
Example: We can use the rename operator to rename STUDENT relation to STUDENT1.
ρ(STUDENT1, STUDENT)  

Join Operations:
A Join operation combine two or more relations, if and only if a given join condition is satisfied. It is denoted by ⋈.
1. Natural Join: A natural join is a type of join operation that automatically matches columns with the same name in the participating tables and combines rows where those columns have equal values. It does not require explicit specification of the columns to be joined on. It relies solely on column names.
The result of a natural join includes only one instance of each column with the same name, eliminating duplicate columns. If the column names are not consistent or have different meanings across the tables, the natural join can lead to unexpected or incorrect results. Natural joins are not as commonly used in practice due to the potential risks associated with relying solely on column names for joining.
2. Outer Join
    1. Left Outer Join (⟕) - This join returns all the rows of the table on the left side of the join and matches rows for the table on the right side of the join. For the rows for which there is no matching row on the right side, the result-set will contain null.
    2. Right Outer Join (⟖) - This join returns all the rows of the table on the right side of the join and matching rows for the table on the left side of the join. For the rows for which there is no matching row on the left side, the result-set will contain null.
    3. Full Outer Join (⟗) - FULL JOIN creates the result-set by combining results of both LEFT JOIN and RIGHT JOIN. The result-set will contain all the rows from both tables. For the rows for which there is no matching, the result-set will contain NULL values.
3. Equi/Inner Join: It selects all rows from both the tables as long as the condition is satisfied and produces the result-set by combining all rows from both the tables where the condition satisfies.

Integrity Constraints:
Relational Calculus:

Functional Dependency - A relationship that exists between two attributes.
X -> Y
The left side (X) of FD is known as a determinant, the right side of the production is known as a dependent.It means that Y is funtionally dependent on X.
>   Trivial Functional Dependency
    A -> B has a trivial dependency if B is a subset of A.
    A -> A, B -> B etc are trivial. e.g - { Employee_Id, Name } → { Name }

>   Non-Trivial Functional Dependency
    A -> B is non-trivial dependency if B is not a subset of A.
    e.g - { Employee_Id, Name } → { Age }

>   Multivalued Functional Dependency:
    Attributes in the dependent set are not dependent on each other.
    For example, X → { Y, Z }, if there exists is no functional dependency between Y and Z, then it is called as Multivalued functional dependency.

Inference Rule(IR): logical deduction or transformation that allows you to draw new conclusions based on existing rules
1. Reflexive Rule:
if Y is a subset of X.
X -> Y
2. Augmentation Rule:
X -> Y then XZ -> YZ
3. Transitive Rule:
X -> Y and Y -> z then X -> Z
4. Union Rule:
X -> Y and X -> Z then X -> YZ
5. Decomposition Rule:
X -> YZ then X -> Y and X -> Z
6. Pseudo Transitive Rule:
X -> Y and YZ -> W then XZ -> W

Decomposition : It is the process of breaking an original relation into multiple sub relations. It helps to remove anomalies, redundancy, and other problems in a DBMS.
1. Lossy Decomposition : No information is lost while decomposing from the original relation. If we join back the sub decomposed relations, the original is obtained.
2. Lossless Decomposition : Some information is lost while decomposing from the original relation. One or more of these conditions would fail and we will not be able to recover complete information as present in the original relation.

> Normalisation: process of decomposing the relations into relations with fewer attributes. It is done to organise the data and attributes of the databases.

- Elimination of Data Redundancy: Redundant data occurs when the same piece of information is stored in multiple places in the database. This redundancy wastes storage space and can lead to inconsistencies if the same data is updated in one place but not in others. Normalization helps in breaking down the data into smaller, related tables, each representing a single subject, which reduces redundancy. Thus data consistency is maintened with the help of normalisation.

- Prevention of Anomalies : Anomalies are the inconsistencies or Irregularities that can occur in a database when the data is not properly organized or structured. 
It is of three types:
1. Insertion Anomaly: This occurs when we are not able to insert data into a database because some attributes may be missing at the time of insertion.
2. Deletion Anomaly: The delete anomaly refers to the situation where the deletion of data results in the unintended loss of some other important data.
3. Updatation Anomaly: The update anomaly is when an update of a single data value requires multiple rows of data to be updated.

> Disadvantages of Normalization
- You cannot start building the database before knowing what the user needs.
- The performance degrades when normalizing the relations to higher normal forms, i.e., 4NF, 5NF.
- It is very time-consuming and difficult to normalize relations of a higher degree.
- Careless decomposition may lead to a bad database design, leading to serious problems.

> Normalization works through a series of stages called Normal forms. The normal forms apply to individual relations. The relation is said to be in particular normal form if it satisfies constraints.

> First Normal Form (1NF)
- A relation will be 1NF if it contains an atomic value. It states that an attribute of a table cannot hold multiple values. It must hold only single-valued attribute.







> Transaction
- It is a set of logically related operation. It contains a group of tasks.
- It is an action or series of actions. It is performed by a single user to perform operations for accessing the contents of the database.

*Operations of Transaction:*
- Read(X): Read operation is used to read the value of X from the database and stores it in a buffer in main memory.

- Write(X): Write operation is used to write the value back to the database from the buffer.

> Commit: It is used to save the work done permanently.
  Rollback: It is used to undo the work done.

*States in a Transaction*
Link: https://static.javatpoint.com/dbms/images/dbms-states-of-transaction.png
> After aborting the transaction, the database recovery module will select one of the two operations:
- Re-start the transaction
- Kill the transaction

Schedule
A series of operation from one transaction to another transaction is known as schedule. It is used to preserve the order of the operation in each of the individual transaction.
1. Serial Schedule: when the first transaction completes its cycle then the next transaction is executed.
for e.g - T1 -> T2 -> T3.
2. Non-serial Schedule: Interleaving of operations are allowed.
3. Serializable schedule: The serializability of schedules is used to find non-serial schedules that allow the transaction to execute concurrently without interfering with one another.

Testing of Serializability
Serialization Graph is used to test the Serializability of a schedule.
Precedence Graph:
Ti -> Tj
If a precedence graph contains a single edge Ti → Tj, then all the instructions of Ti are executed before the first instruction of Tj is executed.
If a precedence graph for schedule S contains a cycle, then S is non-serializable. If the precedence graph has no cycle, then S is known as serializable.



DBMS Concurrency Control
Concurrency Control is the management procedure that is required for controlling concurrent execution of the operations that take place on a database.

- Read-Write Conflict (Dirty Read):
A read-write conflict occurs when one transaction reads a data item that is being modified by another transaction. If the second transaction rolls back, the first transaction will have read uncommitted, inconsistent data.

- Write-Write Conflict (Lost Update):
A write-write conflict occurs when two transactions simultaneously attempt to modify the same data item. One of the changes is overwritten by the other, causing data loss and inconsistency.

- Read-Write Conflict (Unrepeatable Read):
An unrepeatable read conflict occurs when a transaction reads a data item, another transaction modifies the same item, and the first transaction reads the item again. The second read shows a different value, leading to inconsistency.

- Write-Read Conflict (Read Skew):
A read skew conflict occurs when a transaction reads multiple data items, another transaction modifies one of those items, and the first transaction reads the modified item again. This can lead to inconsistent computations based on the data.

- Phantom Read Conflict:
A phantom read conflict occurs when a transaction reads a set of data items based on a certain condition, another transaction inserts or deletes data meeting that condition, and the first transaction re-reads the data. This can result in unexpected rows appearing or disappearing.

- Cycle in Locking (Deadlock):
A deadlock occurs when two or more transactions are waiting for each other to release locks. None of the transactions can proceed, resulting in a standstill.

RAID (Redundant Array of Independent Disk) - It is a technology which is used to connect multiple secondary storage devices for increased performance, data redundancy or both. It gives you the ability to survive one or more drive failure depending upon the RAID level used.There are 7 levels of RAID schemes. These schemas are as RAID 0, RAID 1, ...., RAID 6.
It contains a set of physical disk drives.
In this technology, the operating system views these separate disks as a single logical disk.
In this technology, data is distributed across the physical drives of the array.
Redundancy disk capacity is used to store parity information.
In case of disk failure, the parity information can be helped to recover the data.

RAID 0: provides data stripping, i.e., a data can place across multiple disks. It is based on stripping that means if one disk fails then all data in the array is lost.
This level doesn't provide fault tolerance but increases the system performance.
RAID 1
This level is called mirroring of data as it copies the data from drive 1 to drive 2. It provides 100% redundancy in case of a failure.
Only half space of the drive is used to store the data. The other half of drive is just a mirror to the already stored data.