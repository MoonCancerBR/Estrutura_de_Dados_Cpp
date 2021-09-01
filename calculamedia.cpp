#include <iostream> 
#include <iomanip>

using namespace std;

struct aluno {
   float nota[3];
   float media;
};

void calcula_media(aluno *a)
{
   a->media = ( a->nota[0] + a->nota[1] + a->nota[2] ) / 3 ;
}

int main()
{
   aluno a;
   
   for (int i = 0; i < 3; i++)
   cin >> a.nota[i];
   calcula_media(&a);
   
   cout << fixed;
   cout << setprecision(1) << a.media;
   
   return 0;
}
