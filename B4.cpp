
#include <iostream>
#include <string>


using namespace std;

int main() {


    int  k=0, n, x=0, t, f;

    cin >> n;

    while (x<n){
            f= n-x;
            t=1;
            int i=0;
            do{
                i++;
                t= (t*i);

              //  cout << " " << t << " ";
            }while (t<f);
            if (t>f) t= (t/i);
            x+=t;
            k++;
         //   cout << " " << x << "\n";

    }



    cout << k << "\n";
    return 0;
}


