#include <iostream>

int mathRepresent(int n) {
    if (n == 0) return 0;
    if (n == 1) return 5;
    if (n == 2) return 3;
    if (n == 3) return 4;
    if (n == 4) return 4;
    return mathRepresent(n - 5) * mathRepresent(n - 4) + mathRepresent(n - 2);
}

int main()
{

	std::cout<<mathRepresent(2);

}
