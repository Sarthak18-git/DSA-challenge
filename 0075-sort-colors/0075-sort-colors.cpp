class Solution {
public:
   void swap(int &a,int &b){
      int temp=a;
      a=b;
      b=temp;
   }
    void sortColors(vector<int>& nums) {
        int l=0;
        int colour=0;
        for(int i=0;i<3;i++){
            for(int r=l;r<nums.size();r++){
                 if(nums[r]==colour){
                       swap(nums[r],nums[l]);
                       l++;
                 }
            }
            colour++;
        }
    }
};