#include <iostream>

using namespace std;

int main(){
    
   int a, b, c;
   cin >> a >> b >> c;

   if(a + b > c ){
    if(a + c > b){
        if(b + c > a){
            cout << "ok";
        }else{
            cout << "!ok";
        }
    }else{
            cout << "!ok";
    }
   }else{
            cout << "!ok";
    }


    return 0;
}