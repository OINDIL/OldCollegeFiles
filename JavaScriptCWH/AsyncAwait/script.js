async function loadScript(source){
    let script = document.createElement("script");
    script.src = source;
    console.log('start of onload func')
    let scriptLoaded = new Promise((res,rej)=>{
        setTimeout(()=>{
            script.onload = ()=>{
                console.log("Script loaded");
            }
            res('Script loaded')
        },3000)
    })
    let scriptDisrupted = new Promise((res,rej)=>{
        console.log('start of func 2')
        setTimeout(()=>{
            script.onload = ()=>{
                console.log("Script loaded again");
            }
            res('Script loaded again!!!')
        },5000)
    })
    let a = await scriptLoaded
    let b = await scriptDisrupted
    return [a,b] // we can return multiple values using arrays
}
loadScript('https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.8/dist/umd/popper.min.js').then((val)=>{
    console.log(val)
})