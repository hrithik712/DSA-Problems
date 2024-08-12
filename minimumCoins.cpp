class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
       sort(coins.begin(), coins.end());

        int curr_max = 0, i = 0, ans = 0;
        int n = coins.size();
        
        while (curr_max < target) {
            if (i < n && coins[i] <= curr_max + 1)
                curr_max += coins[i++];
            else {
                curr_max = 2 * curr_max + 1;
                ans++;
            }
        }
        return ans;
    }
};