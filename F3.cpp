
#include <iostream>

using namespace std;



int main()
{
    int n, d, i, r;

    cin >> n >> d;

    i= n/d;
    r= n%d;



    if (r == 0) cout << i << "\n";
    else
    {
        for (int j=100; j>0; j--)
        {
            if (r%j == 0 && d%j == 0)
            {
                if (i != 0) cout << i << " "<< r/j<<"/"<< d/j << "\n";
                else cout << r/j<<"/"<< d/j << "\n";
                return 0;
            }
        }
        cout << i << " "<< r<<"/"<< d<< "\n";
    }



    return 0;
}


