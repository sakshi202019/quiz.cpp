#include<iostream>
using namespace std;
float computers()
{
    char ch;
    float total=0;
    cout<<endl<<"1.who is the founder of computer?";
    cout<<endl<<"a.dennis ritchie"<<endl<<"b.balaguruswamy"<<endl<<"c.charles babbage"<<endl<<"d.bjarne stroustrup";
    cout<<endl<<"enter your answer";
    cin>>ch;
    if(ch=='c')
    {
      total=total+1;
    }
    else
    {
        total=total-0.5;
    }
    cout<<endl<<"2.what is the latest window of computer?";
    cout<<endl<<"a.window 7"<<endl<<"b. window 8"<<endl<<"c.window 9"<<endl<<"d.window 10";
    cout<<endl<<"enter your answer";
    cin>>ch;
    if(ch=='d')
    {
        total=total+1;
    }
    else
    {
        total=total-0.5;
    }
    cout<<endl<<"3.what is the full form of RAM?";
    cout<<endl<<"a.random access memory"<<endl<<"b.read access memory"<<endl<<"c.rate access memory"<<endl<<"d.repeat acess memory";
    cout<<endl<<"enter your answer";
    cin>>ch;
    if(ch=='a')
    {
        total=total+1;
    }
    else
    {
        total=total-0.5;
    }
    cout<<endl<<"4. what is the full form of HTML?";
    cout<<endl<<"a. hypertext makeup language"<<endl<<"b.hypertext markup language"<<endl<<"c.hypertest markup language"<<endl<<"d.hypertest makeup language";
    cout<<endl<<"enter your answer";
    cin>>ch;
    if(ch=='b')
    {
        total=total+1;
    }
    else
    {
        total=total-0.5;
    }
    cout<<endl<<"5. who is the founder of C language?";
    cout<<endl<<"a.dennis ritchie"<<endl<<"b.balaguruswamy"<<endl<<"c.charles babbage"<<endl<<"d.bjarne stroustrup";
    cout<<endl<<"enter your answer";
    cin>>ch;
    if(ch=='a')
    {
        total=total+1;
    }
    else
    {
        total=total-0.5;
    }
    cout<<endl<<"6.who is the founder of C++ language?";
    cout<<endl<<"a.dennis ritchie"<<endl<<"b.balaguruswamy"<<endl<<"c.charles babbage"<<endl<<"d.bjarne stroustrup";
    cout<<endl<<"enter your answer";
    cin>>ch;
    if(ch=='d')
    {
        total=total+1;
    }
    else
    {
        total=total-0.5;
    }
return total;
}
