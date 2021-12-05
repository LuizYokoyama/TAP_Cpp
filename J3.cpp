
#include <iostream>

using namespace std;



int main()
{
    int ac, af;

    cin >> ac >> af;

    for (int i=0; i<=af-ac; i++)
    {
        if (i%2 == 0 && i%3 == 0 && i%4 ==0 && i%5 == 0)
        cout << "Todas as posicoes mudam no ano "<< i+ac <<".\n";
    }

    return 0;
}
