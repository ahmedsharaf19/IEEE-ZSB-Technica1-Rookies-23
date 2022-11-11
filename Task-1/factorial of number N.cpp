#include <iostream>
using namespace std;


int main(){
    int number;
    long long fact = 1;
    cin >> number;
     if (number < 0)
            cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for (int i = 1 ; i <=number ; i++){
            fact *=i;
        }
        cout << fact << endl;
    }
    return 0;
}

