#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    float peso, altura,imc;

    cout << "Digite seu peso: ";
    cin >> peso;
    cout << "Digite sua altura: ";
    cin >> altura;

    imc = peso / (pow(altura,2));
    cout << "Seu IMC e: " << imc << endl;

    if(imc < 18.5){
        cout << "Abaixo do peso" << endl;
    } else if(imc < 25.0){
        cout << "Peso normal, parabens" << endl;
    } 
    else if (imc < 30.0){
        cout << "Sobrepeso" << endl;
    } 
    else if (imc < 35.0){
        cout << "Obesidade grau 1" << endl;
    } 
    else if (imc < 40.0){
        cout << "Obesidade grau 2(severa)" << endl;
    }
    else {
       
        cout << "Valor invalido" << endl;   
    }
  

  return 0;

}


