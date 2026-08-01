class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,c=0,m=nums1.size(),n=nums2.size();
        double k1=0,k2=0;
        if((m+n)%2!=0){
            int div=(m+n+1)/2;
            while(i<m && j<n){
                if(nums1[i]<nums2[j]){
                    c++;
                    if(c==div){
                        k1=nums1[i];
                        break;
                    }
                    i++;
                }
                else{
                    c++;
                    if(c==div){
                        k1=nums2[j];
                        break;
                    }
                    j++;
                }
            }
            while(i<m ){
                c++;
                if(c==div){
                    k1=nums1[i];
                    break;
                }
                i++;                
            }
            while(j<n){
                c++;
               if(c==div){
                    k1=nums2[j];
                    break;
                }
                j++;                
            }
        }
        else{
            int div1=(m+n)/2;
            int div2=div1+1;
            c=0;
            while(i<m && j<n){
                if(nums1[i]<nums2[j]){
                    c++;
                    if(c==div1){
                        k1=nums1[i];
                    }
                    else if(c==div2){
                        k2=nums1[i];
                        break;
                    }
                    i++;
                }
                else{
                    c++;
                    if(c==div1){
                        k1=nums2[j];
                    }
                    else if(c==div2){
                        k2=nums2[j];
                        break;
                    }
                    j++;
                }
            }
            while(i<m){
                c++;
                if(c==div1){
                    k1=nums1[i];
                }
                else if(c==div2){
                    k2=nums1[i];
                    break;
                }
                i++;                
            }
            while(j<n){
                c++;
                if(c==div1){
                    k1=nums2[j];
                }
                else if(c==div2){
                    k2=nums2[j];
                    break;
                }
                j++;                
            }
        }
        if(k2==0){
            return k1;
        }
        else{
            return (k1+k2)/2;
        }
    }
};