#include <iostream>

using namespace std;

int fac (int d){
	int r=1;
	for(int i=1;i<=d;i++){
		r = r*i;
	}
	return r;
}

main(void){
	
	cout << fac(5);
	
return 0;
}
