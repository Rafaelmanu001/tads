#include <iostream>

using namespace std;


int header (){
 cout << "IFPR 12/08/2026" << endl << endl;
 cout << "Atividade #3.1: Recursividade" << endl;
 cout << "Funcao dos numeros de Catalan" << endl << endl;
 return 1;
}

int fib(int n){
    if (n == 0 || n == 1)
        return n;

    return fib(n-1) + fib(n-2);

cout << n << " teste" << endl;
}

int cata(){
//Tentando compreender.
    cout << catalan(4) << endl;
//Exibir os 15 primeiros termos da sequencia
        for (int t=0; t<=15; t++){
    cout << catalan(t) << " ";
}
    cout << endl;

    return 1;
}

int catalan(int n){
    if (n == 0)
        return 1;

    else
        return (2*(2*n-1) * catalan(n-1))/ (n+1);

cout << n << endl;
}



int main(){
header();

cata(3);


return 1;
}
/*
pell se n for igual a zero, n retorna 0 , if n for = 1, é 1, e se for maior ou igual a 2= retorna 2x pell + pell n-2)

^ é igual a AND, mdc minimo multiplo comum,

solução iterativa é o for while,

5 você tomou no cu
equipes com 3 pessoas cada, maximo 10, recursiva



não precisa tentar fazer tudo, se conseguir os 2 primeiros otimo.
*/
