#include "pbaTime.hpp"

#include <iostream>
#include <sstream>
#include <iomanip>

void test(void)
{
    std::cout << "Library compilation - PASS" << std::endl;
}

/**
 * Converts time from 12-hour format to 24-hour format.
 *
 * This function takes a time string in the format "hh:mm:ssAM/PM" and converts it
 * to the 24-hour format. The converted time is returned as a string.
 *
 * @param s The time string in the format "hh:mm:ssAM/PM".
 * @return  The converted time in the 24-hour format as a std::string.
 *
 * @example
 *     std::string timeString = "08:30:45PM";
 *     std::string convertedTime = timeConversion(timeString);
 *     // convertedTime = "20:30:45"
 * 
 *     12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
 *     12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
 *     12:01:00PM -> 12:01:00
 *     12:01:00AM -> 00:01:00
 *     07:05:45PM -> 19:05:45
 * 
 * @note
 *     - The function assumes the input time string is properly formatted.
 *     - The function handles both "AM" and "PM" periods correctly.
 *     - The hour values range from 01 to 12 in the 12-hour format and from 00 to 23 in the 24-hour format.
 *     - The leading zeros are added to ensure two-digit formatting in the output time string.
 */
std::string timeConversion(std::string s) {

    std::string stat;          // AM / PM Status
    std::stringstream output;  // 
    int hh, mm, ss;       // 
    
    hh = stoi(s.substr(0,2));
    mm = stoi(s.substr(3,2));
    ss = stoi(s.substr(6,2));
    stat = s.substr(8,2);
 
    if( stat == "AM" )
    {
        if( hh==12) hh=0;

        output
        << std::setw(2) << std::setfill('0') << hh << ":" 
        << std::setw(2) << std::setfill('0') << mm << ":"
        << std::setw(2) << std::setfill('0') << ss;      
    }
    else
    {
        if( hh!=12) hh+=12;

        output
        << std::setw(2) << std::setfill('0') << hh << ":" 
        << std::setw(2) << std::setfill('0') << mm << ":"
        << std::setw(2) << std::setfill('0') << ss;
    }
    
    return output.str();
}

