#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
    int age,present_year,birth_year;
    cout<<"Enter the year you were born and the present year "<<endl;
    cin>>birth_year>>present_year;
    age = present_year - birth_year;
    cout<<"your age is "<<age<<endl;
    if(age>=18)
    {
        cout<<"your are eligible to vote"<<endl;
    }
    else
    {
        cout<<"you are not eligible to vote"<<endl;
    }
    return 0;
}
    