/*! \file rot_arr.h
 * \brief RotArr class interface.
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
/*! \class RotArr
 * \brief Some briefing
 */
class RotArr
{
public:

    //! \brief default constructor.    
    RotArr() = default;

    //! \brief default destructor.
    ~RotArr() = default;

    //-----------------------------------------------------------------------------------

    void run();

    //-----------------------------------------------------------------------------------

private:

    //! List of private variables.
    void _rotate(std::vector<int>& nums, int k);

    void _reverse(std::vector<int>& nums, int begin, int end);
};
//=======================================================================================
