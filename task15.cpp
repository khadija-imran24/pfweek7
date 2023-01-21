#include<iostream>
using namespace std;
float calculatePrice (float money,int year);
main()
{
       int year;
       float money;
       cout<<"enter year:";
       cin>>year;
       cout<<"enter  inheritance money";
       cin>>money;
       calculatePrice ( money, year);
}
float calculatePrice (float money,int year)
      {
        int i;
        float result=0;
        i=year%10;
        float total1=0;
        float total2=0;
        float total;
       for(int count=0;count<=i;count++)
        {
          
            if(year%2==0)
            {
                total1=total1+12000;
                
            }
            else if(year%2!=0)
            {
                total2=total2+(12000+(50*(count+18)));
            }
            
           year=year-1;

        }
            total=total1+total2;
        if(money>=total)
        {    
            result=money-total;
            cout<<"yes!He will live a carefree life and will have"<<result<<"dollars left";
        }
        else
        {
            result=total-money;
            cout<<"He will need"<<result<<"dollars to survive";
        }


        }
      

        