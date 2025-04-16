#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    printArr( const T* arr, int len ) {
    for (int i = 0; i < len; i++) {
        std::cout << arr[i] << (i == len - 1 ? "\n" : ", ");
    }
}

template <typename T, typename Function>
void    iter( T* arr, int len, const Function& fn ) {
    for (int i = 0; i < len; i++) {
        arr[i] = fn(arr[i]);
    }
}

#endif
