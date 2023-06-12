function loadScript(source,callback){
    let script = document.createElement("script")
    script.src = source
    script.onload = function(){
        alert("The script has been loaded!!")
    }
    document.body.appendChild(script)
    callback();
}
function goodmorning(){alert("The callback function is running!!")}
loadScript("https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js",goodmorning)