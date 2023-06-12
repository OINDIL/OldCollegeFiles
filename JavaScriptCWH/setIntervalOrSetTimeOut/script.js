// setTimeout function ,  using variable is not possible
document.body.outerHTML = "<p>This is an example of set timeout and setInterval</p>"
/*let a = true
let b = setTimeout(function(){
    alert("setTimeout just got executed")
},2000)*/
// clearTimeout(b) // to clear any given setTimeouts
/*const func = (a,b) =>{
    return console.log("This is setTimeout: "+(a+b))
}
setTimeout(func,2000,2,4) */// we can assign values of certain functions 
// function arguments with setInterval
const hello = (a,b) =>{
    const date = new Date()
    let secs = date.getSeconds();
    // document.writeln(a+b)
    document.writeln(secs)
}

let a = setInterval(hello,1000,1,5)
// clearInterval(a)