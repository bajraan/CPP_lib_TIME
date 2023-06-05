#include <string>
#include <iostream>

#include "tests/pbaTimeTests.hpp"

int main(int argc, char* argv[]) {

    for(int i=0; i<argc; i++)
    std::cout <<i<<" : "<< argv[i] << std::endl;

    bool debFlag = checkDebFlag(argc,argv[1]);
    TEST__timeConversion(debFlag);
    return 0;
}