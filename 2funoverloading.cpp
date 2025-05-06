#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    int age;
    char name[20];
    float marks;
};
int printDetail(struct student);
struct student input();
int main()
{
    struct student s = {15,"Beauty",80.5};
    struct student s2= {18,"Aman",80};
    cout<<"Enter Age Name and Marks";
    struct student s3;
    cin>>s3.age;
    cin.ignore();
    cin.getline(s3.name,20);
    cin>>s3.marks;
    struct student s4,s5;
    s4 = input();
    s5 = input();
    printDetail(s);
  printDetail(s2);
  printDetail(s3);
  printDetail(s4);
  printDetail(s5);
return 0;
}
int printDetail(struct student x)
{ 
    cout<<"Age="<<" "<<x.age<<"Name="<<" "<<x.name<<"Marks="<<" "<<x.marks<<endl;
    
}
struct student input()
{
    struct student y;
    cout<<"Enter Age ,Name and Marks";
    cin>>y.age;
    cin.ignore();
    cin.getline(y.name,20);
    cin>>y.marks;
    return y;
}