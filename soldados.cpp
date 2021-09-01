#include <iostream>
using namespace std;
int main()
{
    int formacao[3][3];
    //DECLARANDO FORMACAO (0k)//
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> formacao[i][j];
    int contador = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            if (formacao[i][j] > formacao[i + 1][j])
                contador++;
    cout << contador << endl;
    return 0;
}
