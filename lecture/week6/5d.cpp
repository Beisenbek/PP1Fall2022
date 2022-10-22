#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k = 1; 
    int len = s.size() - 1;

    for ( int i = 0; i < len; i++){
        if ( s[i] != s [len])
        k = 0;
        len--;
    }
    
    if ( k == 1)
    cout << "YES";
    else 
    cout << "NO";
    return 0;
    }