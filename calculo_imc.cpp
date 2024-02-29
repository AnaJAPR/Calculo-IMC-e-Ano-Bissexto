#include <iostream>

using namespace std;

float calcular_imc(float massa, float altura){
    return massa / (altura*altura);
}

void analisar_imc(float resultado){
    if (resultado < 17){
        cout << "Você está muito abaixo do peso!" << endl;
    }
    else if(resultado < 18.5){
        cout << "Você está abaixo do peso!" << endl;
    }
    else if(resultado < 25){
        cout << "Seu peso é normal!" << endl;
    }
    else if(resultado < 30){
        cout << "Você está acima do peso!" << endl;
    }
    else if(resultado < 35){
        cout << "Você está com obsesidade!" << endl;
    }
    else if(35 <= resultado < 40){
        cout << "Você está com obesidade severa!" << endl;
    }
    else {
        cout << "Você está com obesidade mórbida!" << endl;
    }
}

int main() {
    float fmassa, faltura;

    cout << "Qual é a sua massa? ";
    cin >> fmassa; 

    cout << "Qual é a sua altura? ";
    cin >> faltura;

    float resultado = calcular_imc(fmassa, faltura);

    analisar_imc(resultado);


    return 0; 
}