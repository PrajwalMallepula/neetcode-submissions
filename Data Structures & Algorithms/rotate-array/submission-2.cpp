class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        vector<int>v;
        int r = 0;
        r = nums[n-k];
        for(int i = n-k; i < n; i++){
            v.push_back(nums[i]);
        }
        
        for(int i = n-k; i >= 0; i--){
            nums[k+i] = nums[i];
        }
        nums[n] = r;
        for(int i = 0; i<k ;i++){
            nums[i] = v[i];
        }
    }
};