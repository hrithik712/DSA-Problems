class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int i =0;
        // thraverse through the array...
        for(int j=0; j<nums.size(); j++)
        {
            // check if nums is not equal to 0, then swap the j with i....
            if(nums[j] != 0)
            {
                swap(nums[j], nums[i]);
                /// after swaping increment i, so that it can check nums[j]!= 0 to whole array...
                i++;
            }
        }
        
    }
};