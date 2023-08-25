dom - DOM stands for Document Object Model. It is a programming interface provided by web browsers that represents the structure of an HTML or XML document as a tree-like data structure.When a web page is loaded, the browser parses the HTML or XML code and creates a DOM tree, which is a hierarchical representation of the page's elements.

virtual dom -it doesn't directly update html. Instead of directly manipulating the real dom, it acts lightweight copy of the real dom which keeps the track of all the changes made. it compares with the real dom and it updates the jsx which is changed or updated making it fast.It efficiently determines the minimal number of changes required to update the real DOM to match the new UI representation.

real dom - it is the actual representation of the html document in the browser.updating the whole real dom every time makes the application slow so in react js concept of virtual dom is used.

react - open source javascript library used for building user interfaces and single page applications.
componenet based architectures.
virtual dom.
unidirectional dataflow.
declarative - we tell what we want to be done without taking care of the steps and process. // imperative - opposite of declarative.
jsx - javascript and html together.

differences between library and frameworks:
A library is a collection of pre-written and pre-compiled code that provides specific functionalities or features.
reactjs, jquery, axios.
A framework is a set of pre-written code that provides a structure for developing software applications.
Nextjs, Angular, Vuejs, Django, Ruby

e.preventDefalut - prevents the default funtions. in case of forms it prevents the page from reloading.

features of reactjs-
JSX : It is a syntax extension of javascript by using which we can write html and javascript code together.
components - It is the building blocks of any react application as react is single page application so it uses multiple components to render without reloading the page. It breaks the user interface into independent, reusable parts that can be processed separately.
virtual dom - a lightweight representation of the real DOM in the memory. When the state of an object changes, virtual DOM changes only that object in the real DOM, rather than updating all the objects.
one way data binding - It means data flows only from parent to its child in hierchical order. Unidirectional data flow keeps everything modular and fast. since the data flows in a single direction, it becomes easier to debug errors and know where the problem occurs in an application at the moment.

Can web browers read jsx directly?
No, web browsers cannot read JSX directly. JSX (JavaScript XML) is a syntax extension for JavaScript commonly used with React for describing the structure and rendering of UI components. Browsers understand standard JavaScript, but JSX is not valid JavaScript on its own. Therefore, JSX code needs to be transformed into regular JavaScript before it can be understood and executed by web browsers.
This transformation process is typically done using a tool called a "transpiler." The most common transpiler for JSX is Babel. Babel converts JSX code into equivalent JavaScript code that browsers can understand. This includes transforming JSX elements into regular function calls and object structures.
React come with Babel configurations preconfigured.

differences between ES6 and ES5?
