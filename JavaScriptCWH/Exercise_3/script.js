let jokes = ["What do you call a boomerang that won’t come back?, A stick.",
             "What does a cloud wear under his raincoat? , Thunderwear.",
             "Two pickles fell out of a jar onto the floor. What did one say to the other? , Dill with it.",
             "What time is it when the clock strikes 13?, Time to get a new clock.",
             "How does a cucumber become a pickle?, It goes through a jarring experience."
            ]
let random = parseInt(Math.random() * jokes.length)
//  console.log(jokes[0])
// console.log(random)
document.getElementsByClassName("rect-box")[0].innerHTML = jokes[random]
document.querySelector(".rect-box").style.color = "white"
