#include <string>
#include <iostream>

#include "tests/pbaTimeTests.hpp"

int main(int argc, char* argv[]) {

    std::cout << std::endl << std::endl;
    std::cout << "============================"<< std::endl;
    std::cout << "pbaTime library Test Program"<< std::endl;
    std::cout << "============================"<< std::endl;
    std::cout << "Flags:" << std::endl;
    for(int i=0; i<argc; i++)
    std::cout <<i<<" : "<< argv[i] << std::endl;
    std::cout << "============================"<< std::endl;

    bool debFlag = checkDebFlag(argc,argv);
    TEST__timeConversion(debFlag);
    return 0;
}