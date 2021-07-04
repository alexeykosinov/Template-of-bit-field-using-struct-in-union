#include <iostream>

typedef union Reg{

    struct {
        bool bit_0 : 1;
        bool bit_1 : 1;
        bool bit_2 : 1;
        bool bit_3 : 1;
        bool bit_4 : 1;
        bool bit_5 : 1;
        bool bit_6 : 1;
        bool bit_7 : 1;
    } reg_bit;

    char reg_byte : 8;
};


int main() {

    Reg r;

    r.reg_byte = 0xAA;
 
    std::cout << "bit 0: " << r.reg_bit.bit_0 << std::endl;
    std::cout << "bit 1: " << r.reg_bit.bit_1 << std::endl;
    std::cout << "bit 2: " << r.reg_bit.bit_2 << std::endl;
    std::cout << "bit 3: " << r.reg_bit.bit_3 << std::endl;
    std::cout << "bit 4: " << r.reg_bit.bit_4 << std::endl;
    std::cout << "bit 5: " << r.reg_bit.bit_5 << std::endl;
    std::cout << "bit 6: " << r.reg_bit.bit_6 << std::endl;
    std::cout << "bit 7: " << r.reg_bit.bit_7 << std::endl;

    return 0;
}