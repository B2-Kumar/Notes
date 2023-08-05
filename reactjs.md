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