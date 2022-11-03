#include <iostream>
using namespace std;
class regpoly{
	private:
		int nside;
	protected:
		int lside;
	public:
	regpoly(){};
	regpoly(int n,int l){
		nside=n;
		lside=l;
	}
	virtual void show(){
		cout<<"\nA regular polygon has "<<nside<<" sides of length "<<lside<<endl;
	}
};
class square:public regpoly{
	public:
		square(int l){
			lside=l;
		}
		void show(){
			cout<<"\nA square has 4 sides of length "<<lside<<endl;
		}
};
class equitri:public regpoly{
	public:
		equitri(int l){
			lside=l;
		}
		void show(){
			cout<<"\nA equilateral triangle has 3 sides of length "<<lside<<endl;
		}
};
int main(){
	regpoly *s,*e;
	s=new square(5);
	s->show();
	e= new equitri(3);
	e->show();
	return 0;
}
