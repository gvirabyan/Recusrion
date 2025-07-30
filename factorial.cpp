#include <iostream>

int factorial(int nNum){
	if(nNum <= 1){
		return 1;
	}
	return nNum * factorial(nNum - 1);
}


int main(){

	std::cout<<factorial(3)<<std::endl;

	return 0;

}
