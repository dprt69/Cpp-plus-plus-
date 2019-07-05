//
//  main.cpp
//  Functions
//
//  Created by Dilpreet on 05/07/19.
//  Copyright © 2019 Dilpreet. All rights reserved.
//


#include <iostream>
#include <cmath>
using namespace std;
void hello_fun () {
    cout << "Hello !" <<endl;
    cout<<"---------------------------------"<<endl;
}
void area_circ(){
    double area_c{};
    double radius {};
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    area_c = (3.14*(pow(radius,2.0)));
    cout<<"Area of the circle: "<<area_c<<endl;
    cout<<"-----------------------------------\n";
}
void area_cyl(){
    double rad{};
    double area_cy{};
    double h_t;
    cout<<"Enter the radius of cylinder: ";
    cin>>rad;
    cout<<"Enter the height of cylinder: ";
    cin>>h_t;
    area_cy = (3.14*(pow(rad, 2.0))*(h_t));
    cout<<"Area of the cylinder: "<<area_cy<<endl;;
}
int main ()
{
    hello_fun();
    area_circ();
    area_cyl();
    return 0;
}
