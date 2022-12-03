#include <iostream>
#include <algorithm>

using namespace std;

void print(int * a, int n){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){

    int a[] = {3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    do{
        print(a, n);
    }while(prev_permutation(a, a + n));


    return 0;
}