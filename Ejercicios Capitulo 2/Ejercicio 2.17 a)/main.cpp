#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 4; ++i) {
        std::cout << i;
        if (i != 4) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
