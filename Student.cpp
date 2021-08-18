#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int pstudentid, char const pname[]) 
{
  studentid = pstudentid;
  strcpy(name,pname);
}

// Display StudentId and Name
void Student::display()
{ 
  cout<<"Student id:"<<studentid<<endl;
  cout<<"Student name:"<<name<<endl;
}
