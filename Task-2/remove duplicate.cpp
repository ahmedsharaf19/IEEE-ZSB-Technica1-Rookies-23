#include <iostream>
using namespace std;

int main(){
    long long num;
    long long prev = 0;
    long long arr[100000];
    int i = 0;
    cout << "Enter -1 To Exit !\n";
    while (cin >> num && num != -1)
    {
       if (num == prev) {
            continue ;
       }
       arr[i] = num;
       i++;
       prev = num;
    }

    for (int j = 0 ; j < i ; j++)
        cout << arr[j] <<" ";
    return 0;
}

