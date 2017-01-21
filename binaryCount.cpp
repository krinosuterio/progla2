#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int ones;
	char binaryString[10];
	strcpy(binaryString, "1010010010");
	for (int x = 0; binaryString[x]!=0; x++)
	{
		if(binaryString[x]=='1')	
			ones++;
	}
	cout<<"1's: "<< ones;
	return 0; 
}
