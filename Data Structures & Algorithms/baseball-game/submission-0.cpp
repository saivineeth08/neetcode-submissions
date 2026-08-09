class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]== "C"){
                st.pop();
            }
            else if(operations[i]== "D"){
                st.push(2*st.top());
            }
            else if( operations[i]== "+"){
                int k=st.top();
                st.pop();
                int sum=0;
                if(!st.empty()){
                    sum=st.top()+k;
                }
                st.push(k);
                st.push(sum);
            }
            else{
                st.push(stoi(operations[i]));
            }
        } 
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};