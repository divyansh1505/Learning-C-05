#include <stdio.h>

void printString(char arr[]);

int main (){
    char firstname[] = "Divyansh";
    char lastname[] = "Dubey";

printString(firstname);
printString(lastname);

    return 0;
}

void printString (char arr[]){
for(int i=0; arr[i] != '\0'  ;i++){     //Note the condition.
    printf("%c", arr[i]);
}

printf("\n");
}