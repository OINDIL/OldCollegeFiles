class UserName{
    constructor(name,age){
        this.name = name;
        this.age = age;
    }
}

function printName(user){
    console.log(`The name of the user is ${user.name}`)
}
function printAge(user){
    console.log(`The user is ${user.age} years old`)
}
export {UserName}
export {printName,printAge}