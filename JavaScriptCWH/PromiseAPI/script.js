// Promise.all 
let Promise1 = new Promise((res,rej)=>{
    setTimeout(() => {
        res('Promise 1 resolved')
    }, 1000);
})
let Promise2 = new Promise((res,rej)=>{
    setTimeout(() => {
        res('Promise 2 resloved')
    }, 2000);
})
let Promise3 = new Promise((res,rej)=>{
    setTimeout(() => {
        // res('Promise 3 resloved')
        rej('promise rejected')
    }, 3000);
})

// Promise.all([Promise1,Promise2,Promise3]).then((val)=>{
//     console.table(val)
// })

// Promise.allSettled([Promise1,Promise2,Promise3]).then((val)=>{
//     // console.log(val)
//     console.table(val)
// })

// Promise.race([Promise1,Promise2,Promise3]).then((val)=>{
//         console.table(val)
// })

// Promise.any([Promise1,Promise2,Promise3]).then((val)=>{
//         console.table(val)
// })

// Promise.resolve(69).then((val)=>{
//         console.table(val)
    // })
Promise.reject(new Error('jaldi waha se hato')).then((val)=>{
        console.table(val)
    })

