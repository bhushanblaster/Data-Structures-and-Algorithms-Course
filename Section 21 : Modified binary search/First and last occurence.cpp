/*
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9
nums is a non decreasing array.
-10^9 <= target <= 10^9
*/

class Solution {
public:
    
    int getFirst(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size()-1;
        int found = -1;
        
        while(start<=end)
        {
            int mid = start +(end-start)/2;
             if(nums[mid]==target)
             {
                 found = mid;
                 end = end-1;
             }
            else if(nums[mid]>target)
            {
                end = end-1;
            }
            else
            {
                start= start+1;
            }
        }
        return found;
    }
    int getLast(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size()-1;
        int found = -1;
        
        while(start<=end)
        {
            int mid = start +(end-start)/2;
             if(nums[mid]==target)
             {
                 found = mid;
                 start+=1;
             }
            else if(nums[mid]>target)
            {
                end = end-1;
            }
            else
            {
                start= start+1;
            }
        }
        return found;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        int first = getFirst(nums,target);
        if(first>-1)
        {
            int last = getLast(nums,target);
            ans[0] = first;
            ans[1] = last;
        }
        return ans;
    }
};
