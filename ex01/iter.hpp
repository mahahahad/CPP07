#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    printArr( const T* arr, int len ) {
    for (int i = 0; i < len; i++) {
        std::cout << arr[i] << (i == len - 1 ? "\n" : ", ");
    }
}

template <typename T>
void    iter( T* arr, int len, void (*fn)(T&) ) {
    for (int i = 0; i < len; i++) {
        fn(arr[i]);
    }
}

template <typename T>
void    iter( T* arr, int len, void (*fn)(const T&) ) {
    for (int i = 0; i < len; i++) {
        fn(arr[i]);
    }
}

#endif
