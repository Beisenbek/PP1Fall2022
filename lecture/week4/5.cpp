#include <iostream>

using namespace std;

int main(){

    int a[] = {1, 2, 2, 5, 6, 7, 12, 100, 12};
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i = 0; i < n; ++i){
        cout << a[i] << endl;
    }
    

    return 0;
}