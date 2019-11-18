# include<iostream.h>
class Marks

{

int rno;

int sub1,sub2;

public:

void read-marks()

{

cout<<”\n Input Two subjects”;

cin>>sub1>>sub2;

}

void compare(Marks s)

{

if (sub1 ==s,sub1&& sub2==s.sub2)

cout<<”\n Marks are not equal”;

}

};

void Main()

{

Marks stud1,stud2;

stud2.read-marks();

stud1.compare(stud2);

}