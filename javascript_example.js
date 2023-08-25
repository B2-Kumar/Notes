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
    var x = 10;
  }
  console.log(x); // Output: 10 (hoisted and accessible)
}
varExample();

val = 404
console.log(val)
var val
