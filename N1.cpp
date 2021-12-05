#include <iostream>



using namespace std;

int n, m;
int mat[60][60], dp[60][60];


int solve(int i, int j){
    if ((i>=n) || (j>=m)) return 0;
    if (dp[i][j]) return dp[i][j];

    dp[i][j]= mat[i][j] + max(solve(i, j+1), solve(i+1, j));
    return dp[i][j];
}


int main(){

    cin>> n >> m;

    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> mat[i][j];

    cout << solve(0,0) << "\n";

    return 0;


}
