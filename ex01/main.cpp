#include "iter.hpp"

class   Type {
    public:
        Type() { impVal = 42; };
        void    setImpVal( int newVal ) { impVal = newVal; };
        int     getImpVal() const { return (this->impVal); };
    
    private:
        int impVal;
};

std::ostream&   operator<<(std::ostream& output, const Type& val) {
    output << val.getImpVal();
    return (output);
}

template <typename T>
void print(const T& x) {
    std::cout << x << std::endl;
    return;
}

void    increment(int& x) {
    x += 1;
}

int main() {
    int test[] = {0, 1, 2, 3};
    Type    test2[4]; 

    iter(test, 4, increment);
    iter(test, 4, print);
    iter(test2, 4, print);
    return (0);
}
