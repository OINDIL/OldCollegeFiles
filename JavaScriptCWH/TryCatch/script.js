setTimeout(()=>{
    console.log("This code will run after 1 seconds")
},1000)
// if an error comes between these scheduled tasks then the whole process will stop executing
// console.log(theog) // here this error will stop the code from being executed

// but if we put the same code in try-catch block then it will execute

// try{
//     console.log(theog); // this line got error and logg it in the console
// }catch(err){
//     console.log(err);
// }

// but try-catch doesn't work for scheduled processes

// k

// if we want to logg a scheduled process in the console then we have to use a try-catch inside the scheduled process

    setTimeout(()=>{
        try {
            console.log(theog);
        } catch (error) {
            console.log(error)
        }
    },1000) // this line got error and but didn't logg it in the console

setTimeout(()=>{
    console.log("This code will run after 2 seconds")
},2000)

setTimeout(()=>{
    console.log("This code will run after 3 seconds")
},3000)

setTimeout(()=>{
    console.log("This code will run after 4 seconds")
},4000)

setTimeout(()=>{
    console.log("This code will run after 5 seconds and the process will end")
},5000)
