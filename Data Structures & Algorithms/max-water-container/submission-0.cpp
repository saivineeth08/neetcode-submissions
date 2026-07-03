class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0,e=height.size()-1,maxi=INT_MIN;
        while(s<e){
            int he=min(height[s],height[e]);
            int w=e-s;   
            int area=he*w;
            maxi=max(maxi,area);
            if(height[s]<height[e]){
                s++;
            }  
            else{
                e--;
            }
        }
        return maxi;
    }
};