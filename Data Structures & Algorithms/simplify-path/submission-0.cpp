class Solution {
public:
    string simplifyPath(string path) {
        int i = 1;
        stack<string> st;
        st.push("/");

        while (i < path.size()) {
            string sol = "";

            if (path[i] == '/') {
                if (st.top() != "/") {
                    st.push("/");
                }
                i++;
            }
            else if (path[i] == '.') {
                while (i < path.size() && path[i] == '.') {
                    sol += path[i];
                    i++;
                }
                int c=0;
                if (sol == ".."  ) {
                    if(i<path.size() && path[i]!='/'){
                        while (i < path.size() && path[i] != '/' ) {
                            sol += path[i];
                            i++;
                        }
                        st.push(sol);
                    }
                    else{
                        while(st.size() > 1 && c<2){
                            st.pop();
                            c++;
                        }
                    }
                }
                else if (sol == ".") {
                    if(i<path.size() && path[i]!='/'){
                        while (i < path.size() && path[i] != '/' ) {
                            sol += path[i];
                            i++;
                        }
                        st.push(sol);
                    }
                }
                else {
                    st.push(sol);
                }
            }
            else {
                while (i < path.size() && path[i] != '/' && path[i] != '.') {
                    sol += path[i];
                    i++;
                }
                if(sol!=""){
                    while(i < path.size() && path[i] != '/'){
                        sol += path[i];
                        i++;
                    }
                }
                st.push(sol);
            }
        }

        string ans = "";
        if(st.top()=="/" && st.size()>1){
            st.pop();
        }

        while (!st.empty()) {
            string s = "";
            s = st.top();
            st.pop();
            ans = s + ans;
        }

        return ans;
    }
};