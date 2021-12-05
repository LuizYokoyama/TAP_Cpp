#include <iostream>
#include <string>


using namespace std;

int main() {
    string s, p[2000];

    int t, n=0, i, j, k, k2, c;

    getline (cin, s);
    t=s.length();

    for (c=1; c<=t; c++){
        for (i=0 ; i<t; i++){

                    string s2;
                    int palin=1;
                    s2= s.substr(i, c);
                    if (c==1) palin=1;
                    else {
                            for (k=c-1, k2=0; k>0; k--, k2++){
                            if(s2[k]!=s2[k2]) palin=0;
                        }
                    }
                    if (palin) {
                            for (j=0; j<t && palin==1 ; j++){
                                if (p[j]==s2) palin= 0;

                            }
                    }
                    if (palin){
                         p[n]= s.substr(i, c);
                                    n++;
                    }
        }
    }


   cout << n << " -";
    for (i=0; i<n; i++){
        cout << " \"" + p[i] + "\"";
    }

    cout << "\n";
    return 0;
}
