#include "Array.hpp"

class   Complex {
    public:
        Complex() { val = 10; };
        int     getVal() const { return (val); };
        void    setVal(int newVal) { val = newVal; };
    private:
        int     val;
};

std::ostream&   operator<<(std::ostream& output, const Complex& val) {
    output << val.getVal();
    return (output);
}

int main() {
    // {
    //     // Deep copy testing
    //     Array<int> tab(5);
    //     const Array<int> tabCopy = tab;

    //     std::cout << "Original int tab: "; tab.print();
    //     std::cout << "Copied int tab: "; tabCopy.print();
    //     tab[1] = 10;
    //     std::cout << "Original int tab: "; tab.print();
    //     std::cout << "Copied int tab: "; tabCopy.print();
    // }

    {
        // Custom type testing
        Array<Complex> tab(4);

        tab.print();
        tab[0].setVal(9);
        tab.print();
        for (unsigned int i = 0; i < tab.size(); i++) {
            tab[i].setVal(tab[i].getVal() + i);
        }
        tab.print();
        try {
            std::cout << tab[10] << std::endl;;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
            std::cerr << "There are only " << tab.size() << " elements in your array. (Array is zero-indexed)" << std::endl;
        }
    }
    
    return (0);
}