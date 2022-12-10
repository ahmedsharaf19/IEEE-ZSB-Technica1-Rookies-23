#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int num, temp;
    for(int i = 0; i < t; i++){
        int count = 0;
        cin >> num;
        temp = num;

        while(temp > 0) {
            int curr_digit = temp % 10;
            temp /= 10;
            if (curr_digit != 0 && num % curr_digit == 0) {
                count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
