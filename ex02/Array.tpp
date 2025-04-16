/**
 * Default constructor
 * Creates an empty array
 */
template <typename T>
Array<T>::Array(void) {
    std::cout << "Constructor for Array called!" << std::endl;

    size = 0;
    arr = new T[0];
}

/**
 * Parameterized constructor
 * Creates an array of `elCount` elements initialized by default
 */
template <typename T>
Array<T>::Array(unsigned int elCount) {
    arr = new T[elCount];
    size = elCount;

    std::cout << "Constructor for Array (with element count) called!"
        << std::endl;
}

/**
 * Copy constructor
 * Creates a copy of the provided array without modifying the original 
 */
template <typename T>
Array<T>::Array(const Array& copy) { 
    (void) copy;
    std::cout << "Copy constructor called!"
        << std::endl;
}

/**
 * Copy assignment operator
 * Creates a copy of the provided array without modifying the original
 */
template <typename T>
Array<T>&  Array<T>::operator=(const Array& copy) { 
    (void) copy;
    std::cout << "Copy constructor called!"
        << std::endl;
    return (*this);
}

/**
 * Subscript operator
 * Allows users to access elements of the array with the provided index
 */
template <typename T>
T&  Array<T>::operator[](int index) {
    if (index < 0 || static_cast<unsigned int>(index) == size)
        throw std::exception();

    return (arr[index]);
}

/**
 * Destructor
 * Destroys the array
 */
template <typename T>
Array<T>::~Array(void) { 
    delete [] arr;
    std::cout << "Destructor for Array called!"
        << std::endl;
}
