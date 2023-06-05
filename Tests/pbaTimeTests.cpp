#include <iostream>
#include <string>
#include <cstring>

#include "pbaTimeTests.hpp"
#include "../pbaTime/pbatime.hpp"

template <typename T>
void assertTrue(const T& actual, const T& expected) {
    if (actual == expected) {
        std::cout << "Test Passed: Actual value matches the expected value." << std::endl;
    } else {
        std::cout << "Test Failed: Actual value [" << actual << "] does not match the expected value [" << expected << "]." << std::endl;
    }
}

bool checkDebFlag(int argc, char* argv)
{

    for (int i = 1; i < argc; i++) {
        
        if (strcmp(argv , "-deb") == 0) {
            return true;
        }
    }
    return false;
}

void TEST__timeConversion(bool debFlag)
{
    std::cout << "========================" << std::endl;
    std::cout << "TEST: timeConversion    " << std::endl;
    std::cout << "========================" << std::endl;

    const int t_cnt = 3;

    struct tt
    {
        std::string input;
        std::string exp_output;
    };

    tt TestTab[t_cnt]
{
//==============================|
// TEST TABLE                   |
//==============================|
//    INPUT    |    EXPECTED    |
  "12:01:00PM" ,   "12:01:00",
  "12:01:00AM" ,   "00:01:00",
  "07:05:45PM" ,   "19:05:45"
};
    for(int i=0; i<t_cnt; i++)
    {
        std::string out = timeConversion(TestTab[i].input);
        std::string exp = TestTab[i].exp_output;

        if(debFlag)
        std::cout << TestTab[i].input << " -> " << out << " -> " << exp << std::endl;

        assertTrue(out,exp); 
    }
}