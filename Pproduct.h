#ifndef PPRODUCT_H
#define PPRODUCT_H

#include <vector>
#include <iostream>

using vector = std::vector<double>;

double test(const vector vec1,const vector vec2){
    if(vec1.size()!=vec2.size()){
        return -1;
    }
    double rad;
    std::cout<<"Index \t First \t Second \t Result"<<std::endl;
    for(int i=0;i<vec1.size();i++)
    {
        rad += vec1[i] * vec2[i];
        std::cout<<i<<" \t "<<vec1[i]<<" \t "<<vec2[i]<<" \t "<<rad<<std::endl;
    }
    std::cout<<"El producto punto es: "<< rad << std::endl;
    return rad;
}

#endif // PPRODUCT_H
