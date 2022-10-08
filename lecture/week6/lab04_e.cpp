#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    string a[n][n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
           if(i >= j) a[i][j] = "[*]";
           else a[i][j] = "";
        }
    }

     for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
           cout << a[i][j];
        }
        cout << endl;
    }


    return 0;
}