#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <cfloat>

using namespace std;

int t=0, xs=0, ys=0 , xp[1000000], yp[1000000], p=0, xpp=0, ypp=0;
double d= DBL_MAX;
string s[1000000];

int main()
{
    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> s[i];

    }
    ///localização da nave
        for (int i=0; i<t; i++)
            for (int j=0; j<t; j++){
                if (s[i][j] == 's')
                {
                    xs= i;
                    ys= j;
                    break;
                }
            }

        ///localização dos planetas
        for (int i=0; i<t; i++)
            for (int j=0; j<t; j++){
                if (s[i][j] == 'p')
                {
                    xp[p]= i;
                    yp[p]= j;
                    p++;
                }
            }

        for (int i= 0; i< p; i++)
        {
            if (sqrt((xs-xp[i])*(xs-xp[i]) + (ys-yp[i])*(ys-yp[i])) < d)

            {
                d= sqrt((xs-xp[i])*(xs-xp[i]) + (ys-yp[i])*(ys-yp[i]));
                xpp=xp[i];
                ypp=yp[i];
            }

        }

        cout << '('<< xs << ','<< ys<< "):(" << xpp << ','<< ypp << "):"<< std::fixed << std::setprecision(2)<< d <<"\n";


}
