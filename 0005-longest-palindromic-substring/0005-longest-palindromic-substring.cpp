class Solution {
public:
    string longestPalindrome(string s) {
        int len=0;
        string ans="";
        for(int i=0;i<s.length();i++){
            int l=i;
            int r=i;
              while(l>=0 && r<s.length() && s[l]==s[r]){
                if(len<(r-l+1)){
                    len=max(len,r-l+1);
                    ans=s.substr(l,r-l+1);
                    }
                l--;
                r++;
              }
              l=i;
              r=i+1;
              while(l>=0 && r<s.length() && s[l]==s[r]){
                if(len<(r-l+1)){
                    len=max(len,r-l+1);
                    ans=s.substr(l,r-l+1);
                    }
                l--;
                r++;
              }
        }
        return ans;
    }
};