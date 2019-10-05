//this is a program for array within the class and array of objects
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class student
{
 char name[25];
 int age,marks[5];
 int tot;
 float per;
 public:
 void input();
 void output();
 void calc();
};
 void student:: input()
 {
  cout<<"\nEnter the name=";
  gets(name);
  cout<<"\nEnter the age=";
  cin>>age;
  cout<<"\nEnter the marks in 5 subjects:";
  for(int i=0;i<5;i++)
   cin>>marks[i];
 }
 void student:: output()
 {
  cout<<"\nName="<<name<<"\nAge="<<age;
  cout<<"\nMarks in 5 subjects::";
  for(int i=0;i<5;i++)
  cout<<marks[i]<<"\t";
  calc();
 }
 void student:: calc()
 {     tot=0;
  for(int i=0;i<5;i++)
  {
   tot+=marks[i];
  }
  per=tot/5;
  cout<<"\nTOTAL MARKS="<<tot;
  cout<<"\nPercentage="<<per<<"%";
 }
int main()
{
 student s[2];
 int n;
  cout<<"\nEnter the number of students:";
  cin>>n;
   for(int i=0;i<n;i++)
   {
    cout<<"\nEnter the data of student "<<i+1;
    s[i].input();
   }
   cout<<"\nOUTPUT:\n";
   for(i=0;i<n;i++)
   {
    cout<<"\nData of student "<<i+1;
    s[i].output();
   }
   getch();
   return 0;
}
