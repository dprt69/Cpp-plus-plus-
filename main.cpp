//
//  main.cpp
//  06
//
//  Created by Dilpreet on 12/06/19.
//  Copyright © 2019 Dilpreet. All rights reserved.
//
// Use of mixed expresstion and conversion.

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    double avg;
    cout<<"Enter 3 integers :- ";
    cin>>a>>b>>c;
    sum= a+b+c;
    avg= (static_cast<double>(sum)/3);
    cout <<"You entered "<<a;
    cout<<", "<<b;
    cout<<", "<<c;
    cout<<"\nThe sum of the three numbers :- "<<sum<<endl;
    cout <<"Average of nums. :- "<<avg<<endl;
    return 0;
}
// bool statements.
#include<iostream>
int main()
{ using  namespace  std;
    float a{},b{};
    
    bool cout_equal,cout_unequal;
    
    cout<< boolalpha;
    
    cout<<"enter two numbers :- "<<endl;
    cin>> a >> b;
    cout_equal = (a==b);
    cout_unequal = (a!=b);
    cout<<"Given no.s are equal :- "<<cout_equal<<endl;
    cout<<"Given no.s are unequal :- "<<cout_unequal<<endl;
    return 0;
}
// wap to convert entered amount of cents into us-dollars,cents,dime,nickel and penny.
#include <iostream>
int main()
{
    using namespace std;
    int e,usD,q,d,n,p;
    cout<<"Enter the amount of cents = ";
    cin>>e;
    // const  int e = 92;
    cout<<"Your amount can be converted into :- \n";
    if (e>=100||e>=25||e>=10||e>=5||e>=1) {
        usD =(e/100|0);
        q = (((e%100)/25)|0);
        d =(((e%100)%25)/10|0);
        n = ((((e%100)%25)%10)/5|0);
        p = (((((e%100)%25)%10)%5)/1|0);
        cout<<"Dollars : "<<usD<<endl;
        cout<<"Quarters : "<<q <<endl;
        cout<<"Dime : "<< d<<endl;
        cout<<"Nickel : "<< n<<endl;
        cout<<"Penny : "<< p<<endl;
    }
    return 0;
}
// Shipping cost calculator.Cond- all the three dimen. shd be less than or equal to 10in.
#include <iostream>
int main()
{   using namespace std;
    float vol,l,b,h;
    float pr;
    cout<<"Enter the dimensions of the package(inch) - \n";
    cout<<"Length = ";
    cin>>l;
    cout<<"Breadth = ";
    cin>>b;
    cout<<"Height = ";
    cin>>h;
    vol=(l*b*h);
    if ((l<=10.00)&&(b<=10.00)&&(h<=10.00)){
        if(vol<100){
            vol=(l*b*h);
            pr=(2.50*vol);
            cout<<"The cost of shipping your package = $"<<pr<<endl;
        }
        
        if ((vol>=100.00)&&(vol<500.00)){
            vol=(l*b*h);
            pr=(2.50*vol);
            cout<<"The cost of shipping your package = $"<<pr<<endl;
            cout<<"10% charge = $"<<((10.00/100.00)*pr)<<endl;
            cout<<"----------------------------------------------\n";
            cout<<"Total amount = $"<<(((10.00/100.00)*pr)+pr)<<endl;
            cout<<"----------------------------------------------\n";
        }
        if (vol>=500.00){
            vol=(l*b*h);
            pr=(2.50*vol);
            cout<<"The cost of shipping your package = $"<<pr<<endl;
            cout<<"25% charge = $"<<((25.00/100.00)*pr)<<endl;
            cout<<"----------------------------------------------\n";
            cout<<"Total amount = $"<<(((25.00/100.00)*pr)+pr)<<endl;
            cout<<"----------------------------------------------\n";
        }
    }
    else
    cout<<"Sorry, the package can not be delivered. \n";
    
        return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int i;
   int sum {0};
    //int sum {1};
    for (i=1;i<=15;++i){
        //cout<<i<<endl;
        if ( i%2 != 0){
            //i=sum;
            sum+=i;
            cout<<sum<<"\n";
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int a,b;
    for(a=1;a<=100; ++a){
        for (b=1; b<=100; ++b) {
            cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        } cout<<"----------------\n";
    } cout<<"------------------------------\n";
  return 0;
}
// WAP to print all odd numbers between 1 to 100.
#include <iostream>
using namespace std;
int main()
{  int i;
    for (i=1;i<=100;++i){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }cout<<"---------------------\n";
    return 0;
}

