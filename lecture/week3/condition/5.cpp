#include <iostream>

using namespace std;

int main(){
    
   int a, b, c;
   cin >> a >> b >> c;

   bool c1 = a + b > c;
   bool c2 = a + c > b;
   bool c3 = b + c > a;

   if(c1 == true && c2 == true  && c3 == true){
        cout << "ok";
   }else{
        cout << "!ok";
   }


    return 0;
}