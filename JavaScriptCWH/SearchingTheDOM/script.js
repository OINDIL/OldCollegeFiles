let cardTitle = document.getElementsByClassName("card-title")[0] // selects elements by their class name 
let cardTitle1 = document.getElementsByClassName("card-title")[1]
let cardTitle2 = document.getElementsByClassName("card-title")[2]
cardTitle.style.color = "red"
cardTitle1.style.color = "blue"
cardTitle2.style.color = "green"
// selects elements by Id in the html, no need for indexing. the below code is in more simplified manner
document.getElementById("item1").style.color = "red"
document.getElementById("item2").style.color = "green"
document.getElementById("item3").style.color = "blue"
// you can add multiple classes inside one class element such as button1
document.querySelector(".button1").style.color = "rgb(255,255,255)" // we can add rgb values to the js
document.querySelector(".button1").style.background = "black"
document.querySelector(".button2").style.color = "white"
document.querySelector(".button2").style.background = "pink"
//
console.log(document.getElementsByTagName("a")) // gives us all the searched tags inside the html file
console.log(document.querySelector(".card").getElementsByTagName("a")) // searching tag "a" inside "card" class
// gives multiple elements based on the class name
console.log(document.getElementsByClassName("nav-item"))
// 
console.log(document.getElementsByName("searchBox"))