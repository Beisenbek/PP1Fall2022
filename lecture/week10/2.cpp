#include <iostream>

using namespace std;

void read(int * x, int n){
    for(int i = 0; i < n; ++i){
        cin >> x[i];
    }
}

void f(int * x, int * y, int * z, int n){
    for(int i = 0; i < n; ++i){
       z[i] = x[i] + y[i];
    }
}

void print(int * x, int n){
    for(int i = 0; i < n; ++i){
        cout << x[i] << " ";
    }
}

int main(){

    int n;
    cin >> n;
    int a[n], b[n], c[n];
    read(a, n);
    read(b, n);

    f(a, b, c, n);

    print(c, n);

    return 0;
}