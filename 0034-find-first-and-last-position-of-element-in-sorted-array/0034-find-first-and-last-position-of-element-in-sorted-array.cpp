class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        int min=-1,max=-1;
        while(low<=high){
               int mid = low + (high - low) / 2;
            if(nums[mid]==target){
                min=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        low=0, high=nums.size()-1;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(nums[mid]==target){
                max=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return {min,max};
    }
};