#include <iostream>

using namespace std;

//função que recebe o par (massa, altura) e retorna o IMC
float calcular_imc(float fmassa, float faltura){
    return fmassa / (faltura*faltura);    //cálculo do IMC
}

//função que recebe o valor do IMC, mas não retorna nada, por isso usamos o void.
//o objetivo dessa função é caracterizar as faixas de IMC e posteriormente informar no console em qual faixa de IMC a pessoa se encontra.
void analisar_imc(float fresultado){
    if (fresultado < 17){
        cout << "Voce esta muito abaixo do peso!" << endl;
    }
    else if(fresultado < 18.5){
        cout << "Voce esta abaixo do peso!" << endl;
    }
    else if(fresultado < 25){
        cout << "Seu peso esta normal!" << endl;
    }
    else if(fresultado < 30){
        cout << "Voce esta acima do peso!" << endl;
    }
    else if(fresultado < 35){
        cout << "Voce esta com obsesidade!" << endl;
    }
    else if(35 <= fresultado < 40){
        cout << "Voce esta com obesidade severa!" << endl;
    }
    else {
        cout << "Voce esta com obesidade morbida!" << endl;
    }
}

//definindo a função principal
int main() {
    float fmassa, faltura;

    //usuário informa sua massa no console
    cout << "Digite sua massa em kg:  ";
    cin >> fmassa; 

    //usuário informa sua altura no console
    cout << "Digite sua altura em metros: ";
    cin >> faltura;

    //usando uma função definida anteriormente para calcular o IMC dado os valores fornecidos pelo usuário
    float fresultado = calcular_imc(fmassa, faltura);

    //definindo a faixa de imc do usuário
    analisar_imc(fresultado);

    return 0;
}