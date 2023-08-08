dbms?
dabase management system.a set of applications or programs that enables users to create and maintain database. it provides tool or interface for performing various operations such as inserting, updating, deleting, etc into a database.

rdbms?
relational database management system. store data in form o f tables thus making it easier to access and store data efficiently.
ex - mysql, oracle db...

database?
The database is a collection of inter-related or organised data which is used to retrieve, insert and delete the data efficiently.

data?
collection of information.

advantages of dbms?
controls database redundancy
data sharing
easily maintained
reduce development and maintainance time.

Types of DBMS architecture??

schema - structural representation of the database.It defines the arrangement of the data in the database and provides the blue print for how data is stored accessed and related to each other.

different languages in dbms?
ddl - data definition language.define the database.
ex - create, alter, drop, truncate, rename...
dml - data manipulation language. manipulate the data.
ex - select, update, insert, delete...
dcl - data control language.deals with permission and controls of database system.
ex - grant, revoke...
tcl - transaction control language.deal with transaction of database.
ex - commit, rollback, savepoint.

acid properties in dbms?
atomicity - all changes in data must be performed successfully or not at all.
consistent - data must be consistent before and after the transaction.
isolation - no other process can change the data while trasaction is going on. each transaction is occurring independently of the others.
durable - data doesn't get lost in case of system failure or restart and is present in the same state as it was before the system failure or restart.

ER (Entity Relationship) diagram in DBMS:
Entity - any object, class, person or place.represented as rectangles.
weak entity - an entity that depends on another entity.
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




