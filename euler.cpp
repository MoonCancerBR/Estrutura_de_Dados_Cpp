#include <iostream>
#include <iomanip>

using namespace std;

double fatorial (int num)
{
    float Fatorial = 1.0;
    for (int Implemento = 1; Implemento <= num ; Implemento++)
    {
    Fatorial = Fatorial * Implemento;
    } 

    return Fatorial ;
}

double divisao (int numero)
{
    return 1/fatorial(numero);
}

int main()
{
    int numero;
    double total = 0;
    cin >> numero;
    
    if(numero <= 0)
        cout << fixed << setprecision(6) << 1;
    else
        { 
           for (int i = 0; i <= numero; i++)
           {
               total += divisao(i);
           }
           
        } 
        
    cout << fixed << setprecision(6) << total;

    return 0;
}
