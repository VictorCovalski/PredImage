# PredImage
Predictive JPEG Compression for Networks and Multimedia Course at the Federal University of Pelotas 2017/1

# Made by:
Victor Renan Covalski Junes <vrcjunes@inf.ufpel.edu.br>
Henrique Pereira Borges <hpborges@gmail.com>


# Metodo 
 O codificador usa o metodo mais simples de subtrair o valor do pixel pelos de seu vizinho a esquerda. O binario resultante do codificador armazena esses valores em inteiros.
 O decodificador pega esse binário resultante e o transforma na imagem original

# Compilar
 $make all

# Executar
 $./codificador <img raw entrada> <nome do arq binario saida>
 $./decodificador <arq bin entrada> <img raw saida>

