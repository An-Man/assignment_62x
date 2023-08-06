#include "posint.h"
#include <limits>

void Posint::print_value() const
{
    std::cout << "Value of 'value' is: " << value << '\n';
}

Posint Posint::sum_of_two(const Posint& pos2)
{
    int64_t result {static_cast<int64_t>(value) + 
        static_cast<int64_t>(pos2.value)};

    if (result <= std::numeric_limits<int>::max()) {
        result = value + pos2.value;
    } else {
        result = 2147483647; // set at maximum if would overflow
    }

    Posint pos_new {static_cast<int>(result)};
    return pos_new;
}

Posint sum_friend(const Posint& pos1, const Posint& pos2)
{
    Posint new_pos;

    int64_t result {static_cast<int64_t>(pos1.value) + 
        static_cast<int64_t>(pos2.value)};

    if (result <= std::numeric_limits<int>::max()) {
        result = pos1.value + pos2.value;
    } else {
        result = 2147483647; // set at maximum if would overflow
    }

    new_pos.value = static_cast<int>(result);
    return new_pos;
}

Posint Posint::sum_of_two(const int& num)  // overload with int
{
    int64_t result {static_cast<int64_t>(value) + 
        static_cast<int64_t>(num)};

    if (result <= std::numeric_limits<int>::max()) {
        result = value + num;
    } else {
        result = 2147483647; // set at maximum if would overflow
    }

    Posint pos_new {static_cast<int>(result)};
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

Posint substract_friend(const Posint& pos1, const Posint& pos2)
{
    Posint new_pos;
    int sub_value {};

    if ((pos1.value - pos2.value) >= 0) {
        sub_value = pos1.value - pos2.value;
    } else {
        sub_value = 0; // minimum is 0
    }

    new_pos.value = sub_value;
    return new_pos;
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