#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

void print(int * start, int * end){
    for(int * it = start; it != end; ++it){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cin >> n;
    int a[n];

    memset(a, -1, sizeof(a));
    print(a, a + n);

    return 0;
}