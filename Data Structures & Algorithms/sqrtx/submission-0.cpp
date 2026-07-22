class Solution {
public:
    int mySqrt(int x) {
        int s=1,e=x,ans=0;
        while(s<=e){
            long long mid=e+(s-e)/2;
            if((1LL*mid*mid)==x){
                return mid;
            }
            else if((1LL*mid*mid)>x){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
};