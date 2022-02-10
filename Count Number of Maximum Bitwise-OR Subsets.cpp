class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        int n = nums.size();
        for(int num : nums) maxOr |= num;
        int cnt = 0;
        for(int i =1 ; i < (1<<n) ;i++){
            int OR = 0;
            for(int j =0 ; j < n ; j++){
                if(i&(1<<j)) OR |= nums[j];
            }
            if(OR == maxOr) cnt++;
        }
        
        return cnt;
    }
};

// It is given in the constrains that the size of the array is range between 1 to 16 
// So definitely we can use power set here to solve the problem othwerwise we had to use backtraking to check all the subsets :)
