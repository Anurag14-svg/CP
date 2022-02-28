class Solution {
public:
    int minSteps(string s, string t) {
        int freq[26] = {0};
        for(auto n : s) freq[n - 'a']++;
        for(auto m : t) freq[m - 'a']--;
        
        int cnt = 0;
        for(int i = 0 ; i < 26 ;i++){
            if(freq[i] < 0 ) {
                cnt+= abs(freq[i]);
            }
        }
        
        return cnt;
    }
};
