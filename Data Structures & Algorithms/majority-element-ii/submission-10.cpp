class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c=0,d=INT_MAX,c1=0,d1=0,n=nums.size();
        for(int i=0;i<n;i++){
            if( c1==0 && nums[i]!=d){
                c=nums[i];
                c1++;
            }
            else if(d1==0 && nums[i]!=c){
                d=nums[i];
                d1++;
            }
            else if(nums[i]==c){
                c1++;
            }
            else if(nums[i]==d){
                d1++;
            }
            else{
                c1--;
                d1--;
            }
        }
        int c2=0,d2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==c){
                c2++;
            }
            else if(nums[i]==d){
                d2++;
            }
        }
        if(c2 > n/3 && d2 > n/3){
            return {c,d};
        }
        else if(c2 > n/3 ){
            return {c};
        }
        else if(d2 > n/3){
            return {d};
        }
        else {
            return {};
        }
    }
};