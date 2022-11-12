#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string s("123");
    string t = s.substr(0,2);
    string y = s + t;
    cout << y << endl;   
    return 0;
}