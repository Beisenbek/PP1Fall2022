#include <iostream>

using namespace std;

int f(int n){
    int sum = 0;
    for(int i = 1; i <= n; ++i){
        sum += i;
    }
    return sum;
}

void f2(int n){
    int sum = 0;
    for(int i = 1; i <= n; ++i){
        sum += i;
    }
    cout << sum << endl;
}


int main(){
    
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        sum += i;
    }
    cout << sum << endl;
    cout << f(n) << endl;
    f2(n);

    return 0;
}
