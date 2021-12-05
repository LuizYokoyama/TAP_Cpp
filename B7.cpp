#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    ++n;
    long int m[n][n];

    //zera matriz
    for (int i=0; i<n; i++)
        for (int k=0; k<n; m[i][k]= LONG_MIN , k++);

    //recebe triângulo
    for (int i=1; i<n; i++)
        for (int k=1; k<=i; k++) cin >> m[i][k];


    for (int i=1; i<n; i++)
        for (int j=1; j<i; j++)
        {
            int ia= i-1, ja= j-1;
            if (m[ia][ja] > m[ia][j]) m[i][j]+= m[ia][ja];
            else m[i][j]+= m[ia][j];
        }

    long int r=LONG_MIN;
    for (int i=1; i<n; i++){
        r= (r > m[n-1][i]) ? r : m[n-1][i];
    }

    cout << r << "\n";
    return 0;

}

