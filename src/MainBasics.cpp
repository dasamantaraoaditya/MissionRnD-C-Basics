/*

Welcome to Mission RnD.
This is the First Project which you people have to submit .

Use MainBasics File for testing any other function in other Cpp files .

DO NOT write main function in any other File or else your Build Fails.

Points to Follow for the whole C course :
->Read All Note points in all the files .
->Do practice other similar questions ,related to the Topic till you are confident .
->Do not only depend on the questions given in the Project Tracker Tool .

*/

//Do not Edit below Header Files
#include <stdio.h>
#include "FunctionHeadersBasics.h"

int main(){

	
	//Test Sum of numbers
	
	int sumTemp = sum(4, 3);
	printf("%d\n", sumTemp);
	
	//Test Count file
	
	int countTemp = count(5, 20);
	printf("%d\n", countTemp);


	//Test Swap
	int a = 5, b = 7;
	swap(&a, &b);
	printf("%d %d\n", a, b);

	//Is Older 
	char date1[20] = "29-02-2004";
	char date2[20] = "29-02-2000";
	int check=isOlder(date1, date2);
	if (check == 0){
		printf("Both are of same age \n");
	}
	else{
		printf("%d person is Older \n", check);
	}

	//Variable Arguments
	int total = variableArguments(3, 20, 90, 98);
	printf("There are %d students greater than 90\n", total);
	
	
	return 0;
}