class Solution {
public:
    int maximalRectangle(vector<vector<char>>matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    vector<int>heights(m);
    int area=0;
    for(int i=0;i<n;i++){
         stack<int>st;
         vector<int>left(m);
         vector<int>right(m);
        for(int j=0;j<m;j++){
            if(matrix[i][j]=='1')heights[j]++;
            else heights[j]=0;
            while(!st.empty() && heights[st.top()]>=heights[j])st.pop();
            if(st.empty())left[j]=j+1;
            else left[j]=j-st.top();
            st.push(j);
        }
        while(!st.empty())st.pop();
        for(int j=m-1;j>=0;j--){
            while(!st.empty() && heights[st.top()]>=heights[j])st.pop();
            if(st.empty())right[j]=m-j;
            else right[j]=st.top()-j;
            st.push(j);
        }
        for(int j=0;j<m;j++){
        int len=heights[j];
        int bre=right[j]+left[j]-1;
        int local=len*bre;
        area=max(local,area);
     }
    }
    return area;
}
};