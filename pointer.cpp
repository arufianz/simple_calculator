#include <iostream>

int main(int argc, char const *argv[])
{
    int num = 4;
    int* pNum = &num;

    *pNum = 100;

    std::cout << "value: " << num;
    std::cout << " is in memory address of " << pNum;

    return 0;
}
