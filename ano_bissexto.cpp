#include <iostream>

using namespace std;

//função que recebe um inteiro (o ano a ser analisado) e retorna um booleano, isto é, 0 ou 1 se o ano for ou não bissexto.
bool calcula_bissexto(int iano){
    return (iano%400 == 0) || ((iano%100 != 0) && (iano%4 == 0)); //condição para que o ano seja bissexto
}

//função que recebe um booleano (0 ou 1 para ano bissexto ou não) e não retorna nada, apenas analisa em qual condição se encaixa.
void analisa_bissexto(bool bresultado){
    if(calcula_bissexto(bresultado)){
        cout << "Esse ano e bissexto" << endl;
    }
    else{
        cout << "Esse ano nao e bissexto" << endl;
    }
}

//função principal
int main(){
    int iano;

    //usuário informa o ano que quer analisar
    cout << "Digite o ano: " << endl;
    cin >> iano;

    //usamos uma das funções definidas acima para calcular se o ano é bissexto ou não
    bool bresultado = calcula_bissexto(iano);

    //informamos a análise no console, ou seja, se o ano dado pelo usuário é ou não bissexto.
    analisa_bissexto(bresultado);

    return 0;
}