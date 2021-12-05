#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    string s1, s2;
    stringstream ss1, ss2;
    int n1, n2;

    cin >> s1;
    ss1<< s1;
    ss1>> n1;
    next_permutation(s1.begin(), s1.end());


    ss2 << s1;

    ss2>> n2;
   // cout << n1 <<" "<< n2 << "\n";

    if (n2 > n1) cout << n2 << "\n";
    else cout << "USELESS\n";


    return 0;
}

