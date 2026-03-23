class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        
        int left = 0;
        long long currSum = 0, maxSum = 0;

        for (int right = 0; right < nums.size(); right++) {

            currSum += nums[right];
            freq[nums[right]]++;

            while (freq[nums[right]] > 1) {
                freq[nums[left]]--;
                currSum -= nums[left];
                left++;
            }

            if (right - left + 1 == k) {
                maxSum = max(maxSum, currSum);

                freq[nums[left]]--;
                currSum -= nums[left];
                left++;
            }
        }

        return maxSum;
    }
};
