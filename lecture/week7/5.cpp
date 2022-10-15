#include <iostream>

using namespace std;

int min4(int a, int b, int c, int d);
int min2(int a, int b);


int main(){
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d) << endl;

    return 0;
}

int min4(int a, int b, int c, int d){
    return min2(min2(a, b), min2(c, d));
}

int min2(int a, int b){
    int res = a;
    if(b < a) 
        res = b;
    return res;
}