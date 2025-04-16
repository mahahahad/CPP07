#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>
#include <stdlib.h>

template <typename T>
class   Array {
    public:
        Array( void );
        Array( unsigned int size );
        Array( const Array& copy );
        ~Array( void );
        Array&  operator=( const Array& copy );
        T&      operator[]( int index );
        unsigned int    size(void);
    
    public:
        T   *arr;
    
    private:
        unsigned int    _elCount;
};

// Include the implementations of the class members
#include "Array.tpp"

#endif
