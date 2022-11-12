#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

int f(string s){
    return atoi(s.c_str());
}

int f2(string s){
    int res = 0;
    int b = 1;
    int n = s.size();
    for(size_t i = 0; i < n; ++i){
        res += b *(s[n - 1 - i] - '0');
        b = b * 10;
    }
    return res;
}

int main(){

    stringstream ss;
    string str;
    getline(cin, str);
    ss << str;

    string number;

    int sum = 0;
    while(ss >> number){
        sum += f2(number);
    }
    cout << sum;


    return 0;
}