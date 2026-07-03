class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1,c=0;
        while(i<j){
            if(people[j]==limit){
                c++;
                j--;
            }
            else if(people[i]+people[j]>limit){
                c++;
                j--;
            }
            else {
                c++;
                i++;
                j--;
            }
            if(i==j){
                c++;
            }
        }
        return c;
    }
};