#include<iostream>
using namespace std;
float sci()
{
char ch;
float total=0;
cout<<endl<<"1.what is the formula of water?";
cout<<endl<<"a.CH2CH"<<endl<<"b.H2O"<<endl<<"c.NH3"<<endl<<"d.NH20H";
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
    cout<<endl<<"2.when is litmus paper turns blue?";
    cout<<endl<<"a.alkali"<<endl<<"b.acid"<<endl<<"c.base"<<endl<<"d.salt";
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
    cout<<endl<<"3.at what temperature celcius and farenheit are equal?";
    cout<<endl<<"a.100"<<endl<<"b.0"<<endl<<"c.-50"<<endl<<"d.-40";
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
    cout<<endl<<"4.what is the biggest planet in our solar system?";
    cout<<endl<<"a.Earth"<<endl<<"b.Mars"<<endl<<"c.Jupiter"<<endl<<"d.Saturn";
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
    cout<<endl<<"5. In electronics,DC stand for?";
    cout<<endl<<"a.direct current"<<endl<<"b.directionl current"<<endl<<"c.direct copper"<<endl<<"d.directional copper";
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
    cout<<endl<<"6.how many teeth does adult human have?";
    cout<<endl<<"a.28"<<endl<<"b.29"<<endl<<"c.32"<<endl<<"d.31";
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
    return total;

}
