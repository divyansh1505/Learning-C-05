#include <stdio.h>

int CountVowels (char str[]);

int main () {

char str[100];
 fgets(str, 100, stdin);   // as scanf will be limited to just one word 
printf("Number is vowels is : %d ", CountVowels(str));   //yaha likha because it gives a integer in return and that will be printed 
return 0;
}

int CountVowels (char str[]){
int count = 0;                             //remember how to use count 
for(int i = 0; str[i] != '\0'; i ++){
    if (str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' || 
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
        count++;
    }
}
return count; //so again int tha to usne ek integer dia return me 


}