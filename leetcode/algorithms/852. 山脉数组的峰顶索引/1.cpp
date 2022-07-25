class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 1, right = arr.size() - 2, mid;
        while (left <= right) {
            mid = left + (right - left >> 1);
            if (arr[mid] < arr[mid + 1]) left = mid + 1;
            else if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) return mid;
            else right = mid - 1;
        }
        return -1;
    }
};