#include <iostream>
void printNums(int nNum){

	if(nNum < 1)
	{
		return;
	}
	
	std::cout<<nNum<<" ";
	return printNums(nNum -1);

}
int main(){

	printNums(60);
	
}
