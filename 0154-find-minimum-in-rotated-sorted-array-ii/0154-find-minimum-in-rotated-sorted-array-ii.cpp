class Solution {
public:
    int findMin(vector<int>& nums) {
         int l=0;
         int r=nums.size()-1;
         int mini=INT_MAX;
         while(l<=r){
            int m=l+(r-l)/2;
            mini=min(nums[m],mini);
            if(nums[r]>nums[l])r=m-1;
            else if(nums[r]<nums[m])l=m+1;
            else r--;
         }
         return mini;
    }
};