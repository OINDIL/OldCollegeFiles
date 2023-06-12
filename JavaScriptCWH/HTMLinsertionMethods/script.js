let a = document.getElementsByTagName("div")[0]
a.innerHTML = a.innerHTML + "<h1>This element is inserted using html insertion methods</h1>"
let create = document.createElement("div")
create.innerHTML = "<h1>This element is created through create method attribute</h1>"
a.append(create) // creates a div after the parent element
a.prepend(create) // creates a div before the parent element
a.after(create) // creates a div after the parent element
a.before(create) // creates a div before the parent element
let b = document.createElement("div")
b.innerHTML = "<h1>Hello World</h1>"
a.replaceWith(b)
