The set S originally contains numbers from 1 to n. But unfortunately, due to the data error, one of the numbers in the set got duplicated to another number in the set, which results in repetition of one number and loss of another number.

Given an array nums representing the data status of this set after the error. Your task is to firstly find the number occurs twice and then find the number that is missing. Return them in the form of an array.

Example 1:
Input: nums = [1,2,2,4]
Output: [2,3]
Note:
The given array size will in the range [2, 10000].
The given array's numbers won't have any order.

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    vector<int> v;
    unordered_set<int> s;
    int n = (int) nums.size(), majority = 0, _Sn = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (s.count(nums[i])) majority = nums[i];
        else s.insert(nums[i]);
        _Sn += nums[i];
    }
    int Sn = (1 + n) * n / 2;
    int diff = (Sn > _Sn) ? Sn - _Sn : -(_Sn - Sn);
    v.push_back(majority);
    v.push_back(majority + diff);
    return v;
}
};
