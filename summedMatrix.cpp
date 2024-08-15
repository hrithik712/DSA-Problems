class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        int i, j;
        if(q == 1 || q > 2*n)
            return 0;
        long midCnt = n;
        long midElement = n+1;
        long ans = 0;
        if(q >= midElement)
        {
            ans = midCnt - q + midElement;
        }
        else
        {
            ans = midCnt - midElement + q;
        }
        return ans;

    }
};