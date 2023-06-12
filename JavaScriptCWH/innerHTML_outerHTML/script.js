 console.log(document.getElementsByTagName("span")[0])
//  console.dir(document.getElementsByTagName("span")[0]) // returns the searched elements as an object
//
console.log(document.body.firstChild.nodeName) // returns the blank space between the nodes
console.log(document.body.firstElementChild.nodeName) // returns the element only here it's span
// innerHTML
console.log(first.innerHTML) // gets the content of the given element
// second.innerHTML = "Hey man" // sets the content of the given element
// outerHTML
console.log(first.outerHTML) // gets the content as well as the tag
// console.log(second.outerHTML = "<div>Hello using outerHTML</div>") // sets the content as well as the tag
// 
console.log(document.body.firstChild.data) // returns the blank space
console.log(document.body.firstElementChild.nodeValue) //
//textContent
console.log(document.body.textContent)