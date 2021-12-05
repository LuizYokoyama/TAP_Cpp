#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int i=0, n2, r2, x;
    string n;
    string r;


    cin>>n;

    stringstream nn(n);


    nn >> x;


    while (x != 6174 ){
            i++;
        //cout << "\n"<<x;
        sort(n.begin(), n.end());
        r= n;
        reverse(r.begin(), r.end());
        stringstream n1(n);
        n1 >> n2;
        stringstream r1(r);
        r1>> r2;
    //cout<<"\n" << n2<< "  " << r2<<"\n";
        x= r2-n2;

        if (x == 6174 ) break;
           stringstream str;
            str<<x;

            n= str.str();
          //  cout<<" "<<x<<" "<<n <<"\n";
            //getchar();

    }

    cout<< i << "\n";
    return 0;

}

