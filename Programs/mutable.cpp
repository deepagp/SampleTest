#include <iostream>
using namespace std;

class square
{
	mutable int a;
	int b;
	public:
		square( int x, int y )
		{
			a = x;
			b = y;
		}
		void val() const
		{
			a = a * a;
		}
		void display() const
		{
			cout << "a : " << a << endl;
			cout << "b : " << b << endl;
		}
};

int main()
{
	const square s( 4, 7 );
	cout << "Values of a and b" << endl;
	s.display();
	s.val();
	cout << "New values of a and b" << endl;
	s.display();
	return 0;
}