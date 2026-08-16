class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int k=0;
        unordered_map<int,int>freq;
        int l=0;
        int len=0;
        for(int r=0;r<fruits.size();r++){
            if(freq[fruits[r]]==0){
                freq[fruits[r]]++;
                k++;
            }
            else{
                freq[fruits[r]]++;
            }
            while(k>2){
                freq[fruits[l]]--;
                if(freq[fruits[l]]==0){
                    k--;
                }
                l++;
            }
            len=max(len,r-l+1);
        }
        return len;
    }
};