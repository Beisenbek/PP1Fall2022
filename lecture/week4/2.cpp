#include <iostream>

using namespace std;

int main(){

    int a[4];
    a[0] = 1;
    a[1] = 2;
    a[2] = 5;
    a[3] = 5;

    for(int i = 0; i <= 3; ++i){
        cout << a[i] << endl;
    }
    

    return 0;
}