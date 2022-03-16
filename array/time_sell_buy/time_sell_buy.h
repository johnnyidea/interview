/*! \file time_sell_buy.h
 * \brief TimeSellBuy class interface.
 *
 * Class description.
 *
 * \authors rene
 * \date March 2022
 */

//=======================================================================================

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//=======================================================================================
/*! \class TimeSellBuy
 * \brief Some briefing
 */
class TimeSellBuy
{
public:

    //! \brief default constructor.    
    TimeSellBuy() = default;

    //! \brief default destructor.
    ~TimeSellBuy() = default;

    //-----------------------------------------------------------------------------------

    void run();

    //-----------------------------------------------------------------------------------

private:

    //! List of private variables.
    int _maxProfit(std::vector<int>& prices);

};
//=======================================================================================
