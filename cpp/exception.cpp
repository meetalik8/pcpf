#include <iostream>
using namespace std;

int main()
{
	int a=10,b=0;
   try {
  if (b > 0) {
    cout << "\n Division is possible, it is "<<a/b<<endl;
  } else {
    throw (b);
  }
 }
   catch (int deno) {
  cout << "Division Not Possible because Division by\n";
  cout<< deno<<endl;
  }
}
