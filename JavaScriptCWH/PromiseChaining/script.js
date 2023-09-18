let promise1 = new Promise((res,rej)=>{
    setTimeout(()=>{
        console.log("Resolved")
        res(69)
    },2000)
}).then((val)=>{ 
    console.log(val)
    return new Promise((res,rej)=>{
        setTimeout(()=>{
            console.log('second promise resolved')
            res(70)
        },2000)
    })
}).then((val)=>{
    console.log(val)
    return new Promise((res,rej)=>{
        rej(new Error('Something is sus'))
    })
}).catch((error)=>{
    console.log(error)
})

