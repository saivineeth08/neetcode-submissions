class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i-1]==nums[i]){
                continue;
            }
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j-1]==nums[j]){
                    continue;
                }
                int p=j+1,q=n-1;                
                while(p<q){
                    long long sum= 1LL *nums[i]+nums[j]+nums[p]+nums[q];
                    if(sum<target){
                        p++;
                    }
                    else if(sum>target){
                        q--;
                    }
                    else{
                        vector<int>sol;
                        sol.push_back(nums[i]);
                        sol.push_back(nums[j]);
                        sol.push_back(nums[p]);
                        sol.push_back(nums[q]);
                        ans.push_back(sol);
                        p++;
                        q--;
                        while(p<q && nums[p-1]==nums[p]){
                            p++;
                        }
                        while(p<q && nums[q+1]==nums[q]){
                            q--;
                        }                        
                    }
                }
            }
        }
        return ans;
    }
};