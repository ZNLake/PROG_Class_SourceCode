//
// An example #2 
//		convert feet to fathoms
//		from the textbook
//
// PROG71985 - F21
// Professor SteveH - Sept 2021
//
// revision history
//		1.0		2020-Apr-27			initial	
//      1.1       2021-May-15         reviewed/updated

#include <stdio.h>

#define FEET_IN_FATHOM		6
#define CALCULATE_FEET_FROM_FATHOMS(n)  FEET_IN_FATHOM*n

int main(void)
{
	int feet, fathoms;

	fathoms = 2;
	feet = FEET_IN_FATHOM * fathoms;
	printf("there are %d feet in %d fathoms\n", feet, fathoms);

	feet = CALCULATE_FEET_FROM_FATHOMS(fathoms);
	printf("there are %d feet in %d fathoms\n", feet, fathoms);
	return 0;
}