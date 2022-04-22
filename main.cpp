#include <iostream>
#include <vector>

#include "Pproduct.h"
#include "Fibonacci.h"
#include "Absolute.h"

int main(int argc, char *argv[])
{
    /* Code of exercise01
     *
    int tam;
    std::cout<<"Ingrese componentes a agregar: ";
    std::cin>>tam;
    std::cout<<"\n\n";
    std::vector<double> my_vector(tam);
    std::vector<double> my_vector2(tam);

    for(auto it = my_vector.begin() ; it != my_vector.end(); ++it)
    {
        *it  = (std::rand() % 1000 + 1)/10.0;
    }
    for(auto it = my_vector2.begin() ; it != my_vector2.end(); ++it)
    {
        *it  = (std::rand() % 1000 + 1)/10.0;
    }
    double product = test(my_vector,my_vector2);
     *
     */

    /* Code of exercise02
    auto fic = FibonacciConst(10);
    std::cout<<"Fibonacci of 10 is : "<<fic<<std::endl;
    */

    auto fi = Absolute<-50>::Result;
    std::cout<<"Absolute Value of -50 : "<<fi<<std::endl;
}

