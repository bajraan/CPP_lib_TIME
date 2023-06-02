#include <string>

#include "tests/pbaTimeTests.hpp"

int main(int argc, char* argv[]) {

    bool debFlag = checkDebFlag(argc,&argv[0]);
    TEST__timeConversion(debFlag);
    return 0;
}