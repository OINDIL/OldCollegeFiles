// console.log("hi my name is oindil")


// let id = setTimeout(() => {
//     console.log("This code executed in 2 secs")
// }, 2000);
// console.log(id)
// console.log("I also call myself TheOG")


// setInterval(() => {
//     console.log("this is setInterval")
// }, 100);

// let promise = new Promise((resolve,reject) =>{
//     console.log("Promise executed")
//     setTimeout(()=>{
//         resolve(true)
//     },2000)
// })
// let promise_rejected = new Promise((resolve,reject) =>{
//     console.log("Promise executed")
//     setTimeout(()=>{
//         reject(new Error("some error occured"))
//     },2000)
// })
// console.log(promise_rejected)
// // .then and .catch
// promise.then((value)=>{
//     console.log("This promise after getting resolved returned "+value)
// })
// promise_rejected.catch((error)=>{
//     console.log("This promise after getting rejected returned "+error)
// })

// rewriting the loadScript function using promises
function loadScript(source){
    return new Promise((res,rej)=>{
        let script = document.createElement("script")
        script.src = source
        script.onload = () => {
            // console.log('Script loaded src: '+source)
            res('Script Loaded')
        }
        script.onerror = () =>{
            rej(new Error('Script got some errors'))
        }
        document.body.appendChild(script)
    }).then((value)=>{
        console.log(value)
    }).catch((error)=>{
        console.log(error)
    })
    // promise.catch((error)=>{
    //     console.log('Script got some errors'+error)
    // })
}
loadScript('https://cdn.jselivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js')