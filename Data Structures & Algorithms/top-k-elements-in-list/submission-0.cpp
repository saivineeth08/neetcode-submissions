class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> ans(k, 0);
        int c=0;
        for(auto it : mp){
            int mini=0;
            if(c<k){
                ans[c]=it.second;
            }
            else{
                for(int i=1;i<k;i++){
                    if(ans[i]<ans[mini]){
                        mini=i;
                    }
                }
                if(ans[mini]<it.second){
                    ans[mini]=it.second;
                }
            }  
            c++;  
        }
        vector<int>ans1;
            
                for(auto it : mp){
                    for(int i=0;i<k;i++){
                        if(it.second==ans[i]){
                            ans1.push_back(it.first);
                            break;
                        }    
                    }       
                }
            
        return ans1;
    }
};