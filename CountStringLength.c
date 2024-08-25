#include<stdio.h>

int CountLength (char arr[]);

int main (){
char name[100] = "DIVYANSH";
// fgets(name, 100, stdin);
printf("Length is : %d", CountLength(name));
return 0;
}

int CountLength (char arr[]){
    int count=0;
    for (int i = 0; arr[i] != '\0' ; i++){
        count++;
           //int type pr kuch na kuch return krna hota h 
    }
    return count;    //return should be always outside the loop
    
}
