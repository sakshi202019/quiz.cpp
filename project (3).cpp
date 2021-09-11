#include<iostream>
#include<fstream>
#include<string.h>
#include"computer.h"
#include"gk.h"
#include"science.h"
using namespace std;
class A
{
char name[40],type[50];
float score;
public:
void input()
{
cout<<"enter your name:";
cin>>name;
}
void writes(char ty[],float sc)
{
    fstream c;
    strcpy(type,ty);
    score=sc;
    c.open("gamescore.txt",ios::out);
    c.write((char*)this,sizeof(*this));
    c.close();

}
void scores()
{
    int ch;
    fstream c;
    while(ch!=3)
    {
        cout<<endl<<"1.all score";
        cout<<endl<<"2.category wise score";
        cout<<endl<<"enter your choice";
        cin>>ch;
        if(ch==1)
        {
        c.open("gamescore.txt",ios::in);
        cout<<"-----------------------Score Table---------------------\n";
        cout<<"Username\t\t\tCategory\t\t\tScore"<<endl;
        while(c.read((char*)this,sizeof(*this)))
        {
            cout<<endl<<this->name<<"\t\t\t\t"<<this->type<<"\t\t"<<this->score;
        }
    c.close();
        }
        else if(ch==2)
        {
           A::category();
        }
    }
}
void category()
{
    int ch;
    fstream obj,c;
    while(ch!=4)
    {
        cout<<endl<<"1.computer quiz";
        cout<<endl<<"2.gk quiz";
        cout<<endl<<"3.science quiz";
        cout<<endl<<"enter your choice";
        cin>>ch;
        if(ch==1)
        {
             c.open("gamescore.txt",ios::in);
    while(c.read((char*)this,sizeof(*this)))
    {
        if(strcmp(type,"computers"))
        {
        cout<<"Username="<<this->name<<endl;
        cout<<"category="<<this->type<<endl;
        cout<<"Score="<<this->score<<endl;
        }
    }
    c.close();
        }
        else if(ch==2)
        {
            c.open("gamescore.txt",ios::in);
    while(c.read((char*)this,sizeof(*this)))
    {
        if(strcmp(type,"gks"))
        {
        cout<<"Username="<<this->name<<endl;
        cout<<"category="<<this->type<<endl;
        cout<<"Score="<<this->score<<endl;
        }
    }
    c.close();
        }
        else if(ch==3)
        {
    c.open("gamescore.txt",ios::in);
    while(c.read((char*)this,sizeof(*this)))
    {
        if(strcmp(type,"science"))
        {
        cout<<"Username="<<this->name<<endl;
        cout<<"category="<<this->type<<endl;
        cout<<"Score="<<this->score<<endl;
        }
    }
    c.close();
        }

    }
}
void play()
{
    int ch;
    float l;
while(ch!=4)
{
cout<<endl<<"1.computer";
cout<<endl<<"2.general knowledge";
cout<<endl<<"3.science";
cout<<endl<<"4.Exit";
cout<<endl<<"which quiz you want to play";
cin>>ch;
if(ch==1)
{
    A::input();
   l=computers();
   A::writes("Computer",l);
}
else if(ch==2)
{
    A::input();
    l=gks();
    A::writes("general knowledge",l);
}
else if(ch==3)
{
    A::input();
    l=sci();
    A::writes("science",l);
}
}
}
};
int main()
{
A obj;
fstream ob;
int ch;
    while(ch!=3)
    {
    cout<<endl<<"1.play quiz";
    cout<<endl<<"2.show score";
    cout<<endl<<"enter your choice";
    cin>>ch;
    if(ch==1)
        {
           obj.play();
        }
        else if(ch==2)
        {
          obj. scores();
        }
    }

}
