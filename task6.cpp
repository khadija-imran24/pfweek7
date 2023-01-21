#include<iostream>
using namespace std;
int frequencyChecker (int number, int digit );
main()
{
    int result;
    int digit;
    int number;
    cout<<"enter a number:";
    cin>>number;
    cout<<"enter a number whose frequency you want to show:";
    cin>>digit;
    result= frequencyChecker(number,digit) ;
     cout<<"total digits are:"<<result;
}

 int frequencyChecker (int number, int digit )   
 {
    int result=0;
    int sum=0;
    while(number>0)
    {

        result= number%10;
        number=number/10;
        if (result==digit)
        {
            sum=sum+1;
        }
    }
    return sum;
     
 }