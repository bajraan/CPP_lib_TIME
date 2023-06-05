#ifndef PBATIMETESTS_HPP
#define PBATIMETESTS_HPP

enum class TRes{fail,pass,unknown};

void printResult(TRes, std::string, std::string, bool);
bool checkDebFlag(int, char* []);
void TEST__timeConversion(bool);

#endif