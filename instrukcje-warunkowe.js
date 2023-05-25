var wiek = prompt("Podaj swój wiek");

if(wiek <= 25){
  document.write("Jesteś w młodym wieku")
}
else if(wiek > 25 &&  wiek <= 40){
  document.write("Jesteś w średnim wieku")
}
else if(wiek > 40){
  document.write("Jesteś w dojrzałym wieku")
}
else{
  document.write("Podana wartość jest błędna")
};