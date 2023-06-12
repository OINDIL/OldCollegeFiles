// getAttribute
console.log(document.getElementById("first").getAttribute("class")) // "first" is the class name and "Class" is the attribute
// hasAttribute
console.log(document.getElementById("first").hasAttribute("id")) // if the first element contains the attribute then it will return true
console.log(document.getElementById("first").hasAttribute("background")) // returns false
// setAttribute
document.getElementById("second").setAttribute("hidden","true") // set attributes on the basis of string values
// removeAttribute
document.getElementById("third").removeAttribute("class")// removes certain attributes
//attributes
console.log(document.getElementById("fourth").attributes) // shows the assigned attributes
// dataset custom attributes
console.log(document.getElementById("og").dataset) // returns the assigned custom attributes
// dataset.<customName>
console.log(document.getElementById("og").dataset.game) 
console.log(document.getElementById("og").dataset.player) 
