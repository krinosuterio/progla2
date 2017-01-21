#include <stdio.h>
#include<iostream>
using namespace std;
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    //read file into array
    int i,sum=0;
    int numberArray[5];

    for (i = 0; i < 5; i++){
        fscanf(myFile, "%1d", &numberArray[i]);
    }
    for (i = 0; i < 5; i++){
        printf("Number is: %d\n\n",numberArray[i]);
        sum += numberArray[i];
    }
    cout<<"Sum of the array: "<<sum << endl;
}
