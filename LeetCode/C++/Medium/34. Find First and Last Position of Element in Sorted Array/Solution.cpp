class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int n = nums.size();
        int lo = 0;
        int hi = n - 1;
        int mid;
        // first occurence
        while (hi >= lo) {

            mid = lo + (hi - lo) / 2;
            if (mid == 0) {
                if (nums[0] == target) {
                    ans[0] = 0;
                    break;
                }
            }
            if (nums[mid] == target) {
                if (nums[mid - 1] == target)
                    hi = mid - 1;
                else {
                    ans[0] = mid;
                    break;
                }
            } else if (nums[mid] > target)
                hi = mid - 1;
            else if (nums[mid] < target)
                lo = mid + 1;
        }
        lo = 0;
        hi = n-1;

        //      last occurence
        while (hi >= lo) {

            mid = lo + (hi - lo) / 2;

            if (nums[n-1] == target) {
                ans[1] = n-1;
                break;
            }

            if (nums[mid] == target) {
                if (nums[mid + 1] == target)
                    lo = mid + 1;
                else {
                    ans[1] = mid;
                    break;
                }

            } else if (nums[mid] > target)
                hi = mid - 1;
            else if (nums[mid] < target)
                lo = mid + 1;
        }
        return ans;
    }
};