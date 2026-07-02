class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int k=i+1,j=nums.size()-1;
            while(k<j){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int>temp={nums[i],nums[k],nums[j]};
                    ans.push_back(temp);
                    k++;
                    j--;
                    while(k<j && nums[j]==nums[j+1]){
                        j--;
                    }
                    while(k<j && nums[k]==nums[k-1]){
                        k++;
                    }
                }
                else if(sum<0){
                    k++;
                }
                else{
                    j--;
                }
            }
        }
        return ans;
    }
};
