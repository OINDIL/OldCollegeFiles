
function x(event){ // event = the event object that js defaulty creates and the code will run without error if the event object is not there
    console.log(event.target)// shows the current target where event is assigned
    console.log(event.clientX,event.clientY) // shows where the client has clicked
    console.log(event.screenX,event.screenY) // returns the x and y coordinates of the window relative to the screen.
    alert("you've clicked the button")
}
function y(){
    alert("you've clicked the button again")
}
document.getElementById("btn").addEventListener("click", x)
// let decision = confirm("Will you click the button?")
// if(decision == true){
//     document.getElementById("btn").addEventListener("click",y)
// }
// else document.getElementById("btn").removeEventListener("click", y) // if the value of confirm is false the event will be removed   
