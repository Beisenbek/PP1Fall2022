#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){

    char c[3];
    c[0] = '1';
    c[1] = '2';
    c[2] = '1';
   
    int s2 = atoi(c);

    cout << sqrt(s2) << endl;

    return 0;
}