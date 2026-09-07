class Solution {
public:
      int firstOcc(vector<int>& nums, int x) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        int first = -1;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(nums[mid] == x) {
                first = mid;
                high = mid - 1;
            }
            else if(nums[mid] < x) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return first;
    }

    int lastOcc(vector<int>& nums, int x) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        int last = -1;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(nums[mid] == x) {
                last = mid;
                low = mid + 1;
            }
            else if(nums[mid] < x) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return last;
    }
    int countOccurrences(vector<int>& arr, int target) {
        int first=firstOcc(arr,target);
        if(first==-1){
            return -1;
        }
        int last=lastOcc(arr,target);
        return last-first+1;
        
    }
};