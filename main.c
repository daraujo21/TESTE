#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define UNIP 200

int main(){
system("color 1f");
login();


}


login()
{
    char usuario[11] = "unip";
    char usuario1[11];
    char senha[9] = "pim";
    char senha1[9];

    printf("\nDigite o usuario:");
    scanf("%s", &usuario1);
    printf("\nDigite a senha:");
    scanf("%s", &senha1);

    if(strcmp(usuario,usuario1) == 0 && strcmp(senha,senha1) == 0)
        printf("\nUSUARIO LOGADO!\n");

    else{
        printf("\n\nUsuario ou Senha incorreta!\n");
        return login();
    }
        return 0;
}

