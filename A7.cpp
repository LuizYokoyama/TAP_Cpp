#include <iostream>


using namespace std;

int main()
{
    int l, c, g;
    cin >> l >>c;
    int m[l][c];
    //zera matriz
    for (int i=0; i<l; i++)
        for (int j=0; j<c; m[i][j]=0 , j++);

    cin >> g; // n gatos
    for (int i=0; i<g; i++)
    {
        int lg, cg; //linha gato, coluna gato
        cin >> lg >> cg;
        m[lg-1][cg-1]= -1;
    }

    //inicializa posições 1ª linha, 1ª coluna
    m[0][0]=1;
    for (int i=0; i<l; i++)
    {
        if (m[i][0] < 0) break;
        else m[i][0]= 1;
    }
    for (int i=0; i<c; i++)
    {
        if (m[0][i] < 0) break;
        else m[0][i]= 1;
    }

    for (int i=1; i<l; i++)
    {
        for (int j=1; j<c; j++)
        {
            if (m[i][j] < 0) continue;
            int la= i-1, ca= j-1; //la: linha anterior; ca: coluna anterior
            m[i][j]= ((m[i][ca]>0 ? m[i][ca] : 0) + (m[la][j]>0 ? m[la][j] : 0));
        }
    }

    cout << m[l-1][c-1] << "\n";
    return 0;

}
