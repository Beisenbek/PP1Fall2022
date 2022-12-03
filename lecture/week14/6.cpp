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

    int n;
    cin >> n;
    int a[n];

    fill(a, a + n, -1);
    print(a, a + n);

    return 0;
}