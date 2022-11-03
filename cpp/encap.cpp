#include <iostream>
class regpoly { 
    private: int nsides; 
protected: int lside; 
public: regpoly(int n, int l)  // Declaration and Definition of Parameterised constructor
{ 
    nsides = n; lside = l;
    } void show() // Declaration and Definition of method 
    {
        std::cout << "The regular polygon has " <<nsides<<" sides of length " <<lside<<" units" << std::endl;
        }
        }; 
        int main() {
            regpoly r(5,6); 
            r.show(); 
            return 0; 
            
        } 
