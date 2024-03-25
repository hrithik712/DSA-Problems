class Solution {
    private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> & ans)
    {
        // base case ..
        if(index >= nums.size())
        {
            ans.push_back(output);
            return;
        }
        // excluded elements..
        solve(nums, output, index+1, ans);
        // included elements .. 
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        /// power set have 2^n elements....
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};