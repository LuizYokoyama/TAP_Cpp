
#include <iostream>
#include <string>


using namespace std;


int main(){

    int n, g=0, b=0, m=0;
     cin >> n;

    string sf[n];

    for (int i=0; i<n; i++){
        cin >> sf[i];
    }

    for (int i=0, j=(n-1); i<((n/2)+1); i++, j--){
            if (sf[i].compare(sf[j]) == 0) {
                g++;
            }
    }


    for (int i=0; i<n; i++){
        int bt=0;
        for (int j=0, k=(n-1); j<(n/2)+1; j++, k--){
            if (sf[i].at(j)==sf[i].at(k)) {
                bt++;
            }
        }
        if (bt==(n/2)+1 ) b++;
    }


    if ((g==(n/2)+1) && (b==n)) cout << "Magnificent";
    else if (g==(n/2)+1) cout << "Beautiful";
    else if (b==n) cout << "Graceful";
    else cout << "Useless";

    cout << "\n";
    return 0;
}

