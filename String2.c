#include<stdio.h>

int main () {
char str[100];
char ch;
int i =0;

while(ch != '\n'){   // mtlb tab tk character lega jab tk user enter na daba de 
scanf("%c", &ch);
str[i] = ch;
i ++;
}
str[i]= '\0';
puts(str);
}