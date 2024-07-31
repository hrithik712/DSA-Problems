class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(auto x: nums1) mp[x]++;
        for(auto x: nums2) mp[x]++;
        int mn1=*min_element(nums1.begin(),nums1.end());
        int mn2=*min_element(nums2.begin(),nums2.end());
        for(auto x: mp){
            if(x.second>1) return x.first;
        }
        string s;
        if(mn1<mn2) s=to_string(mn1)+ to_string(mn2);
        else s=to_string(mn2)+ to_string(mn1);
        return stoi(s);
    }
};