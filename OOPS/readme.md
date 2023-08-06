what is oops?
It is basically a programming style that uses the concept of class and object in programming. The popular object-oriented programming languages are c++, java, python, PHP, c#, etc. The main objective of OOPs is to implement real-world entities such as polymorphism, inheritance, encapsulation, abstraction, etc.

what is class?
a user-defined type that describes what a particular kind of object will look like. Thus, a class is a template or blueprint for an object. A class contains variables, methods, and constructors.
```
class class_name{
    // properties 
    // methods
};
```

methods - functions inside class.

Constructor:-Constructors are special class functionsthat perform the initialization of every object. In C++, the constructor is automatically called when an object is created. It is a special method of the class because it does not have any return type. It has the same name as the class itself.
There are three types of constructors in C++: 
★ Default constructor 
★ Parameterized Constructor - takes the arguments
```
class A{
    public:
    // variables or data members
    int a;
    // constructor
    A(){
        a=8;
    }
    // methods
    void f1(){
    }
};
```

★ Copy Constructor - These are a particular type of constructor that takes an object as an argument and copies values of one object’s data members into another object. We pass the class object into another object of the same class in this constructor. As the name suggests, you Copy means to copy the values of one Object into another Object of Class. This is used for Copying the values of a class object into another object of a class, so we call them Copy constructor and for copying the values.

```
#include <bits/stdc++.h>
using namespace std;

class smartphone{
private:
    // Data Members(Properties)
    string model;
    int year_of_manufacture;
    bool _5g_supported;

public:
    // default constructor
    smartphone()
    {
        model = "unknown";

        year_of_manufacture = 0;
        _5g_supported = false;
    }
    // parameterized constructor
    smartphone(string model_string, int manufacture, bool _5g_)
    {
        // initialising data members
        model = model_string;
        year_of_manufacture = manufacture;
        _5g_supported = _5g_;
    }
    // copy constructor
    smartphone(smartphone &obj)
    {
        // copies data of the obj parameter
        model = obj.model;
        year_of_manufacture = obj.year_of_manufacture;
        _5g_supported = obj._5g_supported;
    }
};

int main()
{
    // creating objects of smartphone class

    //  using default constructor
    smartphone unknown;
    //  using parameterized constructor
    smartphone iphone("iphone 11", 2019, false);
    // using copy constructor
    smartphone iphone_2(iphone);
    return 0;
}
```

why do we use private constructor?

constructor overloading - having more than one constructor with different parameters so that every constructor can perform a different task.

Destructor - A destructor is a special member function that works just opposite to a constructor; unlike constructors that are used for initializing an object, destructors destroy (or delete) the object. The purpose of the destructor is to free the resources that the object may have acquired during its lifetime.
start with tilde(~) sign.
no parameters allowed
no return type

```
#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called." << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called." << std::endl;
    }
};

int main() {
    {
        MyClass obj; // Object created within a block
    } // Object goes out of scope, destructor is automatically called

    std::cout << "After the block." << std::endl;

    return 0;
}

output:
Constructor called.
Destructor called.
After the block.
```

when object is created statically then the object get destroyed automatically(destructor is called automatically).
A destructor function is called automatically when: 
➔ the object goes out of scope 
➔ the program ends 
➔ a scope (the { } parenthesis) containing local variable ends. 
➔ a delete operator is called

when object is created dynamically then the we need to maually destroy the object.
```
delete object_name;
```

what is object?
An object is an instance of a Class. It is an identifiable entity with some characteristics and behavior. Objects are the basic units of object-oriented programming.
```
// Syntax to create an object in C++:
class_name objectName;
or
class_name objectName = class_name();
// Syntax to create an object dynamically in C++: 
class_name* objectName = new class_name();
```

```
class A{
    public:
    int a;
    A(){
        
    }
    void f1(){

    }
};

int main(){
    // static creation of object
    A obj1;
    // static creation of object
    A obj2 = A();

    // dynamic creation of object
    A* obj3 = new A();

    return 0;
}
```

why do we need oops?
❖ To make the development and maintenance of projects more effortless. 
❖ To provide the feature of data hiding that is good for security concerns. 
❖ We can solve real-world problems if we are using object-oriented programming. 
❖ It ensures code reusability. 
❖ It lets us write generic code: which will work with a range of data, so we don't have to write basic stuff over and over again.
❖ Problems can be divided into subparts. 
❖ It increases thereadability, understandability, andmaintainability of the code.
❖ Data and code are bound together by encapsulation.

disadvantages of opps:
❖ Requires pre-work and proper planning. 
❖ In certain scenarios, programs can consume a large amount of memory. 
❖ Not suitable for a small problem. 
❖ Proper documentation is required for later use.

diffenences between class and object.
class is a blueprint of object and used to create object while object is an instance of the class.
no memory is allocated when a class is created but memory is created when object is created.

padding - processor doesnot read 1 byte at a time from memory it reads 1 word at a time. 
1 word = 4 bytes in 32-bit architechture.
1 word = 8 bytes in 64-bit architechture.
in one cycle one word is read by the processor from the memory.

Size of char : 1
Size of short int : 2
Size of int : 4
Size of long : 8
Size of float : 4
Size of double : 8

each data type start its memory allocation from its multiple.
```
#include <bits/stdc++.h>
using namespace std;

class Employee{
    char name;
    char x;
    short int age;
    short int val;
    int y;
};

int main(){
    Employee aman;
    cout<<sizeof(aman)<<endl;
    return 0;
}
```
it is done to save cpu cycle.

If want to save memory use #pragma pack(1) above class.

Access Modifiers -  used to assign access to the class members. It sets some restrictions on the class members from accessing the outside functions directly.
Public: All the class members and methods can be accessed everywhere (inside and outside the class).
Private: All the class members and methods can be acceessed only inside the same class.
By default all the members and methods are private.
Protected: All the class members and methods can be acceessed in the same class and derived/child class.

```
class person {
    // nothing written so private
        int a;
    private:
        int b;  // private 
    public:
        int c;  // public
    protected:
        int d;  // protected
};
```



this - this pointer holds the address of the current object. In simple words, you can say that this pointer points to the current object of the class. It allows the member function to access the data members and member functions of the object it is associated with.
There can be three main usages of this keyword in C++. 
● It can be used to refer to a current class instance variable. 
● It can be used to pass the current object as a parameter to another method. 
● It can be used to declare indexers.

Shallow and Deep Copy



const
initialisation list
static keyword : it belongs to class rather than object.
static datatype.
static function - can access only static members.this keyword can not be used in the static function.

using scope resolution operator ::

virtual keyword - used to override the function in derived class.
used to solve diamond problem where only one instance on the same function is created.

friend keyword



encapsulation - data or information hiding
wrapping up data members and functions.
Encapsulation is about wrapping data and methods into a single class and protecting it from outside intervention.
fully encapsualted : all data members or variables are private.

```
class Student
{
    // private data members
private:
    string studentName;
    int studentRollno;
    int studentAge;
    // get method for student name to access
    // private variable studentName
public:
    string getStudentName(){
        return studentName;
    }
    // set method for student name to set
    // the value in private variable studentName
    void setStudentName(string studentName){
        this->studentName = studentName;
    }
    // get method for student rollno to access
    // private variable studentRollno
    int getStudentRollno(){
        return studentRollno;
    }
    // set method for student rollno to set
    // the value in private variable studentRollno
    void setStudentRollno(int studentRollno){
        this->studentRollno = studentRollno;
    }
    // get method for student age to access
    // private variable studentAge
    int getStudentAge(){
        return studentAge;
    }
    // set method for student age to set
    // the value in private variable studentAge
    void setStudentAge(int studentAge){
        this->studentAge = studentAge;
    }
};
```

abstraction - implementation hiding.
Advantages Of Abstraction 
● Only you can make changes to your data or function, and no one else can. 
● It makes the application secure by not allowing anyone else to see the background details. 
● Increases the reusability of the code. 
● Avoids duplication of your code.

```
class abstraction{ 
    private: 
    int a, b; 
    public: 
    // method to set values of private members 
    void set(int x,int y) { 
        a = x; 
        b = y; 
    }
    void display() { 
        cout<<"a = "<< a <<endl; cout<<"b = "<< b <<endl;
    } 
};
```

Inherience - Inheritance is one of the key features of Object-oriented programming in C++. It allows us to create a new class (derived class) from an existing class (base class). The derived class inherits the features from the base class and can have additional features of its own. Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain an application. This also provides an opportunity to reuse the code functionality and fast implementation time.
parent class / base class / super class
child class / sub class

```
class parent_class{ 
    //Body of parent class 
}; 

class child_class: access_modifier parent_class { 
    //Body of child class 
};
```

        child           public      protected   private
        parent
        public          public      protected   private
        protected       protected   protected   private
        private         NA          NA          NA

types of inheritence
1. single inheritence - In single inheritance, one class can extend the functionality of another class. There is only one parent class and one child class in single inheritances.
2. multilevel inheritence - When a class inherits from a derived class, and the derived class becomes the base class of the new class, it is called multilevel inheritance. In multilevel inheritance, there is more than one level.
3. multiple inheritence - inherit from two or more super class. have more than one parent. In multiple inheritance, a class can inherit more than one class. This means that a single child class can have multiple parent classes in this type of inheritance.
4. hierarchical inheritence - parent have more than one child. In hierarchical inheritance, one class is a base class for more than one derived class.
5. Hybrid inheritence - combination of two or more inheritence. Hybrid inheritance is a combination of more than one type of inheritance. For example, A child and parent class relationship that follows multiple and hierarchical inheritances can be called hybrid inheritance.

Inheritence ambiguity.
- can be solved using scope resolution operator.

polymorphism - Polymorphism is considered one of the important features of Object-Oriented Programming. Polymorphism is a concept that allows you to perform a single action in different ways. Polymorphism is the combination of two Greek words. The poly means many, and morphs means forms. So polymorphism means many forms. 
1. compile time polymorphism / static polymorphism.
    1. function overloading - When there are multiple functions in a class with the same name but different parameters, these functions are overloaded. The main advantage of function overloading is that it increases the program’s readability. Functions can be overloaded by using different numbers of arguments or by using different types of arguments.
    2. operator overloading.

2. run time polymorphism / dynamic polymorphism.
    1. Method overriding - Method overriding is a feature that allows you to redefine the parent class method in the child class based on its requirement. In other words, whatever methods the parent class has by default are available in the child class. But, sometimes, a child class may not be satisfied with parent class method implementation. The child class is allowed to redefine that method based on its requirement. This process is called method overriding.
    Rules for method overriding:
    ● The parent class method and the method of the child class must have the same name. 
    ● The parent class method and the method of the child class must have the same parameters.
    ● It is possible through inheritance only.

```
class Parent{ 
    public: 
    void show() { 
        cout<<"Inside parent class"<<endl; 
    } 
}; 
class subclass1: public Parent { 
    public:
    void show() { 
        cout<<"Inside subclass1"<<endl; 
    } 
}; 
class subclass2: public Parent { 
    public:
    void show() { cout<<"Inside subclass2"; 
    } 
};
```

differences between compile time and runtime polymorphism.

differences between abstraction and encapsulation.

Abstract Class - Abstract classes can’t be instantiated, i.e., we cannot create an object of this class. However, we can derive a class from it and instantiate the object of the derived class. An Abstract class has at least one pure virtual function. 
Properties of the abstract classes: 
❖ It can have normal functions and variables along with pure virtual functions. 
❖ Prominently used for upcasting(converting a derived-class reference or pointer to a base-class. In other words, upcasting allows us to treat a derived type as a base type), so its derived classes can use its interface. 
❖ If an abstract class has a derived class, they must implement all pure virtual functions, or they will become abstract.

```
#include<iostream> 
using namespace std; 
class Base{ 
    public: 
    virtual void s() =0;// Pure Virtual Function 
}; 
class Derived: public Base { 
    public: 
    void s() { 
        cout<<"Virtual Function in Derived_class"; 
        } 
}; 

int main() { 
    Base *b; 
    Derived d_obj; 
    b = &d_obj; 
    b->s(); 
}
```
If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class. We cannot create objects of an abstract class. 
However, we can derive classes from them and use their data members and member functions (except pure virtual functions).