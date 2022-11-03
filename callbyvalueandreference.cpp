#include <iostream>
using namespace std;
void swap(int x,int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"the value of x is "<<x<<" and y is "<<y<<endl;
}
void swapx(int *x,int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
	cout<<"the value of x is "<<*x<<" and y is "<<*y<<endl;
}
int main(){
	int a=10,b=20;
	cout<<"in main initially the value of a is "<<a<<" and b is "<<b<<endl;
	swap(a,b);
	cout<<"the value of a is "<<a<<" and b is "<<b<<endl;
	int d=20,e=30;
	cout<<"the value of d is "<<d<<" and e is "<<e<<endl;
	swapx(&d,&e);
	cout<<"the value of d is "<<d<<" and e is "<<e<<endl;
return 0;
}
