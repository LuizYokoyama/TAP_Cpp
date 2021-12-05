#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    string zeros(n-k, '0');
    string uns(k, '1');
    uns+=zeros;
    cout << uns <<"\n";
    while (prev_permutation(uns.begin() , uns.end()))
    cout <<  uns<< "\n";


    return 0;

}

