/*
"use strict" // we can use it to identify small errors
const cars = ["mitsubishi", "nissan", "audi"]
for (let name of cars) { // of for values
    console.log(name)
}
for (let index in cars) { // in for index
    console.log(index)
}
let i = 0
*/
// while(i<10){
//     console.log("the numbers are: "+i)
//     i++
// }

// constructor
// let car = {
//     name:"BMW",
//     year:"2023"
// }
/*
class car {
    constructor(name, year) {
        this.name = name
        this.year = year
    }
}
const ob1 = new car("lamborghini", 2023)
console.log(ob1.name)
const ob2 = new car("Mitsubishi", 1999)
console.log(ob2.year)

// modules

import { UserName,printAge,printName } from "./importModule.js"
const ob = new UserName("Oindil",20)
printName(ob)
printAge(ob)
*/
// destructuring
/*
let a,b
[a,b] = [1,2]
console.log(a,b)
let [a,b,c, ...d] = [1,2,3,4,5,6,7,8];
console.log(a,b,c,d)

const arr = ['apple','banana', 'Mango']
let [a,b,c] = arr // array destructuring
console.log(a,b,c)
*/
// destructuring: objects
/*
let bike = {
    bike_name: "Yamaha mt-15",
    cubic_capacity: 155,
    year_of_manufacturing:2018,
    top_speed:140,
    no_of_gears:6,
    bhp:18.4,
    torque:14.1
}
let {bike_name,cubic_capacity,year_of_manufacturing,top_speed,no_of_gears,bhp,torque} = bike
console.log(bike_name,cubic_capacity,year_of_manufacturing,top_speed,no_of_gears,bhp,torque)
*/

//callbacks

function jsCallbacks(name, callback) {
    console.log(`the name is ${name}`)
    callback()
}
function funcCallback() {
    setTimeout(() => {
        console.log("hello, this will run after 2 secs")
    }, 2000);
}
jsCallbacks("oindil_learing_js", funcCallback) // here the function is passed as an 'object'