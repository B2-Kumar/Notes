dom - DOM stands for Document Object Model. It is a programming interface provided by web browsers that represents the structure of an HTML or XML document as a tree-like data structure.When a web page is loaded, the browser parses the HTML or XML code and creates a DOM tree, which is a hierarchical representation of the page's elements.

virtual dom - It doesn't directly update html. Instead of directly manipulating the real dom, it acts lightweight copy of the real dom which keeps the track of all the changes made. it compares with the real dom and it updates the jsx which is changed or updated making it fast.It efficiently determines the minimal number of changes required to update the real DOM to match the new UI representation.

real dom - it is the actual representation of the html document in the browser.updating the whole real dom every time makes the application slow so in react js concept of virtual dom is used.

react - open source javascript library used for building user interfaces and single page applications.
componenet based architectures.
virtual dom.
unidirectional dataflow.
declarative - we tell what we want to be done without taking care of the steps and process. React is primarily a declarative library for building user interfaces. This means that in React, you describe what you want the user interface to look like based on the current state, and React takes care of updating the actual DOM to match that description. Instead of directly manipulating the DOM through imperative commands, you specify the desired UI state, and React handles the updates for you. // imperative - opposite of declarative.
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
synthetic events in React?
Life Cycle of React Js?

why do we need of using keys in lists?
A key is a unique identifier and it is used to identify which items have changed, been updated or deleted from the lists
It also helps to determine which components need to be re-rendered instead of re-rendering all the components every time. Therefore, it increases performance, as only the updated components are re-rendered

client side rendering vs server side rendering?

React vs Angular
React - Facebook, Virtual Dom, Uni-directional, server-side.
Angular - Google, Real Dom, Bi-directional, client-side.

Components in React Js:
Functional Components: These types of components have no state of their own and only contain render methods, and therefore are also called stateless components. They may derive data from other components as props (properties).
```jsx
function Greeting(props) {
  return <h1>Welcome to {props.name}</h1>;
}
```
Class Components: These types of components can hold and manage their own state and have a separate render method to return JSX on the screen. They are also called Stateful components as they can have a state.
```jsx
class Greeting extends React.Component {
  render() {
    return <h1>Welcome to {this.props.name}</h1>;
  }
}
```

What are props in React?
Props are short for Properties. It is a React built-in object that stores the value of attributes of a tag and works similarly to HTML attributes.
It provide a way to pass data from one component to another component. It is passed to the component in the same way as arguments are passed in a function.

> A higher-order component acts as a container for other components. This helps to keep components simple and enables re-usability. They are generally used when multiple components have to use a common logic

Context API : The Context API is a feature in React that provides a way to share state data and functionality across multiple components in a component tree without having to pass props down manually at every level. It allows you to create a global state and make it accessible to any component in your application, regardless of its position in the component hierarchy. It simplifies prop drilling, which is the process of passing data through multiple levels of components, by offering a centralized mechanism for managing shared state.

How to create context : 
1. Creating a Context :
To create a context, use the React.createContext() function. This returns an object containing two components: Provider and Consumer.
2. Providing the Context :
Wrap the part of your component tree where you want to share the context with the Provider component. The Provider component accepts a value prop that contains the data or functions you want to share.
3. Consuming the Context :
Use the Consumer component, or more commonly, the useContext hook, to access the shared context data within child components. The Consumer or useContext hook allows you to access the data without passing props explicitly.
```jsx
import React, { createContext, useContext } from 'react';

// Step 1: Create a Context
const ThemeContext = createContext();

// Step 2: Provide the Context
function App() {
  const theme = 'light'; // Example theme value
  return (
    <ThemeContext.Provider value={theme}>
      <Header />
      <MainContent />
    </ThemeContext.Provider>
  );
}

// Step 3: Consume the Context
function Header() {
  const theme = useContext(ThemeContext);
  return <header className={`header-${theme}`}>Header</header>;
}

function MainContent() {
  const theme = useContext(ThemeContext);
  return <div className={`content-${theme}`}>Main Content</div>;
}
```
why?
benefits of context api over redux.

Redux : 
Redux is an open-source, JavaScript library used to manage the application state. React uses Redux to build the user interface. It is a predictable state container for JavaScript applications and is used for the entire application’s state management.

components of Redux : 
Store: Holds the state of the application.
Action: The source information for the store.
Reducer: Specifies how the application's state changes in response to actions sent to the store.

React Router - A routing library which is used to create routers in react application.

