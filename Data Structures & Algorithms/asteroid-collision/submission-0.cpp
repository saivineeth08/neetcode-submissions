class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0){
                st.push(asteroids[i]);
            }
            else{
                if(st.empty() || st.top()<0 ){
                    st.push(asteroids[i]);
                }
                else if(!st.empty() && (st.top()==abs(asteroids[i]))){
                    st.pop();
                }
                else{
                    while(!st.empty() && st.top()>0){
                        if(st.top()<0 ){
                            st.push(asteroids[i]);
                            break;
                        }
                        else if(abs(asteroids[i])==abs(st.top())){
                            st.pop();
                            asteroids[i]=0;
                            break;
                        }
                        else if(abs(asteroids[i])>abs(st.top())){
                            st.pop();
                        }
                        else{
                            asteroids[i]=0;
                            break;
                        }
                    }

                    if(st.empty() || st.top()<0){
                        if(asteroids[i]!=0){
                            st.push(asteroids[i]);
                        }
                        
                    }
                }
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};