class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi = INT_MIN;
        for(auto i :nums){
            mp[i]++;
            maxi = max(maxi,mp[i]);
        }
        int ans = 0;
        for(auto i : mp){
            if(i.second == maxi) 
                ans += i.second;
        }
        return ans;
        
    }
};