let arr = ['red' , 'green' , 'blue', 'purple', 'cyan' , 'black' , 'gray']

function changeColor(){
    let empty
    let firstcolor = document.getElementById('box-1').style.backgroundColor = arr[parseInt(Math.random() * arr.length)]
    // let secondColor = document.getElementById('box-2').style.backgroundColor = arr[parseInt(Math.random()* arr.length
    
    
    // return firstcolor
    // secondColor = emptyColor
}

document.getElementById('btn').addEventListener('click', changeColor)
// document.getElementById('box-1').style.backgroundColor = arr[0]
// document.getElementById('box-2').style.backgroundColor = arr[1]