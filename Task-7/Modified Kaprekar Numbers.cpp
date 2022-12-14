#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(long long  p, long long q) {
    bool flag = false;
        for (;p<=q;p++){
            long long sq = p*p;
            long long temp = p;
            long long digit = 0;
            while (temp){
                digit++;
                temp /= 10;
            }
            long long div = pow(10,digit);
            long long left = sq % div;
            long long  right = sq / div;
            long long sum = left + right;
            if (sum == p) {
                cout << sum << " ";
                flag = true;
            }
        }
        if (!flag) cout << "INVALID RANGE" << endl;  
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
