class Solution {
public:
    void combinations(int i,string digits,string &current,vector<string>&ans,vector<string>keypad){
        int n=digits.length();
        if(i==n){
            ans.push_back(current);
            return;
        }
        int num= digits[i]-'0';
        string p=keypad[num];
        for(int j=0;j<p.length();j++){
            current.push_back(p[j]);
            combinations(i+1,digits,current,ans,keypad);
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> keypad = {
    "", "", "abc", "def", "ghi",
    "jkl", "mno", "pqrs", "tuv", "wxyz"
     };
       vector<string>ans;
       string current="";
       combinations(0,digits,current,ans,keypad);
       return ans;
    }
};