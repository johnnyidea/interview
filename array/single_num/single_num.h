/*! \file single_num.h
 * \brief SingleNum class interface.
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
/*! \class SingleNum
 * \brief Some briefing
 */
class SingleNum
{
public:

    //! \brief default constructor.    
    SingleNum() = default;

    //! \brief default destructor.
    ~SingleNum() = default;

    //-----------------------------------------------------------------------------------

    void run();

    //-----------------------------------------------------------------------------------

private:

    int _singleNumber(std::vector<int>& nums);


};
//=======================================================================================
