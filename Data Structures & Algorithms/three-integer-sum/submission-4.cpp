class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for(int i = 0; i < n; i++) {
            int curr = nums[i];
            if(curr > 0) break;
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1, right = n - 1;

            while(left < right) {
                int threeSum = nums[left] + nums[right] + curr;
                if(threeSum == 0) {
                    vector<int> triplet = {nums[left], nums[right], curr};
                    sort(triplet.begin(), triplet.end());
                    result.push_back(triplet);
                    left++, right--;
                    while(left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }

                } else if(threeSum > 0) {
                    right--;
                } else {
                    left++;
                }
            }
        }

        return result;
    }
};