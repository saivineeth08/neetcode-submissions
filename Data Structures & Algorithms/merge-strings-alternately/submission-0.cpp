class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string ans="";
        while(i<word1.size() && i<word2.size()){
            ans+=word1[i];
            ans+=word2[i];
            i++;
        }
        if(word1.size()>word2.size()){
            while(i<word1.size()){
                ans+=word1[i];
                i++;
            }    
        }
        else if(word1.size()<word2.size()){
            while( i<word2.size()){
                ans+=word2[i];
                i++;
            }    
        }
        return ans;
    }
};