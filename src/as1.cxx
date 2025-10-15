#include "as1.hpp"

namespace homework {
//as 1.1
void swap_ptr(int* a, int* b, int *c) { 
    int init_a_val = *a;
    *a = *b; // value that a points to is changed to value that b points to
    *b = *c;
    *c = init_a_val;
}
// as 1.2
UniqueData::UniqueData(int value) : data_(std::make_unique<int>(value)) {} // data_ is the unique pointer

int UniqueData::get() const {
    return *data_; // * means value stored at adress that data_ points to
}

void UniqueData::set(int value) {
*data_ = value; //value that data_ points to is changed to new value. Address/pointer does not change. 
}
}; // namespace homework
