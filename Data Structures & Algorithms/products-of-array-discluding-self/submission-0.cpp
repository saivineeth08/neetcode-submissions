class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre(nums.size(),0);
        vector<int>suf(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(i==0){
                pre[i]=nums[i];
            }
            else{
                pre[i]=nums[i]*pre[i-1];
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(i==nums.size()-1){
                suf[i]=nums[i];
            }
            else{
                suf[i]=nums[i]*suf[i+1];
            }
        }
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(i==0){
                ans[i]=suf[i+1];
            }
            else if(i==nums.size()-1){
                ans[i]=pre[i-1];
            }
            else{
                ans[i]=pre[i-1]*suf[i+1];
            }
        }
        return ans;
    }
};
