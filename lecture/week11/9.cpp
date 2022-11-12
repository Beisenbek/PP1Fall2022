#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    string s("123");
    s.at(0) = 'X';
    s[0] = 'T';
    cout << s.at(0) << " " << s[0] << endl;
    cout << s << endl;
    return 0;
}