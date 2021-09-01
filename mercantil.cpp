#include <iostream>
#include <string>
using namespace std;
int main()
{
    int tamanho;
    cin >> tamanho;
    float val[tamanho];
    float chu[tamanho];
    int jogador1 = 0;
    int jogador2 = 0;
    for (int i = 0; i < tamanho; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < tamanho; i++)
    {
        cin >> chu[i];
    }
    string chute2;
    for (int i = 0; i < tamanho; i++)
    {
        cin >> chute2[i];
    }
    for (int i = 0; i < tamanho; i++)
    {
        if (val[i] == chu[i])
        {
            jogador1++;
        }
        else if (val[i] < chu[i] && chute2[i] == 'm')
        {
            jogador2++;
        }
        else if (val[i] > chu[i] && chute2[i] == 'M')
            jogador2++;
        else
            jogador1++;
    }
    if (jogador1 > jogador2)
        cout << "primeiro\n";
    else if (jogador2 > jogador1)
        cout << "segundo\n";
    else
        cout << "empate\n";
    return 0;
}
