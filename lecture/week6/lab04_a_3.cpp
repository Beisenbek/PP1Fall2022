#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    int mx = -100001;
    int x;

    for(int i = 0; i < n * n; ++i){
        cin >> x;
        mx = max(x, mx);
    }

    cout << mx << endl;

    return 0;
}