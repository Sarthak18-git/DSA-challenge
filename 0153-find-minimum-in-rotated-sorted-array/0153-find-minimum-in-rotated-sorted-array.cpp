class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int mini=INT_MAX;
        while(l<=r){
            int m=l+(r-l)/2;
             mini=min(mini,nums[m]);
            if(nums[m]<=nums[r]){
                r=m-1;;
            }
            else{
                l=m+1;
            }
        }
        return mini;
    }
};