#include <iostream>

using namespace std;

int sum(int * a, int n){
    int sum = 0;
    for(int i = 0; i < n; ++i){
        sum += a[i];
    }
    return sum;
}

void read(int * a, int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    
    read(a, n);
    cout << sum(a, n);

    return 0;
}
