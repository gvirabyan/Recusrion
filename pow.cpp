#include <iostream>

int pow(int nA,int nB)
{
	if(nB < 1){
		return 1;
	}

	return nA * pow(nA,nB-1);
}

int main(){
	
	std::cout<<pow(2,6);
	return 0;
}
