#include <iostream>
using namespace std;
static int g = 5;
void fn(){
 	static int i = 0;
 	cout << "g = \t" << g-- << endl;
 	cout << "i = \t" << i++ << endl;
}
int main(){
	while(g >= 2)
    fn();
	return 0;
}