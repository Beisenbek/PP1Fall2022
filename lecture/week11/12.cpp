#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

int main(){

    stringstream ss;

    ss << "123 " << "test " << 567 << endl;

    cout << ss.str();


    return 0;
}