#include <stdio.h>

struct dog{
	char *name;
	float *age;
	char *owner;
};

int main()
{
	struct dog dogname = {"Poppy","3.5"};
	printf ("%s" "%.1f", dogname.name, dogname.age);
}
