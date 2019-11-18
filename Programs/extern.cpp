#include <iostream>
using namespace std;
int g;
void print(){
	 g = 10;
	 cout << "g is " << g << endl;
}
int main(){
	g = 7;
  	cout << "g is " << g << endl;
  	print();
	return 0;
}