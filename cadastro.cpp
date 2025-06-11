#include <iostream>
#include <string>   

using namespace std;

int main() {
    string nome;
    int nota1, nota2, i, media;
    
    cout << "|| Cadastro de Alunos ||" << endl;

    for(i=1; i <= 2; i++) {
        cout << "Digite o nome do aluno: ";
        cin >> nome;
        cout << "Digite a nota do aluno: ";
        cin >> nota1;
        cout << "Digite a nota do aluno: ";
        cin >> nota2;

        media = (nota1 + nota2) / 2;
        cout << "|| Media do aluno: " << media << endl;

        if(nota1 >= 6 && nota2 >= 6){
            cout << nome << "|| Aprovado" << endl;
            
        } else {
            cout << nome << " || Reprovado " << endl;
        }

    
    }

        
    
        
    return 0;
}