//
//  main.cpp
//  Vector
//
//  Created by Admin Gowda on 4/12/17.
//  Copyright © 2017 Admin Gowda. All rights reserved.
//

#include<iostream>
#include "Vector.h"
int main()
{
    vectorClass<int> v;
    int i = 0;
    
    while (i != 10)
    {
        v.pushback(i);
        i++;
    }
    
    v.print();
    
    v.insert_atposition_value(0, 99);
    std::cout << std::endl;
    std::cout << v.operator[](0);
    std::cout << std::endl;
    v.print();
    return 0;
    
}
