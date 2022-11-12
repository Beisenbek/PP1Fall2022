#include <iostream>

using namespace std;

int f(int x){
    if(x == 1) return 1;
    return f(x - 1) + x;
}

int f(int x){
    int sum = 0;

    for(int i =1 ; i<=x; ++i){
        sum + = x;
    }
    return sum;
}

int main(){

    int n;
    cin >> n;
    cout << f(n);

    return 0;
}