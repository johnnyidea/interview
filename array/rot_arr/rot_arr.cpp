/*! \file rot_arr.cpp
 * \brief RotArr class implementation.
 *
 * \authors rene
 * \date March 2022
 */

//=======================================================================================

#include "rot_arr.h"

#include <cassert>

using namespace std;

void RotArr::_reverse(vector<int> &nums, int begin, int end)
{
    while (begin < end)
    {
        auto tmp = nums[begin];
        nums[begin] = nums[end];
        nums[end] = tmp;

        begin++;
        end--;
    }
}

void RotArr::_rotate(vector<int> &nums, int k)
{
    //Brute force
//    auto prev = *nums.rbegin();
//    auto tmp = nums[0];
//    k  = k % nums.size();
//    for (int j = 0; j < k; j++)
//    {
//        prev = *nums.rbegin();
//
//        for (int i = 0; i < nums.size(); i++)
//        {
//            tmp = nums[i];
//            nums[i] = prev;
//            prev = tmp;
//        }
//    }
    //Time complexity - O(n*k)
    //Space complexity - O(1)  (O(n) - incorrect)

    //Extra array
//    auto sz = nums.size();
//    vector<int> a (sz);
//
//    for (int i = 0; i < sz; i++)
//        a[(i + k)%sz] = nums[i];
//
//    for (int i = 0; i < sz; i++)
//        nums[i] = a[i];
    //Time complexity - O(n) (O(n^2)- incorrect)
    //Space complexity - O(n)

    //Reverse
    k %= nums.size();
    _reverse(nums, 0, nums.size() - 1);
    _reverse(nums, 0, k - 1);
    _reverse(nums, k, nums.size() - 1);

    //Time complexity - O(n)
    //Space complexity - O(1)
}

void RotArr::run()
{
    vector<int> nums{1,2,3,4,5,6,7};

    _rotate(nums, 3);

    vector<int> res {5,6,7,1,2,3,4};
//    for (int i = 0; i < nums.size(); i++)
//        assert(nums[i] == res[i]);


    nums = {-1,-100,3,99};
    _rotate(nums, 2);

    res =  {3,99,-1,-100};
    for (int i = 0; i < nums.size(); i++)
        assert(nums[i] == res[i]);
}

