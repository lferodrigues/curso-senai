// 01 - Inserir Elemento nofinal
function insereItemFinal(){
    // criar um novo objeto com o item a ser inserido
    var novo = document.createElement('li');
    // criar um objeto com itens da lista
    var els = document.getElementsByTagName('ul');
    // criar um novo elemento [0]
    els[0].appendChild(novo);
    // insere conteudo no novo elemento
    novo.innerHTML = 'Binomio de Newton';
}

// 02 - inseri antes de ...
function insereItemBefore(){
    // criar item a ser inserido
    var item = document.createElement('li');
    // inserir conteudo no elemento
    item.innerHTML = 'Binomio de Newton';
    // criar objeto com itens da lista
    var lista = document.getElementById('mat');
    // insere item na posicao especificada
    lista.insertBefore(item,lista.childNodes[1]);
} 

// 03 - -substitui item
function substituiItem(){
    // cria objeto com itens da lista
    var els = document.querySelectorAll('ul#mat li');
    // define o numero de elementos
    var tamanho = els.length - 1;
    //define a posição do item a ser modificado
    var pos = prompt('Informe a posição do Itme a ser substituido [0 a '+ tamanho + ']');
    //subsititui o conteudo do elemento escolhido
    els[pos].innerHTML = prompt("Informe a materia: ");

}

// 04 - exclui um item
function excluiItem(){
    // cria objeto com itens da lista
    var lista = document.getElementById('mat');
    var els = document.getElementsByTagName('li');
    lista.removeChild(els[0]);
}

// 05 - exclui item na lista de portugues  
function excluiPortugues(){
    var listap = document.getElementById('port');
    var elsp = listap.getElementsByTagName('li');
    listap.removeChild(elsp[0]);
}

// 06 - exclui item na lista de geografia
function excluiGeografia(){
    var listg = document.getElementById('geo');
    var elsp = listg.getElementsByTagName('li');
    listg.removeChild(elsp[0]);
}
// 07 inseri imagem na pagina
function insereImagem(){
    var img = document.createElement('img');
    img.src = './img/rio.jpg'
    imagem.appendChild(img);

    var paragrafo = document.createElement('p');
    var texto = document.createTextNode('Foto de Florencia Potter no Pexels');
    paragrafo.appendChild(texto);
    document.getElementById('imagem').appendChild(paragrafo);
}