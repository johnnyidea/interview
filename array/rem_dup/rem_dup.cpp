/*! \file rem_dup.cpp
 * \brief RemDup class implementation.
 *
 * \authors rene
 * \date March 2022
 */

//=======================================================================================

#include <cassert>
#include "rem_dup.h"

using namespace std;

int RemDup::removeDuplicates(vector<int>& nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
        while (nums[i] == nums[i + 1] && i + 1 < nums.size())
            nums.erase(nums.begin() + i + 1);

    return nums.size();
}

void RemDup::run()
{
//    vector<int> nums = {1,1,1}; // Input array
//    vector<int> expectedNums = {1}; // The expected answer with correct length

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4}; // Input array
    vector<int> expectedNums = {0,1,2,3,4}; // The expected answer with correct length

    int k = removeDuplicates(nums); // Calls your implementation

    assert(k == expectedNums.size());
    for (int i = 0; i < k; i++)
        assert(nums[i] == expectedNums[i]);
}
