#include<iostream>
#include<math.h>
using namespace std;
class Solution {
    bool isPrime(int val) {
        // base cases ...
        if (val == 1)
            return false;
        if (val == 2)
            return true;

        int limit = sqrt(val);
        // iteratre from 2, excluding 1 as a prime number...
        // according to condition....
        for (int i = 2; i <= limit; i++) {
            if (val % i == 0)
                return false;
        }
        return true;
    }
public:
    int primePalindrome(int n) {
        if (n >= 8 && n <= 11)
            return 11;
            // iterate till 500000000.... 
            // 1e8 as the max limit....
        for (int i = 1; i <= 1e8; i++) {
            string s = to_string(i);
            string t(s.rbegin(), s.rend());

            int val = stoi(s + t.substr(1));
            if (val >= n && isPrime(val))
                return val;
        }
        return -1;
    }
};