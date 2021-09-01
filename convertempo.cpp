#include <iostream>
using namespace std;

void converte(int segundos, int *hor, int *min, int *seg)
{
    int auxiliar;
    *hor = segundos/3600;
    auxiliar = segundos%3600;
    *min = auxiliar/60;
    *seg = auxiliar%60;
}

int main ()
{
    int h, m, s, segundos;
    cin >> segundos;
    converte(segundos, &h, &m, &s);
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
