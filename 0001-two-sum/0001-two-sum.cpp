class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>seen;
        vector<int>ans;
     for(int i=0;i<nums.size();i++){
         
         if(seen.count(target-nums[i])){
            return {seen[target-nums[i]],i} ;
         }
       seen [nums[i]] =i;
     }
        
        return{};
    }
};