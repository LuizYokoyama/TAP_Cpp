#include <iostream>
#include <string>


using namespace std;

int main() {
    int n, m, c, qtd=0;
    int v[20];
    cin >> n >> m >> c;
    for (int i=0; i<n; i++) cin >> v[i];

    for (int i=0; i<=(n-m); i++){
        int menor= 1000, maior= 0;
        for (int j=i; j<(m+i) ; j++){
            if (v[j]<menor) menor= v[j];
            if (v[j]>maior) maior= v[j];

        }
        if ((maior-menor)<=c) qtd++;
    }


    cout << qtd<<"\n";
    return 0;
}
