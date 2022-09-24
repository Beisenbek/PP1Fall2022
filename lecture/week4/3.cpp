#include <iostream>

using namespace std;

int main(){

    int n = 4;
    int a[n];
    a[0] = 1;
    a[1] = 2;
    a[2] = 5;
    a[3] = 5;

    for(int i = 0; i < n; ++i){
        cout << a[i] << endl;
    }
    

    return 0;
}