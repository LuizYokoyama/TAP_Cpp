#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, r, p=2, d;

    cin >> n;

    for (; p*p<n; p=p*p);
   // p=sqrt(p);
    r= pow(5, p-1);
    d= n-p;

    if ( d>p)
        for (int i=1; i<p; i++)
        {

            r+=pow(5, i);
        }
    else for (int i=1; i<p; i++)
        {
            r= pow(5, p-1);
            r=pow(5, i);
        }
    cout << r << "\n";
    return 0;

}

