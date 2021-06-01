//https://leetcode.com/problems/next-greater-element-ii/submissions/
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> s;
        vector<int> result(n, -1);
        for (int i = 0; i < n * 2; i++) {
            while (!s.empty() && nums[i % n] > nums[s.top()]) {
                result[s.top()] = nums[i % n];//make answer then pop()
                s.pop();
            }
            s.push(i % n);
        }
        return result;
    }
};