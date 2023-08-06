#include "posint.h"

void Posint::print_value() const
{
    std::cout << "Value of 'value' is: " << value << '\n';
}

Posint Posint::sum_of_two(const Posint& pos2)
{
    int added_value {};
    
    if ((value + pos2.value) >= 0) { // if it has not overflown
        added_value = value + pos2.value;
    } else {
        added_value = 2147483647; // set at maximum if overflow
    }

    Posint pos_new {added_value};
    return pos_new;
}

Posint Posint::sum_of_two(const int& num)  // overload with int
{
    int added_value {};
    
    if ((value + num) >= 0) { // if it has not overflown
        added_value = value + num;
    } else {
        added_value = 2147483647; // set at maximum if overflow
    }

    Posint pos_new {added_value};
    return pos_new;
}

Posint Posint::substract(const Posint& pos2)
{
    int sub_value {};

    if ((value - pos2.value) >= 0) {
        sub_value = value - pos2.value;
    } else {
        sub_value = 0; // minimum is 0
    }

    Posint pos_new {sub_value};
    return pos_new;
}

Posint Posint::substract(const int& num)
{
    int sub_value {};

    if ((value - num) >= 0) {
        sub_value = value - num;
    } else {
        sub_value = 0; // minimum is 0
    }

    Posint pos_new {sub_value};
    return pos_new;
}