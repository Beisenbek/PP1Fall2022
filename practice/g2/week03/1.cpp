//g from lab02
#include <iostream>

using namespace std;

int main(){

    int mx = INT_MIN;

    int n;
    cin >> n;

    int x;

    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x > mx){
            mx = x;
        }
    }

    cout << mx << endl;

    return 0;
}