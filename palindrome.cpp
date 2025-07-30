#include <iostream>
#include <string>

bool isPalidrome(const std::string& strText,int i = 0)
{
	int j = strText.length() - i -1;

	if(i >= j){
		return true;
	}
	
	if(strText[i] != strText[j]){
		return false;
	}
	
	return isPalidrome(strText,i + 1);
	
}


int main(){
	std::cout<<isPalidrome("GegeG1");
	return 0;
}
