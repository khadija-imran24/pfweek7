#include<iostream>
using namespace std;
int calculateGCD (int number1, int number2 );
int calculateLCM(int number1, int number2, int gcd);
main()
{
    int result1;
    int result2;
    int number1;
    int number2;
    int gcd;
    cout<<"enter 1 number:";
    cin>>number1;
    cout<<"enter 2 number:";
    cin>>number2;
    result1=calculateGCD(number1,number2);
    result2=calculateLCM(number1,number2,gcd);
}
  int calculateGCD (int number1, int number2 )
 { 
    int gcd;
    for(int n=1;n<=number1; n++)
    {
        if (number1%n==0&&number2%n==0)
        {
            gcd=n;
            
        }
    }
        
        return gcd;
    }
 
int calculateLCM(int number1, int number2, int gcd)
   {
    int lcm;
    int g;
    g=calculateGCD(number1,number2);
    lcm=(number1*number2)/g;
    cout<<lcm;
    return 0;
     }