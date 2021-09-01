#include <iostream>
using namespace std;
int main()
{
    int matriz[3][3];
    bool ok = false;
    int L1, L2, L3, C1, C2, C3, V1, V2 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matriz[i][j];
            L1 = (matriz[0][0] + matriz[0][1] + matriz[0][2]);
            L2 = (matriz[1][0] + matriz[1][1] + matriz[1][2]);
            L3 = (matriz[2][0] + matriz[2][1] + matriz[2][2]);
            C1 = (matriz[0][0] + matriz[1][0] + matriz[2][0]);
            C2 = (matriz[0][1] + matriz[1][1] + matriz[2][1]);
            C3 = (matriz[0][2] + matriz[1][2] + matriz[2][2]);
            V1 = (matriz[0][0] + matriz[1][1] + matriz[2][2]);
            V2 = (matriz[0][2] + matriz[1][1] + matriz[2][0]);
            if (L1 == L2 && L2 == L3 && L3 == C1 && C1 == C2 && C2 == C3 && C3 == V1 && V1 == V2)
            ok = true;
        }
    }
    if (ok)
        cout << "sim\n";
    else
        cout << "nao\n";
    return 0;
}
