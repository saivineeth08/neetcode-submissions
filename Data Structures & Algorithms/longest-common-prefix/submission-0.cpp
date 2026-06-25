class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].size();
        string ans="";
        char c;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                c=strs[0][i];
                if(i<m && (strs[j][i]==c) ){
                    if(j==n-1){
                        ans=ans+c;
                    }  
                }
                else{
                    return ans;
                }
            }
        }
        return ans;
    }
};