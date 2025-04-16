#include "iter.hpp"

int unc(int num) {
    return (num + 2);
}

int main(void) {
    int test[] = {0, 1, 2, 3};
    int len = sizeof(test) / sizeof(test[0]);

    std::cout << "Array before: ";
    printArr(test, len);
    std::cout << "Calling function on array\n";
    iter(test, len, unc);
    std::cout << "Array after: ";
    printArr(test, len);
    return (0);
}
