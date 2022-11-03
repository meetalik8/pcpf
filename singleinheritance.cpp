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
	void show(){
		cout<<"A regular polygon has "<<nside<<" sides of length "<<lside<<endl;
	}
};
class square:public regpoly{
	private: 
	    int area;
	public:
		square(int l){
			lside=l;
		}
		void show(){
			cout<<"A square has 4 sides of length "<<lside<<endl;
		}
		void calcarea(){
			area=lside*lside;
		}
		void showarea(){
			cout<<"The area of the square is "<<area<<endl;
		}
};
int main(){
	regpoly r(4,3);
	r.show();
	square s(3);
	s.show();
	s.calcarea();
	s.showarea();
	return 0;
}
