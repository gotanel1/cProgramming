#include <iostream>
using namespace std;

void testBit(int d){
	int x = (1<<3);
	int a = (d & 1);
	cout << "Test Shift " << d <<endl;
	cout << "Test bit 3 = 1 is " << ((d & x)==x)<<endl;
	/*if(a==1){
		cout << "\nOdd Number";
	}else{
		cout << "\nEven Number";
	}*/
	(a==1)?(cout<<"Odd"):(cout<<"Even");
}

main(void){
testBit(10);
return 0;
}
