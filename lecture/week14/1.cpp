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

    int a[] = {1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);

    print(a, n);
    next_permutation(a, a + n);
    print(a, n);

    return 0;
}