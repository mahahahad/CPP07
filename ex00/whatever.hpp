#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

// Swap the two provided variables
template <typename T>
void    swap( T& var1, T& var2 ) {
    T tmpVar = var1;

    var1 = var2;
    var2 = tmpVar;
}

// Return the smallest of the two provided variables
template <typename T>
T   min( const T& var1, const T& var2 ) {
    if (var1 < var2)
        return (var1);
    return (var2);
}

// Return the largest of the two provided variables
template <typename T>
T   max( const T& var1, const T& var2 ) {
    if (var1 > var2)
        return (var1);
    return (var2);
}

#endif
