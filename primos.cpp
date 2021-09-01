#include <iostream>
using namespace std;
int main (){
    int number, number2, divisor = 0;
    cin >> number >> number2;
    for (int auxiliar = number; auxiliar <= number2; auxiliar++)
    {
        for (int auxiliar2 = 1; auxiliar2 <= auxiliar; auxiliar2++){
            if (auxiliar%auxiliar2 == 0)
                divisor++;      
        }
        if (divisor == 2)
    cout << auxiliar << endl;
    divisor = 0;
    }
return 0;
}
