class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
          int zero=0;
          int l=0;
          int maxi=0;
          for(int r=0;r<nums.size();r++){
                if(nums[r]==0)zero++;
                while(zero>k){
                   if(nums[l]==0)zero--;
                   l++;
                }
                int len=r-l+1;
                maxi=max(len,maxi);
          }
          return maxi;
    }
};