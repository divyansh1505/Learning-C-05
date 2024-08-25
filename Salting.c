// password me random letters daalna is salting, companies do that to prevent hacking 
#include <stdio.h>
#include <string.h>

void Salting(char Password[]);

int main (){
char password[100];
scanf("%s", password);
Salting(password);
return 0;
}

void Salting(char Password[]){
    char Newpassword[200];
    char salt[] = "123";
    strcpy(Newpassword, Password );
    strcat(Newpassword, salt);
    printf("Salted password is %s", Newpassword);
}