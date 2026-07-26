class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++){
            mp[abs(arr[i]-x)].push_back(arr[i]);
        }
        vector<vector<int>>arrays;
        for(auto it : mp){
            arrays.push_back(it.second);
        }
        vector<int>ans;
        for(auto it : arrays){
            for(auto it1 : it){
                if(ans.size()==k){
                    break;
                }
                ans.push_back(it1);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};