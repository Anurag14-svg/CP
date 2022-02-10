// Same approach different solutions


// First One
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int res_xor = (1<<maximumBit) - 1;
        vector<int> ans;
        int xo = 0;
        for(int num : nums) {
            xo ^= num;
            int push_element = xo ^ res_xor;
            ans.push_back(push_element);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};


// Second One
// This one is faster because we are not reversing the array here whether we are using prefix xor as a tool to get the current k :

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int XOR = 0;
        vector<int > ans(n);
        
        for(auto &n : nums) XOR ^= n;
        ans[0] = XOR^= (1<<maximumBit) - 1;
        for(int i = 1 ; i<n;i++){
            ans[i] = XOR ^= nums[n-i];
        }
        
        return ans;
    }
};
