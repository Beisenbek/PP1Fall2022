#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

int main(){

    stringstream ss;

    ss << "123 " << "test " << 567 << endl;

    string str;

    ss >> str;

    cout << str << endl;


    return 0;
}