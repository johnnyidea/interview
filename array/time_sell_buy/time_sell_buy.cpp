/*! \file time_sell_buy.cpp
 * \brief TimeSellBuy class implementation.
 *
 * \authors rene
 * \date March 2022
 */

//=======================================================================================

#include "time_sell_buy.h"

#include <cassert>

using namespace std;

int TimeSellBuy::_maxProfit(vector<int> &prices)
{
    int profit {0};

    for (int i = 0; i < prices.size() - 1;)
    {
        if (prices[i] < prices[i + 1])
            profit += prices[i + 1] - prices[i];

        i += 1;
    }
    return profit;
}

void TimeSellBuy::run()
{
    vector<int> prices {7,1,5,3,6,4};

    assert(_maxProfit(prices) == 7);

    prices  = {7,6,4,3,1};
    assert(_maxProfit(prices) == 0);

    prices  = {1,2,3,4,5};
    assert(_maxProfit(prices) == 4);
}


