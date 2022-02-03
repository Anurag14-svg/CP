class Solution {
public:
    vector<int> sumZero(int n) {
        int limit = n / 2;
        vector<int> ans;
        int i = 1; 
        while(i<=limit){
            ans.push_back(i);
            ans.push_back(-i);
            i++;
        }
        
        if(n%2!=0){
            ans.push_back(0);
        }
        
        return ans;
    }
};
