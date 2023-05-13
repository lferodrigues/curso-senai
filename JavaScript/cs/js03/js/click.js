var contador = 0;

var bt = document.getElementById('btCont');

bt. onclick=()=>{
    contador++;
    var el = document.getElementById('cont');
    el.innerHTML = contador;
}