class Solution {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int l;
        for(l=n-2;l>=0;l--){
            if(nums[l]>=nums[l+1])continue;
            else break;
        }
        int pivot=l;
        if(pivot>=0){
            int idx=n-1;
            int mini=INT_MAX;
            for(int r=n-1;r>pivot;r--){
                 if(nums[r]>nums[pivot] && nums[r]<mini){
                    mini=nums[r];
                    idx=r;
                 }
            }
            swap(nums[l],nums[idx]);
        }
        reverse(nums.begin()+pivot+1,nums.end());
    }
};