class Solution {
public:
    
    int robHelper(vector<int> & nums, int i)
    {
        if(i >= nums.size())
        return 0;
    //int rob(vector<int>& nums) {
        
    /// solution for 1 case ... 
    // rob from first and third house .. 
    int robAmt1 = nums[i] + robHelper(nums, i+2);
    // rob from leaving the first house .. 
    int robAmt2 = 0 + robHelper(nums, i+1);

    return max(robAmt1, robAmt2);
    }
    int rob(vector<int> & nums)
    {
        return robHelper(nums, 0);
    }
};