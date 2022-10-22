#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int a = 0, b = 0;
    cin >> str;

    for ( int i = 0; str[i] != 0; i++)
    {
        if ( str[i] >= 'A' && str[i]<= 'Z')
        a++;
        else if ( str[i] >= 'a' && str[i] <= 'z') 
        b++;
    }
    cout << b << " " << a ;

    return 0;
    }