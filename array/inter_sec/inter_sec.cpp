/*! \file inter_sec.cpp
 * \brief InterSec class implementation.
 *
 * \authors rene
 * \date March 2022
 */

//=======================================================================================

#include "inter_sec.h"

#include <cassert>
#include <unordered_map>
#include <algorithm>

using namespace std;

std::vector<int> InterSec::intersect(vector<int> &nums1, vector<int> &nums2)
{
    //Naive
//    vector<int> res;
//
//    for (int i = 0; i < nums1.size(); i++)
//        for (int j = 0; j < nums2.size(); j++)
//            if (nums1[i] == nums2[j])
//            {
//                res.push_back(nums1[i]);
//                nums2.erase(nums2.begin() + j);
//                break;
//            }
//
//    return res;

    //map
//    vector<int> res;
//    unordered_map<int, int> u_map;
//
//    for (const auto& i: nums1)
//        u_map[i]++;
//
//    for (const auto& i: nums2)
//    {
//        auto el_it = u_map.find(i);
//        if (el_it != u_map.end() && --el_it->second >= 0)
//            res.push_back(el_it->first);
//    }
//
//    return res;

    //special func
    vector<int> res;

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    set_intersection(nums1.begin(), nums1.end(),
                     nums2.begin(), nums2.end(),
                     back_inserter(res));

    return res;
}

void InterSec::run()
{
    vector<int> n1{1, 2, 2, 1};
    vector<int> n2{2, 2};

    auto res = intersect(n1, n2);

    n1 = {4,9,5};
    n2 = {9,4,9,8,4};

    res = intersect(n1, n2);

    cout << res.size() << endl;
}

