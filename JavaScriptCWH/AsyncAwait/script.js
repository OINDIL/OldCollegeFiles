async function loadScript(){
    let scriptLoaded = new Promise((res,rej)=>{
        console.log('start of func 1')
        setTimeout(()=>{
            res('Script loaded')
        },3000)
    })
    let scriptDisrupted = new Promise((res,rej)=>{
        console.log('start of func 2')
        setTimeout(()=>{
            res('Script loaded again')
        },5000)
    })
    let a = await scriptLoaded
    let b = await scriptDisrupted
    return [a,b]
}
loadScript().then((val)=>{
    console.log(val)
})