#include <iostream>

#include "pbaTimeTests.hpp"
#include "../pbaTime/pbatime.hpp"


int test_main()
{
    std::cout << "test 1 start" << std::endl;
    test();
    std::cout << "test 1 finisch" << std::endl;
    std::cout << "all test done PASS" << std::endl;
    return 0;
}

void TEST1()
{
    std::cout << "test" << std::endl;
}