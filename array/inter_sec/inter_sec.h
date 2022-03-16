/*! \file inter_sec.h
 * \brief InterSec class interface.
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
/*! \class InterSec
 * \brief Some briefing
 */
class InterSec
{
public:

    //! \brief default constructor.    
    InterSec() = default;

    //! \brief default destructor.
    ~InterSec() = default;

    //-----------------------------------------------------------------------------------

    void run();

    //-----------------------------------------------------------------------------------

private:

    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2);

};
//=======================================================================================
