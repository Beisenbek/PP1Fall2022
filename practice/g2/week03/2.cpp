//g from lab02
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int x;
    cin >> x;
    int mx = x;

    for(int i = 0; i < n - 1; ++i){
        cin >> x;
        if(x > mx){
            mx = x;
        }
    }

    cout << mx << endl;

    return 0;
}