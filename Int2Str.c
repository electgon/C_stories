
#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{

	char *first_arg;
	int Addr = 0;
	char StrAddr[20];

	if (argc < 2) {
	   printf ("please provide arguments or type <bin_name> help \n");
	   printf ("usage example  is <bin_name 0x200> \n");
	   return -1;
	}
	
	
	first_arg = argv[1];
	sscanf(first_arg, "%x", &Addr);
	
	snprintf(StrAddr, 20, "%x", Addr);

	printf("formatted string is %s \n", StrAddr);

    return 0;
}


