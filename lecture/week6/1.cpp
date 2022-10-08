#include <iostream>

using namespace std;

int main(){

    int a[10];
    a[0] = 1;

    cout << *(a + 0) << " "  << a[0];

    return 0;
}