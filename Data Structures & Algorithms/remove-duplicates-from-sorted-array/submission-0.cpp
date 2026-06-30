class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0,c=0;
        while(j<nums.size()){
            if(nums.size()==1){
                return 1;
            }
            while(j<nums.size()&& nums[j]==nums[i]){
                j++;
            }
            if(i+1<nums.size() && j<nums.size()){
                swap(nums[i+1],nums[j]);
                c++;
            }    
            i++;
            j++;
        }
        return c+1;
    }
};