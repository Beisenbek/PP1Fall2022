#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int> q;

    int n, x;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        q.push(x);
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}