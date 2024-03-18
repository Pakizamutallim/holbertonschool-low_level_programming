#include <stdio.h>

struct dog{
	char *name;
	float age;
	char *owner;
};

int main()
{
	struct dog dogname;

	dogname.name = "poppy";
	dogname.age = "3";
	dogname.owner = "Bob";

	return (0);
}
