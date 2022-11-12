#include <iostream>

using namespace std;

int m[100];

int f(int x){
    if(m[x] == -1) {
        m[x] = f(x - 1) + f (x - 2);
    }
    return m[x];
}

int main(){

    int n;
    cin >> n;
    m[1] = m[2] = 1;

    for(int i = 3; i <= n; ++i){
        m[i] = -1;
    }

    cout << f(n);

    return 0;
}