#include <stdio.h>

struct datarecord
{
	char letter;
	int  next;
};

datarecord myArray[10];


/* program begins running here */
int main()
{
	int Index = 1;

	myArray[1].letter = 'U';
	myArray[1].next = 6;

	myArray[2].letter = 'N';
	myArray[2].next = 5;

	myArray[3].letter = 'K';
	myArray[3].next = 2;

	myArray[4].letter = 'H';
	myArray[4].next = 10;

	myArray[5].letter = 'I';
	myArray[5].next = 7;

	myArray[6].letter = 'C';
	myArray[6].next = 9;

	myArray[7].letter = 'G';
	myArray[7].next = 4;

	myArray[8].letter = 'S';
	myArray[8].next = 0;

	myArray[9].letter = 'F';
	myArray[9].next = 3;

	myArray[10].letter = 'T';
	myArray[10].next = 8;


	while (Index != 0)
	{
		printf("%c", myArray[Index].letter);
		Index = myArray[Index].next;
	}

	return 0;
}
