class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=INT_MAX;
        int i=0,j=0,sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            if(sum==target){
                mini=min(mini,j-i+1);
                sum-=nums[i];
                i++;
                j++;
            }
            else if(sum<target){
                j++;
            }
            else{
                mini=min(mini,j-i+1);
                sum=sum-nums[i]-nums[j];
                i++;
            }
        }
        if(mini==INT_MAX){
            return 0;
        }
        else{
            return mini;
        }
    }
};