
#include <iostream>
#include <string>


using namespace std;

int main() {


    int c, t, n=0, v, r;

    cin >> c >> t;

    r= t;
    while (r > 0){
        v= c-1;
        r-= v;
        n++;
    }




    cout << n << "\n";
    return 0;
}

