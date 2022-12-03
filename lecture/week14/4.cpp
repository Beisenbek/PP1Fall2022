#include <iostream>
#include <algorithm>

using namespace std;

bool isOdd(int x){
    if(x % 2 == 1) return true;
    return false;
}

int main(){

    int a[] = {3, 2, 1, 11, 13, 15};
    int n = sizeof(a) / sizeof(a[0]);

    cout << count_if(a, a + n, isOdd);

    return 0;
}