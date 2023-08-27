Javascript: JavaScript is a popular web scripting language and is used for client-side and server-side development. It doesn't need compilation before running the application. Javascript application are meant to run inside the browser.

Javascript vs Typescript

variable name cannot start with numeric value.

callback function.
callback vs setTimeout vs promises vs async-await.

Cookies - Cookies are small pieces of data that are stored on a user's device when they visit a website. They are used to remember various types of information, such as user preferences, login sessions, and tracking data.

let - block scope, var - function scope, const - constant throught the javascript program.

closures in javascript?

What are Imports and Exports in JavaScript?
Imports and exports help in writing modular code for our JavaScript applications. With the help of imports and exports, we can split a JavaScript code into multiple files in a project. This greatly simplifies the application source code and encourages code readability.

document and window?

localStorage :
Data stored in localStorage persists even after the browser is closed and is available for future sessions.
Data stored in localStorage has no expiration time and remains stored until explicitly removed by the user or the application.
Data stored in localStorage is shared among all tabs and windows from the same origin (domain).

sessionStorage:
Data stored in sessionStorage is available only within the same session. A session is defined as the duration of the tab or window being open.
Data stored in sessionStorage is not shared between different tabs or windows, even if they are from the same origin.
Data stored in sessionStorage is automatically cleared when the tab or window is closed or when the user navigates away from the page.

this keyword in javascript?

Arrow functions are used to write functions with a short and concise syntax.  Also, it does not require a function keyword for declaration. An arrow function can be omitted with curly braces { } when we have one line of code.

> Hoisting in javascript is the default process behavior of moving declaration of all the variables and functions on top of the scope where scope can be either local or global.

== operator is a comparison operator that used to compare the values
=== operator is also a comparison operator that is used to compare the values as well as types.

Implicit Type Coercion:
When the value of one data type is automatically converted into another data type, it is called Implicit type coercion in javascript. e.g- 4 + "12" = "412"

Statically Typed Language:
In a statically typed language, the data type of a variable is determined at compile-time, and once a variable is declared with a certain type, it cannot be changed. The compiler performs type checking to catch type-related errors before the code is executed.
Examples of statically typed languages include Java, C++, and Swift.
Advantages:
Early detection of type-related errors at compile-time.
Improved code quality and reliability.
Better performance due to compile-time optimizations.
Disadvantages:
Can be more verbose due to explicit type declarations.
May require more effort when dealing with generic or polymorphic code.

Dynamically Typed Language:
In a dynamically typed language, the data type of a variable is determined at runtime when the code is executed. Variables can change their type during their lifetime, and type-related errors are often detected during runtime.
Examples of dynamically typed languages include JavaScript, Python, and Ruby.
Advantages:
More flexibility and less verbose code due to no need for explicit type declarations.
Easier to work with when dealing with dynamic data or rapid prototyping.
Disadvantages:
Type-related errors may only be discovered during runtime, leading to potential runtime failures.
Can be less efficient due to runtime type checking and conversions.

syntax error - occurs when the code follow the syntax of javascript. As a result, the JavaScript engine is unable to understand and interpret the code, and it throws a syntax error. code will not compile.

logical error - also known as a semantic error, occurs when the code compiles and runs without any syntax errors, but the program does not produce the expected or desired outcome due to flawed logic or incorrect reasoning.

promises
Promises in JavaScript have four different states. They are as follows:
Pending : It is an initial state of promise. It is the initial state of promise where it is in the pending state that neither is fulfilled nor rejected. 
Fulfilled : It is the state where the promise has been fulfilled that assures that the async operation is done.
Rejected : It is the state where the promise is rejected and the async operation has failed. 
Settled : It is the state where the promise is rejected or fulfilled.

passed by value and passed by reference

> An Immediately Invoked Function Expression (IIFE) is a JavaScript function that is defined and executed immediately after its creation. particularly useful for encapsulating code, preventing naming conflicts, and controlling variable visibility. also called self invoking function.

use strict?

Higher Order Funtions: these are the functions that take functions(known as callback) as arguments and return them by operating on other functios.

exec() Method : It is used to search for a match in a given string. It returns an array containing information about the first match found or null if no match is found. The returned array contains details about the match, including the matched text, index, and captured groups.

test() Method : It is used to check if a match exists in a given string. It returns a boolean value (true or false) based on whether a match is found or not.

currying : when a function of an argument is transformed into functions of one or more arguments is called Currying.

prototype and object prototype in javascript?

Memoization : To cache the return value of a function concerning its parameters, it is called memoization. It is used to speed up the application especially in case of complex, time consuming functions. 

> Constructor functions are used to create single objects or multiple objects with similar properties and methods.

BOM?

spread operator : Spread or Unpack elements of an array or object into another array or object.

Rest Parameter : Used to represent multiple function arguments as an array. Only used as a parameter in function definitions.

generator function?
weak set?
wead map?
Prototypal vs Classical Inheritance

> Object destructuring is a method to extract elements from an array or an object.
> Temporal Dead Zone is a behavior that occurs with variables declared using let and const keywords before they are initialized.
> Pop-up boxes available in JavaScript are Alert Box, Confirm Box, and Prompt Box.

Event Capturing:
Event capturing is the first phase of the event propagation process. During event capturing, the event starts from the root of the DOM tree and moves down to the target element. It allows you to capture events at the outermost ancestor before they reach the target element. Event listeners attached during the capturing phase are called before any event listeners attached during the bubbling phase.
```javascript
element.addEventListener(eventType, handler, true);
```

Event Bubbling:
Event bubbling is the second phase of the event propagation process. After an event reaches the target element, it starts to bubble up through the DOM tree, triggering event listeners on ancestor elements. This means that events on inner elements are handled first, followed by events on outer elements.
```javascript
element.addEventListener(eventType, handler);
```

call and apply?