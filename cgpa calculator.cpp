#include<iostream>
using namespace std;

int main()
{

    int noc;
    cout<<"Enter number of courses: ";
    cin>>noc;
    cout<<endl;
    string grade;
    float ch;
    float point;
    float tc=0,tp=0;
    string name;

    for(int i=1; i<=noc; i++)
    {
        cout<<"Course Name: ";
        cin>>name;

        cout<<"Enter grade: ";
        cin>>grade;

        if(grade=="A+")
        {
            point=4.00;
        }
        else if(grade=="A")
        {
            point=3.75;
        }
        else if(grade=="A-")
        {
            point=3.50;
        }
        else if(grade=="B+")
        {
            point=3.25;
        }
        else if(grade=="B")
        {
            point=3.00;
        }
        else if(grade=="B-")
        {
            point=2.75;
        }
        else if(grade=="C+")
        {
            point=2.50;
        }
        else if(grade=="C")
        {
            point=2.25;
        }
        else if(grade=="D")
        {
            point=2.00;
        }
        else if(grade=="F")
        {
            point=0.00;
        }
        else
        {
            cout << "Invalid grade! Try again."<<endl<<endl;;
            i--;
            continue;
        }

        cout<<"Enter credit hours: ";
        cin>>ch;
        tc+=ch;
        tp+=point*ch;
        cout<<"Grade: "<<grade<<", Credit: "<<ch<<endl<<endl;
    }
    cout<<endl;
    cout<<"Total Credits: "<<tc<<endl;
    cout<<"Final CGPA: "<<tp/tc<<endl;

    return 0;
}
