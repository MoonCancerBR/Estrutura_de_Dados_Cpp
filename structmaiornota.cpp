#include <iostream>
#include <iomanip>

using namespace std;

struct id
{
    char nome[80], disciplina[120];
    int matricula;
    float nota;
};

int main()
{
    id Identidade;
    id Identidade1;
    cin >> Identidade.nome >> Identidade.matricula >> Identidade.disciplina >> Identidade.nota >> Identidade1.nome >> Identidade1.matricula >> Identidade1.disciplina >> Identidade1.nota;
    if (Identidade.nota > Identidade1.nota)
        cout << fixed << setprecision(1) << Identidade.nome << " , " << Identidade.nota;
    else if (Identidade1.nota > Identidade.nota)
        cout << fixed << setprecision(1) << Identidade1.nome << " , " << Identidade1.nota;
    else
        cout << fixed << setprecision(1) << Identidade.nome << " e " << Identidade1.nome << " , " << Identidade.nota;
    return 0;
}
