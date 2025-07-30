#include <iostream>

int greatestDiv(int nA,int nB)
{
	if(nB == 0)
	{
		return nA;
	}
	
	return greatestDiv(nB,nA % nB);
}

int main()
{
	std::cout<<greatestDiv(12,22);
	return 0;
}
