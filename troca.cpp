#include <iostream>
using namespace std;

// Implemente a função 'troca'.
void troca(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
   int x, y, aux;
   cin >> x;
   cin >> y;
   
   // Chame a função 'troca' para trocar os valores de x e y.
   troca(&x, &y);
   cout << x << " " << y << std::endl;
   return 0;
}
