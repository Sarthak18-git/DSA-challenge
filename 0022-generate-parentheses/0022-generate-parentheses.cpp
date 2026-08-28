class Solution {
public:
    void create(int open,int close,int n,string &current,vector<string>&ans){
        if(open==n && open==close){
            ans.push_back(current);
            return;
        }
        if(open<n){
            current.push_back('(');
            create(open+1,close,n,current,ans);
            current.pop_back();
        }
        if(close<open){
            current.push_back(')');
            create(open,close+1,n,current,ans);
            current.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string current;
        create(0,0,n,current,ans);
        return ans;
    }
};