/*! \file rem_dup.cpp
 * \brief RemDup class implementation.
 *
 * \authors rene
 * \date March 2022
 */

//=======================================================================================

#include "rem_dup.h"

using namespace std;

void RemDup::run()
{
    std::fstream source_file("../rem_dup/data.txt");
    string line;

    while (getline(source_file, line))
    {
        cout << line << endl;
    }
}
