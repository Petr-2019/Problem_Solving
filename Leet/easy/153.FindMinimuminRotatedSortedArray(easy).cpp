/*

Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

You may assume no duplicate exists in the array.

*/

class Solution {
public:
    int findMin(vector<int>& nums) {
    if (nums.size() == 1)
        return nums[0];
    int min = nums[0];
    for (int i =1;i<nums.size();i++)
    {
        if (nums[i-1] > nums[i])
        {
            min = nums[i];
            break;
        }
    }
    return min;
}
};


class Solution {
public:
    int findMin(vector<int>& nums) {
    int low = 0;
    int high = (int)nums.size()-1;
    while (low < high)
    {
        if (nums[low] < nums[high])
            return nums[low];
        int mid = low + (high-low)/2;
        if (nums[mid] > nums[high])
            low = mid + 1;
        else
            high = mid;
    }
    return nums[low];
}
};
