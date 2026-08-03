class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>ans(temperatures.size(),0);
        int i=0;
        while(i<temperatures.size()){
            if(st.empty() || (temperatures[st.top()]>=temperatures[i])){
                st.push(i);
                i++;
            }
            else{
                ans[st.top()]=i-st.top();
                st.pop();
            }
        }
        while(!st.empty()){
            ans[st.top()]=0;
            st.pop();
        }
        return ans;
    }
};