function loadScript(source,callback){
    let script = document.createElement("script")
    script.src = source
    script.onload = function() {
      console.log('The script was loaded')
      callback(source);
    }
    script.onerror = function(){
        console.log("The script got error on loading")
        callback(new Error('this got some errors'))
    }
    document.body.appendChild(script)
  }
  function callbackFunc(error,source){
    if(error){
        console.log(error)
        return
    }
    console.log('this is the callback function SRC: '+source)
  }
  loadScript('https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.8/dist/umd/popper.min.js',callbackFunc)