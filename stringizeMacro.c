#ifndef _c_story_c
#define _c_story_c

#include <stdio.h>
#include <string.h>

#define DDR uio3
#define STRINGIZE(x) #x
#define GET_UIO(x) STRINGIZE(x)


int main(int argc, char **argv)
{

	char *first_arg;
	char UsrInput[50];

	if (argc < 2) {
	   printf ("please provide arguments or type <bin_name> help \n");
	   return -1;
	}
	
	
	
	
	first_arg = argv[1];
	strcpy(UsrInput, first_arg);
	strcat(UsrInput, " ");
	strcat(UsrInput, GET_UIO(DDR)"Done");
	strcat(UsrInput, " \0");

	printf("formatted string is %s \n", UsrInput);

    return 0;
}


#endif
