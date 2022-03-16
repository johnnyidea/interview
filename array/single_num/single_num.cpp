/*! \file single_num.cpp
 * \brief SingleNum class implementation.
 *
 * \authors rene
 * \date March 2022
 */

//=======================================================================================

#include "single_num.h"

#include <cassert>
#include <map>
#include <set>

using namespace std;

int SingleNum::_singleNumber(vector<int> &nums)
{
    //map
//    map<int, int> m;
//
//    for (const auto& it: nums)
//        if (m.count(it) == 0)
//            m.emplace(it, 1);
//        else
//            m[it]++;
//
//    for (const auto& it: m)
//        if (it.second == 1)
//            return it.first;
//
//    return -1;

    //math approach
    //2*(a + b + c) - (a + b + c + b + a) = c
//    set<int> s;
//    int sum{0};
//    int sum_of_unique{0};
//
//    for (const auto& it: nums)
//    {
//        if (s.count(it) == 0)
//        {
//            s.emplace(it);
//            sum_of_unique += it;
//        }
//
//        sum += it;
//    }
//
//    return 2*sum_of_unique - sum;


    //XOR approach
    // + - xor
    // A + B + A = B

    int res = 0;
    for (const auto& it: nums)
        res ^= it;

    return res;
}

void SingleNum::run()
{
    vector<int> nums = {4,1,2,1,2};

    assert(4 == _singleNumber(nums));
}
