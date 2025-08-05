#include "Array.hpp"

template <typename T>
const char* Array<T>::IndexOutOfBoundsException::what() const throw() {
    return ("The specified index is out of bounds");
}

/**
 * Default constructor
 * Creates an empty array
 */
template <typename T>
Array<T>::Array(void) {
    arr = new T[0];
    _elCount = 0;
    
    // std::cout << "Constructor for Array called!" << std::endl;
}

/**
 * Parameterized constructor
 * Creates an array of `elCount` elements initialized by default
 */
template <typename T>
Array<T>::Array(unsigned int elCount) {
    arr = new T[elCount];
    _elCount = elCount;

    // std::cout << "Constructor for Array (with element count) called!"
    //     << std::endl;
}

/**
 * Copy constructor
 * Creates a copy of the provided array without modifying the original 
 */
template <typename T>
Array<T>::Array(const Array& copy) { 
    arr = new T[copy.size()];
    _elCount = copy.size();
    for (unsigned int i = 0; i < copy.size(); i++) {
        arr[i] = copy.arr[i];
    }

    // std::cout << "Copy constructor called!"
    //     << std::endl;
}

/**
 * Copy assignment operator
 * Creates a copy of the provided array without modifying the original
 */
template <typename T>
Array<T>&  Array<T>::operator=(const Array& copy) { 
    arr = new T[copy.size()];
    _elCount = copy.size();
    for (unsigned int i = 0; i < copy.size(); i++) {
        arr[i] = copy.arr[i];
    }

    // std::cout << "Copy constructor called!"
    //     << std::endl;
    return (*this);
}

/**
 * Constant Subscript operator
 * Allows users to read-only access elements of the array with the provided index
 */
template <typename T>
const T&  Array<T>::operator[](int index) const {
    if (index < 0 || static_cast<unsigned int>(index) >= _elCount)
        throw Array<T>::IndexOutOfBoundsException();

    return (arr[index]);
}

/**
 * Subscript operator
 * Allows users to access elements of the array with the provided index
 */
template <typename T>
T&  Array<T>::operator[](int index) {
    if (index < 0 || static_cast<unsigned int>(index) >= _elCount)
        throw Array<T>::IndexOutOfBoundsException();

    return (arr[index]);
}

/**
 * Destructor
 * Destroys the array
 */
template <typename T>
Array<T>::~Array(void) { 
    delete [] arr;
    // std::cout << "Destructor for Array called!"
    //     << std::endl;
}

/**
 * Size member function
 * Returns the number of elements in the array 
 */
template <typename T>
unsigned int    Array<T>::size(void) const {
    return (_elCount);
}

/**
 * Print member function (utility)
 * Prints all the elements in the array
 */
template <typename T>
void    Array<T>::print(void) const {
    for (unsigned int i = 0; i < _elCount; i++) {
        std::cout << arr[i] << (i == _elCount - 1 ? "\n" : ", ");
    }
}
