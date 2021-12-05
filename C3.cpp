
#include <iostream>
#include <math.h>


using namespace std;

int main() {

    int a, b, c=0;

    cin >> a >> b;

    for (int i=1; i<22; i++){

        long p= (long)pow(i,6);
        if ((p>=a) && (p<=b)) c++;
    }



    cout << c << "\n";
    return 0;
}

