#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a,b,c,F;
	int x,xst,xfn,dX,ac,bc,cc;

	cout<<"a, b, c="<<endl;
	cin>>a>>b>>c;
	cout<<"xst, xfn, dX="<<endl;
	cin>>xst>>xfn>>dx;

	x=xst;
	ac=floor(a);
	bc=floor(b);
	cc=floor(c);
	while (x<=xfn){
		if (x+5<0 && c==0){
			F=1/(a*x)-b;
		}
		else if (x+5>0 && c!=0){
			F=(x-a)/x;
		}
		else {
			F=10*x/(c-4);
		}

		if((ac!=0 && bc!=0) || (bc!=0 && cc!=0)){
			cout<<"x="<<x<<" F="<<F<<endl;
		}
		else{
			cout<<"x="<<x<<" F="<<floor(F)<<endl;
		}
		x+=dX;
	}
	return 0;
}
