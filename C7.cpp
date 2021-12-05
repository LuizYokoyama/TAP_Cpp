#include <iostream>
#include <string>

using namespace std;



int m, n, c= 0, m1, n1;
int x[102][102];
int w[102][102];
string s[101];

int main()
{
    cin >> m >> n;
    ++m, ++n;
    s[0]="....................................................................................................";

    for (int i=1; i<m; i++) cin >> s[i];//RECEBE MATRIZ STRING

    //PREENCHE MATRIZ NUMÉRICA
    for (int i=0; i<m; i++)
    {
        x[i][0]=0;
        for (int j=0; j<n; j++)
            if (isdigit(s[i][j])) x[i][j+1]= s[i][j] -48;
                else if (s[i][j] == '*') x[i][j+1]= -1;
                        else x[i][j+1]= 0;
    }

    for (int i=1; i<m; i++)
        for (int j=n-1; j>0; j--)
            w[i][j]= x[j][i];



    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cout << w[j][i] << " ";
        }
        cout << "\n";
    }

    for (int i=1; i<n; i++)
        for (int j=1; j<m; j++)
        {
            int ia= i-1, ja=j-1, t=0;
            if (w[j][i]>0)
            {
                int t1= 0, t2= 0;
                if (w[ja][i]>0)
                {
                    t1= w[ja][i];
                    w[ja][i]= 0;
                }
                if (w[j][ia] > 0)
                {
                    t2= w[j][ia];
                    w[j][ia]=0;
                }
                w[j][i]+= t1 + t2;
            }
        }

    cout << "\n";
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cout << w[j][i] << " ";
        }
        cout << "\n";
    }
    cout << w[n-1][m-1] << "\n";

    return 0;
}


