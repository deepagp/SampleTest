
/* sizeof,condition, cast, pointer operator */

#include <iostream>
using namespace std;
 
int main() {
   int x, y = 10;
   double a = 21.09399;
   float b = 10.20;
   int c ;
   int  var;
   int  *ptr;
   int  val;

   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    x = (y < 10) ? 30 : 40;
   cout << "value of x: " << x << endl;
    c = (int) a;
   cout << "Line 1 - Value of (int)a is :" << c << endl ;
   
   c = (int) b;
   cout << "Line 2 - Value of (int)b is  :" << c << endl ;
   var = 3000;

   // take the address of var
   ptr = &var;

   // take the value available at ptr
   val = *ptr;
   cout << "Value of var :" << var << endl;
   cout << "Value of ptr :" << ptr << endl;
   cout << "Value of val :" << val << endl;

   
   return 0;
}