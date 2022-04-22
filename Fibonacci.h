#ifndef FIBONACCI_H
#define FIBONACCI_H


constexpr unsigned FibonacciConst(unsigned value)
{
    if(value == 1)
    {
        return 1;
    }
    while(value == 0)
    {
        return 0;
    }
    return FibonacciConst(value-1) + FibonacciConst(value-2);

}

#endif // FIBONACCI_H
