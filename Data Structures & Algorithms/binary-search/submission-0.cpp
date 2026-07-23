class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int first = 0;
        int second = n-1;

        while(first <= second){
            int mid = (first+second)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                second = mid-1;
            }
            else{
                first = mid+1;
            }
        }
        return -1;
    }
};
