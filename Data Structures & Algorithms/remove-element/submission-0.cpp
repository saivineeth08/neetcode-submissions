class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=0;
        while(j<nums.size() && nums[j]!=val){
            j++;
            i++;
        }
        while(j<nums.size()){
            while(j<nums.size() && nums[j]==val){
                j++;
            }
            if(j<nums.size()){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        return i;
    }
};