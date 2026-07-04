class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0,j=0,maxi=0,c=0;
        while(j<s.size() ){
            if(mp[s[j]]>0){
                while(s[i]!=s[j]){
                    mp[s[i]]--;
                    i++;
                    c--;
                }
                mp[s[i]]--;
                mp[s[j]]++;
                i++;
                j++;
                
            }
            else{
                mp[s[j]]++;;
                j++;
                c++;
            }
            maxi=max(maxi,c);
        }  
        return maxi;  
    }
};