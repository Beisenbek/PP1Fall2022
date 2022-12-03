#include <iostream>
#include <algorithm>

using namespace std;

void print(int * start, int * end){
    for(int * it = start; it != end; ++it){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){

    int a[] = {3, 2, 1, 11, 13, 15};
    int n = sizeof(a) / sizeof(a[0]);

    print(a, a + n);
    rotate(a, a + 2, a + n);
    print(a, a + n);

    return 0;
}