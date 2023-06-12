console.log(document.getElementById("box1").matches(".box")) // returns true if the element belongs to the class mentioned in the matches attribute
console.log(document.getElementById("hello").closest(".box")) // finds the ancestor of the given css element
console.log(document.getElementById("box2").contains(hello)) // searches the ancestors of the element, doesn't requires quotetions