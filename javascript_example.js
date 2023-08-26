'use strict'
const person = {
  name: "John",
  age: 30
};

const personJSON = JSON.stringify(person);
console.log(personJSON); // Output: {"name":"John","age":30}

const personObject = JSON.parse(personJSON);
console.log(personObject.name); // Output: John

func();

function func() {
  return console.log("SHI HAI...")
}


function varExample() {
  console.log(x);
  if (true) {
    x = 10;
  }
  console.log(x); // Output: 10 (hoisted and accessible)
}
varExample();

val = 404
console.log(val)
var val

function varExample(){
  console.log("chakjljkajds")
}

// console.log(x)

// exec() and test() methods.

const pattern = /Hello/;
const text = "Hello, world!";

const result = pattern.exec(text);
console.log(result); // Output: ["hello", index: 0, input: "Hello, world!"]

const isMatch = pattern.test(text);
console.log(isMatch); // Output: true

// currying

function add (a) {
  return function(b){
    return console.log(a + b)
  }
}
add(3)(4) 

// Constructor function for creating Person objects
function Person(name, age) {
  this.name = name;
  this.age = age;
}

// Creating instances of Person using the constructor
const person1 = new Person("Alice", 30);
const person2 = new Person("Bob", 25);

console.log(person1.name); // Output: Alice
console.log(person2.age);  // Output: 25

// spread operators
const numbers = [1, 2, 3, 4];
const copiedNumbers = [...numbers];

console.log(copiedNumbers); // Output: [1, 2, 3, 4]

function multiply(a, b, c) {
  return a * b * c;
}
const values = [2, 3, 4];
console.log(multiply(...values)); // Output: 24

// Rest Operators
function myFunction(a, b, ...rest) { // Rest parameter collects remaining arguments
  console.log(a); // Output: 1
  console.log(b); // Output: 2
  console.log(rest); // Output: [3, 4, 5]
}
myFunction(1, 2, 3, 4, 5);

// class in javascript
class per {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  sayHello() {
    console.log(`Hello, my name is ${this.name}.`);
  }
}

const p1 = new per("Alice", 30);
const p2 = new per("Bob", 25);

// Object Destructuring
const arr = [1, 2, 3];
const [first,second,third] = arr;
console.log(first); // Outputs 1
console.log(second); // Outputs 2
console.log(third); // Outputs 3
