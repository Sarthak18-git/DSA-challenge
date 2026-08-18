class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int l=1;
        for(int r=1;r<nums.size();r++){
            if(nums[r]==nums[r-1]){
                count++;
                if(count<=2){
                    nums[l]=nums[r];
                    l++;
                }
                else{
                    continue;
                }
            }
            else{
                    count=1;
                    nums[l]=nums[r];
                    l++;
                }
        }
        return l;
    }
};