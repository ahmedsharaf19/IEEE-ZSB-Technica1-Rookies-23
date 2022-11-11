#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    int maximum;
    int minimum = min(num1 ,num1);
    if (minimum == 1 )  {
        maximum = 1;
    }
    else {
        for (int i = 2 ; i <= minimum ; i++){
                if (num1 % i == 0 && num2 % i == 0)
                        maximum = i;
        }
    }

    cout << maximum << endl;
    return 0;
}
