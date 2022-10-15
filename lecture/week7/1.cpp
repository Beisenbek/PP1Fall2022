#include <iostream>

using namespace std;

int f(int x){
    int y = x * x;
    return y;
}

int f2(int x){
    return x * x;
}

int main(){
    int x;
    cin >> x;
    cout << f(x) << " " << f2(x) << " " << x * x <<  endl;

    return 0;
}
