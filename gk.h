#include<iostream>
using namespace std;
float gks()
{
    char ch;
    float total=0;
    cout<<endl<<"1. Garba dance is famous in which state?";
    cout<<endl<<"a.punjab"<<endl<<"b.maharasthtra"<<endl<<"c.rajasthan"<<endl<<"d.gujrat";
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
    cout<<endl<<"2.what is the capital of india?";
    cout<<endl<<"a.newdelhi"<<endl<<"b.kolkata"<<endl<<"c.punjab"<<endl<<"d.rajasthan";
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
    cout<<endl<<"3.what is national flower of india?";
    cout<<endl<<"a.sunflower"<<endl<<"b.lily"<<endl<<"c.lotus"<<endl<<"d.rose";
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
    cout<<endl<<"4.when jallianwala bagh massacre happened?";
    cout<<endl<<"a.1998"<<endl<<"b.1991"<<endl<<"c.1997"<<endl<<"d.1990";
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
    cout<<endl<<"5.diwali festival famous in which city in punjab?";
    cout<<endl<<"a.hoshiarpur"<<endl<<"b.pathankot"<<endl<<"c.amritsar"<<endl<<"d.jalandhar";
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
    cout<<endl<<"6.covid-19 started in which month in india?";
    cout<<endl<<"a.january"<<endl<<"b.november"<<endl<<"c.december"<<endl<<"d.march";
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
