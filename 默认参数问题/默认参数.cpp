#include <iostream>
void printArea(double radius = 1);
int main()
{
printArea(); //	[Error] too few arguments to function 'void printArea(double)'
printArea(4);
return 0;
}
void printArea(double radius =2)
{
	std::cout<<radius<<std::endl;
}
