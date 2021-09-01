#include <iostream>
#include <string>
using namespace std;
    
    struct id
    {
     char nome[80], disciplina[120];
     int matricula;
     double nota;
    };

int main (){
id Identidade;
cin >> Identidade.nome >> Identidade.matricula >> Identidade.disciplina >> Identidade.nota;
if (Identidade.nota >= 7)
cout << Identidade.nome << " aprovado(a) em " << Identidade.disciplina;
else
cout << Identidade.nome << " reprovado(a) em " << Identidade.disciplina;    
    return 0;
}
