

#include <iostream>
#include <string>


using namespace std;

int main() {

    int n, m=0;

    cin >> n;
     int v[n];
      for (int i=0; i<n; i++){
        cin >> v[i];
      }

     for (int i=0; i<n; i++){

        if (v[i]>m) m= v[i];


     }
     if (v[0]==m) cout << "S";
     else cout << "N";




    cout << "\n";
    return 0;
}



