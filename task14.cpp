#include<iostream>
using namespace std;
float calculateMoney (int age,float price,int toy);
main()
{
       int age;
       float price;
       int toy;
       cout<<"enter your age:";
       cin>>age;
       cout<<"enter price of washing machine:";
       cin>>price;
       cout<<"enter price of a toy:";
       cin>>toy;
       calculateMoney (age,price,toy);
}
float calculateMoney (int age,float price,int toy)
      {
        float total;
        float sum1=0.00;
        float sum2=0.00;
       for (int count=1;count<=age;count=count+1)
    {
        if(count%2==0)
        {
        
           sum1=sum1+(5*count);
           sum1=sum1-1;
           
           
        }
        else
        {
            sum2=sum2+1;
        }
    }
        sum2=sum2*toy;
        total=sum1+sum2;
        if(total>=price)
        {
            total=total-price;
            cout<<"yes!"<<endl<<total;
        
        }
        else
        {   total=price-total;
            cout<<"No!"<<endl<<total;
        }
        return 0;
      }