#include <iostream>
#include <cmath>

using namespace std;

int f(string s){
    int b = 1;
    int res = 0;
    for(size_t i = 0; i < s.size(); i++){
        res += b * (s[s.size() - 1 - i] - 48);
        b *= 10;
    }
    return res;
}

int main(){

    string s;
    cin >> s;
    int s2 = f(s);
    cout << sqrt(s2);

    return 0;
}