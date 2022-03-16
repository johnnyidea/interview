#include "inter_sec.h"
#include <iostream>
#include <set>

#include "time_sell_buy.h"
#include "rem_dup.h"
#include "rot_arr.h"
#include "single_num.h"

using namespace std;
int main()
{
    RemDup remDup;
//    remDup.run();

    TimeSellBuy timeSellBuy;
//    timeSellBuy.run();

    RotArr rotArr;
//    rotArr.run();

    SingleNum singleNum;
//	singleNum.run();

    InterSec interSec;
    interSec.run();

    return 0;
}
