// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
        
    //     // using counting method .. 
    //     int zeros, ones, twos;
    //     zeros=ones=twos=0;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         if(nums[i]==0){
    //             zeros++;
    //         }
    //         else if(nums[i]==1){
    //             ones++;
    //         }
    //         else{
    //             twos++;
    //         }
    //     }
    //     // now spreading .. 
    //     int i=0;
    //     while(zeros--){
    //         nums[i]=0;
    //         i++;
    //     }
    //     while(ones--){
    //         nums[i]=1;
    //         i++;
    //     }
    //     while(twos--){
    //         nums[i]=2;
    //         i++;
//        }
//     }
// };
// // Above solution is not inplace solution .. \


// Inplace solution - 3 pointer approach .. 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0, high=nums.size()-1;
        while(mid<=high){
            if(nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        } 

    }
};    