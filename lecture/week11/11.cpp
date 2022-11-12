#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    string s;
    string t;
    cin >> s >> t;
    s.insert(0, 10, t[0]);
    cout << s << endl;
    return 0;
}