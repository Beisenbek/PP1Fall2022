#include <iostream>

using namespace std;


void f(int n){
    int i = 1;
    while(true){
        cout << i << " ";
        i += 2;
        if(i > n) return;
    }
}

int main(){
    int n;
    cin >> n;
    f(n);
    return 0;
}
