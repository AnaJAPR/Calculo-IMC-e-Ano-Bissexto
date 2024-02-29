#include <iostream>

using namespace std;

bool calcula_bissexto(int iano){
    return (iano%400 == 0) || ((iano%100 != 0) && (iano%4 == 0));
}

void analisa_bissexto(bool bresultado){
    if(calcula_bissexto(bresultado)){
        cout << "Esse ano e bissexto" << endl;
    }
    else{
        cout << "Esse ano nao e bissexto" << endl;
    }
}

int main(){
    int iano;

    cout << "Digite o ano: " << endl;
    cin >> iano;

    bool bresultado = calcula_bissexto(iano);

    analisa_bissexto(bresultado);

    return 0;
}