#include <iostream>

using namespace std;

int main(){

    int a[] = {45, 1, 2, 3};
    int n = sizeof(a) / sizeof (a[0]);

    cout << n << endl;
    for(int i = 0; i < n; ++i){
        cout << *(a + i) << " ";
    }

    return 0;
}