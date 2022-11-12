#include <iostream>


using namespace std;

string f(string d, int x, int k, string res){
    if(x == 0) return res;
    return f(d, x / k, k, d[x % k] + res);
}

int main(){
    int x;
    cin >> x;

    int k;
    cin >> k;

    cout << f("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", x, k, "");

    return 0;
}