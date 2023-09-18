function validateForm() {
  let name = document.forms["registrationForm"]["MyName"].value;
  let age = document.forms["registrationForm"]["MyAge"].value;
  let contact = document.forms["registrationForm"]["MyNumber"].value;
  let email = document.forms["registrationForm"]["MyEmail"].value;
  if (name === "") {
    alert("You can't leave it empty 😪");
    return false;
  }
  else if (age === "") {
    alert("You can't leave it empty 😪");
    return false;
  }
  else if (contact === "") {
    alert("You can't leave it empty 😪");
    return false;
  }
  else if(contact.length < 10){
    alert("Phone number is less than 10 characters")
    return false
  }
  else if (email === "") {
    alert("You can't leave it empty 😪");
    return false;
  }
  else {
      document.getElementById("submission").innerHTML = `<h4 style="color:green">Form Submitted 👍</h4>`
      return false;
  }
}
