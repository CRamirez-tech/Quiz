#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
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
}
