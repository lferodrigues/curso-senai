function mostrarParagrafo(){
    document.getElementById('p1').style.visibility = 'visible';
}

function alteraConteudo(){
    document.getElementsByTagName('p')[1].innerHTML = 'Texto modificado por JS';
}

function alteraBotao(){
    var x = document.getElementsByName('btRed');
    alert('Existe(m)' + x.length + 'elemento(s) <btRed> nesta pagina');
    x[0].style.backgroundColor = 'red';
}

function alteraCor(){
    var y = document.getElementsByClassName('divAltera');
    alert('Existe(m)' + y.length + 'elemento(s) <btRed> nesta pagina');
    for(i = 0; i <y.length; i++){
        y[i].style.backgroundColor = '#837744';
    }
}