#include <stdio.h>
#include<iostream>
using namespace std;
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");
    int i;
    int numberArray[5];

    for(int i=0; i<5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }
    fclose(myFile);
    myFile = fopen("sample.txt", "a");
    for(int i=0; i<5; i++){
    	fprintf(myFile,"\n");
        fprintf(myFile, "%d", numberArray[i]+4);
    }
}
