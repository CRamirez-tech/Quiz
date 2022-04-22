
#ifndef ABSOLUTE_H
#define ABSOLUTE_H
template <auto Value>
struct Absolute
{
    enum {Result = (Value < 0) ? Value * -1 :Value};
};

#endif // ABSOLUTE_H
