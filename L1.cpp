#include <iostream>


using namespace std;



int main(){

    int n;
    cin >> n;
    //while(cin >> n){

        int a, u=0, z=0;

        while (n>1){
                a= (n%2 == 0)? ++z : ++u;
                n/= 2;
        }

        a= (n) ? ++u : ++z;

        if (z<u) cout << "right" << "\n";
        else if (z>u) cout << "left" << "\n";
             else cout << "straight" << "\n";

    //}

    return 0;

}
