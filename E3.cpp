
#include <iostream>

using namespace std;



int main()
{
    int x, m, n, c=0, t=0;

    cin >> x >> m;

    for (n= 0; n<m; n++)
    {
        if ((x*n)%m == 1)
        {
            c++;
            t= n;
        }
    }
    if (c==1) cout << t<< "\n";
    else cout << "Nao existe este tipo de inteiro.\n";

    return 0;
}

