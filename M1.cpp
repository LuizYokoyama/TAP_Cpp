#include <iostream>

using namespace std;

char play[]= {'O', 'X'};

int main(){

    char t[6][6];

    for (int i= 0; i<5; i++)
        for (int j= 0; j<5; j++)
            cin >> t[i][j];

    for (int i= 0; i<5; i++){
        for (int j= 0; j<5; j++){
            if (t[i][j] != '*') continue;
            int q= 0;

            //vertical
            for (int k= 0; (k<2) && (q<3); k++){
                q= 0;
                for (int y= (j-1); (y>-1) && (t[i][y] == play[k]); y--, q++);
                for (int y= (j+1); (y<5) && (t[i][y] == play[k]); y++, q++);

            }
            if (q>=3) continue;

            //horizontal
            for (int k=0; (k<2) && (q<3); k++){
                q= 0;
                for (int x= (i-1); (x>-1) && (t[x][j] == play[k]); x--, q++);
                for (int x= (i+1); (x<5) && (t[x][j] == play[k]); x++, q++);
            }
            if (q>=3) continue;

            //diagonal principal
            for (int k=0; (k<2) && (q<3); k++){
                q= 0;
                for (int x= (i-1), y= j-1; (x>-1) && (y>-1) && (t[x][y] == play[k]); x--, y--, q++);
                for (int x= (i+1), y= j+1; (x<5) && (y<5) && (t[x][y] == play[k]); x++, y++, q++);
            }
            if (q>=3) continue;

            //diagonal secundaria
            for (int k=0; (k<2) && (q<3); k++){
                q= 0;
                for (int x= (i-1), y= j+1; (x>-1) && (y<5) && (t[x][y] == play[k]); x--, y++, q++);
                for (int x= (i+1), y= j-1; (x<5) && (y>-1) && (t[x][y] == play[k]); x++, y--, q++);
            }
            if (q>=3) continue;

            cout << (i*5)+j+1 << "\n";
        }

    }
    return 0;
}
