class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi=0,fsum=0,ans=0;
        for(int i=0;i<weights.size();i++){
            fsum+=weights[i];
            if(weights[i]>maxi){
                maxi=weights[i];
            }
        }
        int s=maxi,e=fsum;
        while(s<=e){
            int mid=e+(s-e)/2;
            int i=0,j=0,sum=0,c=0;
            while(j<weights.size()){
                sum+=weights[j];
                if(sum>mid){
                    c++;
                    i=j;
                    sum=0;
                }
                else if(sum==mid){
                    c++;
                    j++;
                    i=j;
                    sum=0;
                }
                else{
                    j++;
                }
            }
            if(sum!=0){
                c++;
            }
            if(c > days){
                s=mid+1;
            }
            else{
                ans=mid;
                e=mid-1;
            }
        }
        return ans;
    }
};