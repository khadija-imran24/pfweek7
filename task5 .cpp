#include<iostream>
using namespace std;
int totalDigit (int number );
main()
{
    int result;
    int number;
    cout<<"enter a number:";
    cin>>number;
    result= totalDigit (number) ;
     cout<<"total digits are:"<<result;
}

 int  totalDigit(int number)   
 {
    int result=0;
    
   
    while(number>0)
    {

        result= result+1; 
        number=number/10;
    }
    return result;
     
 }