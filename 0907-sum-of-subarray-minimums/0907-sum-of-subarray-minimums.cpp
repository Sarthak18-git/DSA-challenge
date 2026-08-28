class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>left(n);
        vector<int>right(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i])st.pop();
            if(st.empty())left[i]=i+1;
            else left[i]= i-st.top();
            st.push(i);
        }
        while(!st.empty())st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i])st.pop();
            if(st.empty())right[i]=n-i;
            else right[i]=st.top()-i;
            st.push(i);
        }
        long long sum=0;
         const long long MOD = 1e9 + 7;
        for(int i=0;i<n;i++){
            sum=(sum+1LL*arr[i]*right[i]*left[i])%MOD;
        }
        return sum;
    }
};