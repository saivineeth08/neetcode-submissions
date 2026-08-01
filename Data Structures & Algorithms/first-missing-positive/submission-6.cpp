class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if(nums[i]<=0){
                i++;
            }
            else if(nums[i]==(i+1)){
                i++;
            }
            else if(nums[i] <= nums.size() && nums[i]!=nums[nums[i]-1]){
                swap(nums[nums[i]-1],nums[i]);
            }
            else{
                i++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=(i+1)){
                return i+1;
            }
        }
        return nums.size()+1;
    }
};