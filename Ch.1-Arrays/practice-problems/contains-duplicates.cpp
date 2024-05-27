#include <iostream>
#include <set>
#include <vector>

/* Problem:
	Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

	Example:
	Input: nums = [1,2,3,1]
	Output: true
*/

// Use a set to store the numbers

class Solution
{
public:
	bool hasDuplicate(std::vector<int> &nums)
	{
		std::set<int> result;
		for (const int &num : nums)
		{
			if (result.find(num) != result.end())
			{
				return true;
			}
			result.insert(num);
		}
		return false;
	}
};
