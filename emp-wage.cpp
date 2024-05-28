#include<iostream>
#include<windows.h>
using namespace std;
#define stop Sleep(200);
class employee
{
    public:
    int age;
    char name[30];
    float wage;
    char occ_type;
    void virtual display()=0;
    int virtual compute_pay()=0;
};
class wageEmployee:public employee
{
    int hours_month;
    public:
    int compute_pay()
    {
        cout<<"\n Enter the name of employee : ";
        cin>>name;
        cout<<"\n Enter the age of employee : ";
        cin>>age;
        cout<<"\n Enter the hours upto which "<<name<<" have worked this month : ";
        cin>>hours_month;
        wage=hours_month*50;
    }
    void display()
    {
        cout<<"\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
        cout<<"\n \n \n The name of employee is : "<<name<<"\n \n The age of employee is : "<<age<<"\n \n Earning of this month is : Rs."<<wage<<"\n \n";
        cout<<"\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
    }
};
class regularEmployee:public employee
{
    public:
    int compute_pay()
    {
        cout<<"\n Enter the name of employee : ";
        cin>>name;
        cout<<"\n Enter the age of employee : ";
        cin>>age;
        wage=30000;
    }
    void display()
    {
        cout<<"\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
        cout<<"\n \n \n The name of employee is : "<<name<<"\n \n The age of employee is : "<<age<<"\n \n Earning of this month is : Rs."<<wage<<"\n \n";
        cout<<"\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
    }
};
class outsrcEmployee:public employee
{
    int work_days;
    public:
    int compute_pay()
    {
        cout<<"\n Enter the name of employee : ";
        cin>>name;
        cout<<"\n Enter the age of employee : ";
        cin>>age;
        cout<<"\n Enter the hours upto which "<<name<<" have worked this month : ";
        cin>>work_days;
        wage=work_days*400;
    }
    void display()
    {
        cout<<"\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
        cout<<"\n \n \n The name of employee is : "<<name<<"\n \n The age of employee is : "<<age<<"\n \n Earning of this month is : Rs."<<wage<<"\n \n";
        cout<<"\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n";
    }
};
void animate()
{
    cout<<"\n .";
    stop;
    cout<<"\n .";
    stop;
    cout<<"\n .";
    stop;
    cout<<"\n .";
    stop;
    cout<<"\n .";
    stop;
    cout<<"\n .";
    stop;
}


void logo()
{
    cout<<"\n ----------------------------------------------------------------------------------------------------------------------";
    Sleep(200);
    cout<<"\n - **************    **************    **************      **********        ****      ****     **    ************    -       ";
    Sleep(200);
    cout<<"\n - ****       ***    ****      ****    **************    **************      ****      ****     **    *************   -       ";
    Sleep(200);
    cout<<"\n - ****       ***    ****      ****         ****         ****                ****      ****     *     ****      ****  -       ";
    Sleep(200);
    cout<<"\n - **************    **************         ****         ****                **************           ****      ****  -       ";
    Sleep(200);
    cout<<"\n - ****              **************         ****         ****                ****      ****           ****      ****  -       ";
    Sleep(200);
    cout<<"\n - ****              ****      ****         ****         **************      ****      ****           *************   -       ";
    Sleep(200);
    cout<<"\n - ****              ****      ****         ****           **********        ****      ****           ************    -       ";
    Sleep(200);
    cout<<"\n ----------------------------------------------------------------------------------------------------------------------\n";
}



int main()
{
    //logo/watermark
    logo();
    int n;
    cout<<"\n \n \n \n \n  WELCOME TO THE ENTRY PANEL/WAGE CALCULATOR OF PATCH'D ORGANIZATION :\n";
    Sleep(1000);
    wageEmployee w1;
    regularEmployee r1;
    outsrcEmployee o1;
    employee *e[3];
    e[0]=&w1;
    e[1]=&r1;
    e[2]=&o1;
    while(n)
    {
        int num;
        cout<<"\n Choose whether the person is a --- ";
        cout<<"\n 1. Daily wage employee. ";
        cout<<"\n 2. Regular employee. ";
        cout<<"\n 3. Outsource employee. ";
        cout<<"\n 4. Exit. ";
        animate();
        cout<<"\n Enter your choice : ";
        cin>>num;

        switch(num)
        {
            case 1:
            e[0]->compute_pay();
            animate();
            e[0]->display();
            break;

            case 2:
            e[1]->compute_pay();
            animate();
            e[1]->display();
            break;

            case 3:
            e[2]->compute_pay();
            animate();
            e[2]->display();
            break;

            case 4:
            logo();
            animate();

            cout<<"\n THANKS FOR USING THE PATCH'D ORGANIZATION'S ENTRY PANEL/WAGE CALCULATOR.";
            return 0;

            default:
            animate();
            cout<<"\n Choose the options among the given choices.";
            break;
        }
    }
    return 0;
}