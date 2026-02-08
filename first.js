// function fact(){
//     alert("Calculating....")
//     var n = parseInt(document.getElementById("fact1").value);
//     var i, fact = 1;
//     for(i=1; i<=n; i++){
//         fact *=i;
//     }
//    document.getElementById("fact").innerHTML="Factorial of Given Number is: "+ fact;
// }


const die2 = Math.floor(Math.random() * 6) + 1;
let numberOfRolls = 0;

while (true) {
  const die1 = Math.floor(Math.random() * 6) + 1;
  numberOfRolls++;
  if (die1 === die2) {
    break;
  }
}

console.log(numberOfRolls);
