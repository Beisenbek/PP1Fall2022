#include <iostream>


using namespace std;

string f(int x, int k){
    string res = "";
    string dictionary = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    do{
        res = dictionary[x % k] + res;
        x = x / k;
    }while(x > 0);

    return res;
}

int main(){

    int x;
    cin >> x;

    int k;
    cin >> k;

    cout << f(x, k);

    return 0;
}