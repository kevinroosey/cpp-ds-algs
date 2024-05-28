/* 
	Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

	Example 1:
	Input: nums = [1, 2, 3, 3]
	Output: true

	Example 2:
	Input: nums = [1, 2, 3, 4]
	Output: false
*/

/**
 * There's several appraoches here
 * 1. sort the array and check if the next element is the same as the current element
 * 2. use a hashmap and check if keys exist already
 * 3. use a set and check if the element already exists at each insertion
 * 
 * 
 * 2 and 3 are similar as each data structure relies on no duplicates. I chose a set as I don't need key-value pairs
*/

#include <iostream>
#include <set>
#include <vector>

class Solution
{
public:
	bool hasDuplicate(std::vector<int> &nums)
	{
		std::set<int> result;
		for (const int &num : nums)
		{
			if (result.find(num) != result.end()) {
				return true;
			}
			result.insert(num);
		}
		return false;
	}
};
