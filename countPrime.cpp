#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {

        int count = 0;
        vector <bool> prime(n+1, true);
        prime[0] = prime[1] = false;
        // applying Seive of Eratosthenes........
        // overcome  the TLE ....
        for(int i=2; i<n; i++)
        {
            if(prime[i])
            {
                count++;

                for(int j=2*i; j<n; j=j+i)
                {
                    prime[j] = 0;
                }
            }
        }
        return count;
    }
};

// TIME COMPLEXITY - O(n*log(log(n))).......

// lcm(a,b) * gcd(a,b)  = a*b ............