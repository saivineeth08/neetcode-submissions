class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int s=1,e=maxi,ans=0;
        while(s<=e){
            int mid=e+(s-e)/2;
            int c=0;
            for(int i=0;i<piles.size();i++){
                c=c+ceil((double)piles[i]/mid);
            }
            if (c <= h) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};