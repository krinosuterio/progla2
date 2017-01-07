#include <stdio.h>
#include<iostream>
using namespace std;
main(){
    FILE *myFile;
    myFile = fopen("sample1.txt", "r");
    int i,num;
    int numberArray[5];
    cout<<"Enter 5 numbers:\n";
    for(i=0; i<5; i++){
    	cin>>numberArray[i];
	}
    fclose(myFile);
    myFile = fopen("sample1.txt", "w");
    for(i= 4; i >=0; i--){
       fprintf(myFile, "%d\n", numberArray[i]);
}
}
