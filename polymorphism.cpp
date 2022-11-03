#include <iostream>
using namespace std;
class Calc{
	public:
	Calc(){}
	int Add(int a,int b){
		return (a+b);
	}
	int Add(int a,int b, int c){
		return (a+b+c);
	}
};
int main(){
	Calc a;
	cout<<"Addition of 10 and 20 is "<<a.Add(10,20)<<endl;
	cout<<"Addition of 10 and 20 and 30 is "<<a.Add(10,20,30)<<endl;
	return 0;
}
