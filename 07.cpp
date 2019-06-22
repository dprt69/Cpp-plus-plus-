//
//  07.cpp
//  06
//
//  Created by Dilpreet on 22/06/19.
//  Copyright © 2019 Dilpreet. All rights reserved.
//
// WAP to perform nested loop activity.
#include <iostream>
#include <vector>
using namespace std;
int main()
{   int i{0};
    int num[5];
    char ch='0';
    int large,small;
    //int v{};
    cout<<"Input the first 4 no.s : ";
    cin>>num[0];
    cin>>num[1];
    cin>>num[2];
    cin>>num[3];
    cout<<"You have stored these no.s : ";
    cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<" "<<num[3]<<endl;
 do{   
 cout<<"P-Print numbers\n";
    cout<<"A-Add a number\n";
    cout<<"M-Display mean of the number\n";
    cout<<"S-Display the smallest number\n";
    cout<<"L-Display the largest number\n";
    cout<<"Q-Quit\n";
    cout<<"--------------------------------\n";
    cout<<"Enter any initial mentioned above :- ";
    cin>>ch;
    {
        if (ch=='p'|| ch=='P') {
            cout<<"P-Print numbers : ";
            cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<" "<<num[3]<<" "<<"\n";
        }
        if(ch=='a'|| ch=='A'){
            cout<<"A-Add a number : ";
            cin>>num[4];
            cout<<num[4]<<endl;
            cout<<"Now the nos stored are : ";
            cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<" "<<num[3]<<" "<<num[4]<<" "<<endl;
        }
        if (ch=='m'||ch=='M') {
            cout<<"M-Display mean of the number : ";
            cout<<((num[0]+num[1]+num[2]+num[3])/4);
        }
        if (ch=='s'||ch=='S') {
            large=small=num[i];
            for (i=0; i<5; ++i) {
                if (small>num[i]) {
                    small=num[i];
                    cout<<"S-Display the smallest number : "<<small<<endl;
                }
            }
        }
        if (ch=='l'||ch=='L') {
            large=small=num[0];
            for (i=0; i<5; ++i) {
                if (large<num[i]) {
                    large=num[i];
                    cout<<"L-Display the largest number\n"<<large<<endl;
                }
            }
        }
    }
    
    while(ch=='q'|| ch=='Q'){
    cout<<"Unknown selection, please try again.\n";
    }
    return 0;
}
