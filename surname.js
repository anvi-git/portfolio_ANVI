//this simple program displays a function that takes some names (name + surname) and prints them as (surname + name)
function reformatName(first, last) {
    var newname = last + ", " + first;
    return newname;
}

var result = reformatName("Susan", "Rodger");
print(result);
result = reformatName("Robert", "Duvall");
print(result);