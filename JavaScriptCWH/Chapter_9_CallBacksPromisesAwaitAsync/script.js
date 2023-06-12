// example of synchronous programming
/*
let a = prompt("Name:")
let b = prompt("Age:")
let c = prompt("Country:")
console.log(" "+a+" lives in "+c+" whose age is "+b)
*/ 
// Asynchronous programming
/*console.log("Start")
setTimeout(()=>{
    console.log("Hello this is running in Asynchronous way")
},3000)
console.log("End")
*/
// callback function - function passed as an argument in another function
function loadScript(source){            
    let script = document.createElement("script");
    script.src = source;
    script.onload = function(){
        alert("The script loaded from the source: "+source);
    }
    document.body.appendChild(script);
}
loadScript("https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js")