class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi=0,ans=0;
        for(int i=0;i<nums.size();i++){
            maxi=1;
            int temp=nums[i];
            while(mp.find(temp-1)!=mp.end()){
                maxi++;
                temp--;
            }
            ans=max(ans,maxi);
        }
        return ans;
    }
};
