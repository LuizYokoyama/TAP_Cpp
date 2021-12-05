
#include <iostream>
#include <string>


using namespace std;

int main() {
   string s, d;
    int t=0;
   cin >> s;
    t= s.length();
   for (int i=0; i<t; i++){

        for (int j=(i-1) ; j<=i; j++){
            if (s[i]!=s[j]) d+= s[i];
        }
   }

    cout << d << "\n";
    return 0;
}
