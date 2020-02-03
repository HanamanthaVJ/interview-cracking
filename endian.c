#include <stdio.h>

char endian() /* 0 - Big Endian, 1 - Little Endian */
{
long i = 1;
return *((char *) &i);
}
int main()
{

int res = endian();

if(res == 1) 
	printf("little \n");
else 
	printf("Big \n");

return 0;
}

