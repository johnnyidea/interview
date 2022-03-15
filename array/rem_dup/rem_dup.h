/*! \file rem_dup.h
 * \brief RemDup class interface.
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
/*! \class RemDup
 * \brief Some briefing
 */
class RemDup
{
public:

    //! \brief default constructor.    
    RemDup() = default;

    //! \brief default destructor.
    ~RemDup() = default;

    //-----------------------------------------------------------------------------------

    void run();

    //-----------------------------------------------------------------------------------

private:

    int removeDuplicates(std::vector<int>& nums);

};
//=======================================================================================
