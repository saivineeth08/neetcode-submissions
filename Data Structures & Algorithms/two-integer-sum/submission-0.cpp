class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>st;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(st.find(rem)!=st.end()){
                return {st[rem],i};
            }
            else{
                st[nums[i]]=i;
            }
        }
        return {};
    }
};
