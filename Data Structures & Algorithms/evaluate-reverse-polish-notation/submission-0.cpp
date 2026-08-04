class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            
            if(tokens[i] == "+" ||tokens[i] == "-" ||tokens[i] == "*" ||tokens[i] == "/"){
                int a=0,b=0;
                b=st.top();
                st.pop();
                a=st.top();
                st.pop();
                if (tokens[i] == "+")
                    st.push(a + b);
                else if (tokens[i] == "-")
                    st.push(a - b);
                else if (tokens[i] == "*")
                    st.push(a * b);
                else
                    st.push(a / b);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        int ans=0;
        if(!st.empty()){
            ans=st.top();
        }
        
        return ans;
    }
};