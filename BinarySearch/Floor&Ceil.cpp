class Solution {
public:

    int findFloor(vector<int>& arr, int x) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] <= x) {
                ans = arr[mid];
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int findCeil(vector<int>& arr, int x) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] >= x) {
                ans = arr[mid];
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }

    vector<int> getFloorAndCeil(vector<int> nums, int x) {

        int f = findFloor(nums, x);
        int c = findCeil(nums, x);

        return {f, c};
    }
};