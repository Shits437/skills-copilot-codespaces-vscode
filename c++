#include<iostream>
using namespace std;
int main ()
char name[10]
int marks;{
    cout<<"enter name:\n";
    cin>>name;
    cout<<"enter marks:\n";
    cin>>marks;
    if(marks=>90)
    cout<<"grade A";
    else if(marks=>80 && marks<89)
    cout<<"grade B";
    else if(marks=>70 && marks<79)
    cout<<"grade C";
    else if(marks=>60 && marks <69)
    cout<<"grade D";
    else if(marks=>50 && marks 59)
    cout<<"grade E";
    else
    cout<<"grade F";
    return 0;

}
