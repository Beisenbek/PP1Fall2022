#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;
    
    int a[10];
    for(int i = 0; i <=9; ++i){
        a[i] = 0;
    }

    for(size_t i = 0; i < s.size(); ++i){
        int d = s[i] - 48;
        a[d]++;
    }

    int k = 0;
    for(int i = 0; i <=9; ++i){
        if(a[i] != 0){
            k = a[i];
            break;
        }
    }

    bool f = true;

    for(int i = 0; i <=9; ++i){
        if(a[i] != 0 && a[i] != k){
            f = false;
            break;
        }
    }

    if(f == true){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}