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
		cout<<"\nA regular polygon has "<<nside<<" sides of length "<<lside<<endl;
	}
	~regpoly(){
		cout<<"\nDestructor is called"<<endl;
	}
};
int main(){
	regpoly r(4,6);
	r.show();
	r.regpoly::~regpoly();
}
