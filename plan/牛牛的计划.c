#include <stdio.h>
#include <string.h>
int main()
{
	char q[15] = {0};
	char w[15] = {0};
	int e = 0;
	gets(q);
	gets(w);
	e = strcmp(q, w);
	if (!(strcmp(q, w)) || e < 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}