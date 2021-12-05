
#include <iostream>
#include <string>


using namespace std;

int main() {

    int n, v, t, q;
    double x, y=10.0, e=0.00001;

    cin >> v >> n;

    t= v*n;
    x= t/y;

    for (int i=1; i<9 ; i++){
        q= x*i+e;
            if (x*i> q) cout << q +1 << " ";
            else cout << q << " ";

    }
    q= x*9 + e;
    if (x*9> q) {


            cout << q +1;
            }

            else {

                    cout << q;
            }
//1687 9695

    cout << "\n";
    return 0;
}




