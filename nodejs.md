nodejs - a framework which directly compiles the javascript without the help of browser. it is used to create server-side web applications and api for the frontend.aysnchronous and single threaded.fast, opensource, scalable and asynchronous.

Node. js runs JavaScript code in a single thread, which means that your code can only do one task at a time. However, Node. js itself is multithreaded and provides hidden threads through the libuv library, which handles I/O operations like reading files from a disk or network requests.Through the use of hidden threads, Node.js provides asynchronous methods that allow your code to make I/O requests without blocking the main thread.
Handling more and more concurrent client’s request is very easy.
Even though our Node JS Application receives more and more Concurrent client requests, there is no need of creating more and more threads, because of Event loop.
Node JS application uses less Threads so that it can utilize only less resources or memory

synchronous - evey statement of code get executed in a sequence one by one.

asynchronous - next statement of code will get executed when a synchrounous code blocks the execution. parallel execution.
    setTimeout(() => {
        document.write("Let us see what happens");
    }, 2000);

callback funtions?
async await?
promises?

working of nodejs:Node.js accepts the request from the clients and sends the response, while working with the request node.js handles them with a single thread. To operate I/O operations or requests node.js use the concept of hidden threads.
Asynchronous
Non-blocking I/o: Non-blocking i/o  means working with multiple requests without blocking the thread for a single request. I/O basically interacts with external systems such as files, databases. Node.js is not used for CPU-intensive work means for calculations, video processing because a single thread cannot handle the CPU works.
