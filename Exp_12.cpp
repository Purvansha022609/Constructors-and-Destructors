/* Name-Purvansha Gehlod
PRN-22070123088
Exp-12(Part-A)
Default constructor*/
#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;

    public:
    student()
    {
        cout<<"enter the rollno:";
        cin>>rollno;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the fee:";
        cin>>fee;
    }

void display()
{
    cout<<endl<<rollno<<"\n"<<name<<"\n"<<fee;
}
};
int main()
{
    student s;
    s.display();
    
}
/*
Output
enter the rollno:2022
enter the name:radha
enter the fee:55000

2022    radha   55000
*/