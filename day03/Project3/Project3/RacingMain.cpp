#include "Car.h"
int main(void)
{
	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarstate();
	run99.Break();
	run99.ShowCarstate();
	return 0;
}