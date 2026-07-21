class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,ans=0;
        while(s<=e){
            int mid=e+(s-e)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            if(nums[mid]>target){
                ans=mid;
            }
            else{
                ans=mid+1;
            }
            
        }
        return ans ;
    }
};