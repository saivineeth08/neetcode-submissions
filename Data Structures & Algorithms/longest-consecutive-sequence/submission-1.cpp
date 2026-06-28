class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int maxi=0;
            if(mp.find(nums[i]+1)==mp.end()){
                maxi=1;
                int c=1;
                while(mp.find(nums[i]-c)!=mp.end()){
                    maxi++;
                    c++;
                }
            }
            ans=max(ans,maxi);
        }
        return ans;
    }
};
