#include <iostream>
using namespace std;
int main()
{
    int qtd = 0;
    cin >> qtd;
    int dom[qtd];
    bool ok = true;
    for (int i = 0; i < qtd; i++)
    {
        cin >> dom[i];
    }
    for (int i = 1; i < qtd; i++)
    {
        if (dom[i] < dom[i - 1])
            ok = false;
    }
    if (ok)
        cout << "ok\n";
    else
        cout << "precisa de ajuste\n";
    return 0;
}
