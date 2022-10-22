#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int k = s.find(t);
    if ( k > -1) 
        cout << "YES";
        else 
        cout << "NO";
    return 0;
    }