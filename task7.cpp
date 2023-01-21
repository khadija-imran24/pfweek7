#include<iostream>
using namespace std;
int digitSum (int number);
main()
{
    int result;
    int number;
    
    cout<<"enter a number:";
    cin>>number;
    result= digitSum (number) ;  
}

 int  digitSum (int number)  
 {
    int result;
    int sum=0;
    while(number>0)
    {
        result=number%10;
        sum= result+sum; 
        number=number/10;
    }
    cout<<"sum is:"<<sum;
    return 0;
     
 }