#include <iostream>
#include <iomanip>
using namespace std;

struct id
{
    char nome[200];
    int matricula;
    float media;
};
int main()
{
    id ALUNO;
    /*Quantidade de Alunos para serem cadastrados*/
    int qtd, i = 0;
    cin >> qtd;
    id roda[qtd];
    /*INFORMAÇÕES DOS ALUNOS*/
    for (i = 0; i < qtd; i++)
    {
        cin >> roda[i].matricula;
        cin.ignore();
        cin.get(roda[i].nome, 200);
        cin >> roda[i].media;
    }

    //^^FUNCIONA^^//

    int busca = 0;
    bool tem = false;
    /*Aluno sendo buscado por ID*/
    cin >> busca;
    for (i = 0; i < qtd; i++)
    {
        if (busca == roda[i].matricula)
        {
            tem = true;
            cout << fixed << setprecision(1) << roda[i].nome << endl
                 << roda[i].media << endl;
        }
    }
    if (!tem)
        cout << "NAO ENCONTRADA\n";
    return 0;
}
