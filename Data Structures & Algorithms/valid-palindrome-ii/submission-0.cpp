class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                bool lt=ans(s,i+1,j);
                bool rt=ans(s,i,j-1);
                if(lt==true || rt==true){
                    return true;
                }
                else{
                    return false;
                }
            }
        }    
        return true;
    }
    bool ans(string s,int i,int j){
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }   
        return true; 
    }
};