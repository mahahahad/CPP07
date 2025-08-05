#include <string>
#include "whatever.hpp"

/*
class Garbage { };

std::ostream&   operator<<(std::ostream& output, Garbage asd) {
    (void) asd, (void) output;
    return (output);
}
*/

/*
class NonGarbage {
    public:
        NonGarbage() { impVal = 42; }
        NonGarbage(int _impVal) { impVal = _impVal; }

        bool    operator==(const NonGarbage& cls2) const { return (this->impVal == cls2.getImpVal()); };
        bool    operator!=(const NonGarbage& cls2) const { return (this->impVal != cls2.getImpVal()); };
        bool    operator<(const NonGarbage& cls2) const { return (this->impVal < cls2.getImpVal()); };
        bool    operator>(const NonGarbage& cls2) const { return (this->impVal > cls2.getImpVal()); };
        bool    operator<=(const NonGarbage& cls2) const { return (this->impVal <= cls2.getImpVal()); };
        bool    operator>=(const NonGarbage& cls2) const { return (this->impVal >= cls2.getImpVal()); };

        int     getImpVal() const { return (this->impVal); };

    private:
        int impVal;
};

std::ostream&   operator<<(std::ostream& output, const NonGarbage& cls) {
    output << cls.getImpVal();
    return (output);
}
*/

int main() {
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    {
        /*
        Garbage s1;
        Garbage s2;
        std::cout << "min( s1, s2 ) = " << ::min(s1, s2) << std::endl;
        */
    }
    
    {
        /*
        NonGarbage cls1(-42);
        NonGarbage cls2(1);

        std::cout << "cls1 = " << cls1 << ", cls2 = " << cls2 << std::endl;
        std::cout << "max( cls1, cls2 ) = " << ::max(cls1, cls2) << std::endl;
        std::cout << "min( cls1, cls2 ) = " << ::min(cls1, cls2) << std::endl;
        */
    }

    return 0;
}
