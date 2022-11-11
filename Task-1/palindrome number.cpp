#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    int digit=0,rev=0,n;
    n=number;
    do
         {
             digit = number % 10;
             rev = (rev * 10) + digit;
             number = number / 10;
         } while (number != 0);
     if(n==rev){
        cout<<n<<endl;
        cout<<"YES";
        }
    else{
       cout<< rev<<endl;
       cout<<"NO";
       }
     return 0;
}
