
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();

	typedef int integer;
	/* now you can easily use integer to create
	 * variables of type int like this */
	integer num1, num2, sum;
	cout<<"Enter two number: ";
	cin>>num1>>num2;
	sum=num1+num2;
	cout<<"Sum = "<<sum;

	getch();
}