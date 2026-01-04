#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

void creatAccount();
float checkDeposit();
float checkWithdraw();
float viewBalence();
char login();

int main(){
    int option = 0;
    bool isRunning = true;
    char name[50] = "" ;
    char lastName[50] = "";
    int age = 0;
    char password[20] ="";
    char passwordcheck[50] = "";
    bool isWorking = true;
    char userName[50] = "";
    char checkUserName[50] = "";


    printf("Welcom to *NANO Bank*");

    //creat an  account
    printf("creat your account :)\n");

    printf("enter your name :");
    fgets(name , sizeof(name) , stdin);
    name[strlen(name) - 1] = '\0';

    printf("enter your last name :");
    fgets(lastName , sizeof(lastName) , stdin);
    lastName[strlen(lastName) - 1] = '\0';

    printf("enter your age : ");
    scanf("%d" , &age);
    while (getchar() != '\n');//clear input buffer

    printf("Chose an user name : ");
    fgets(userName , sizeof(userName) , stdin);
    userName[strlen(userName) - 1] = '\0';
    
    printf("choose a password : ");
    fgets(password , sizeof(password) , stdin);
    password[strcspn(password , "\n")] = '\0';

    printf("Don't forget your password\n");
    printf("Your information will be hiden after 3 sec!!\n");
    Sleep(3000);
    printf("^_^account created seccussfully ^_^\n");

    //login
    printf("\nlogin\n");
    
    
    do{
            printf("enter your password : ");
            fgets(passwordcheck ,sizeof(passwordcheck) , stdin);
            passwordcheck[strcspn(passwordcheck , "\n")] = '\0';
            printf("enter your username : ");
            fgets(checkUserName ,sizeof(checkUserName) , stdin);
            checkUserName[strcspn(checkUserName , "\n")] = '\0';
        if(strcmp(password , passwordcheck) == 0 && strcmp(userName , checkUserName) == 0){
        printf("login seccussfully \n");
        isWorking = false;
    }
    else{
        printf("invalid password or invalid username\n");
    } 
    }while(isWorking);


    printf("\nChoose an option: \n");
    printf("1.Deposit \n");
    printf("1.Withdraw \n");
    printf("1.Check balence \n");
    printf("1.Exit \n");
    printf("Enter your option : ");
    scanf("%d" , &option);

    do{

switch(option){
        case 1:
            checkDeposit();
            break;
        case 2:
            checkWithdraw();
            break;
        case 3:
            viewBalence();
            break;
        case 4:
            printf("Don't forget *NANO BANK*");
            isRunning = false;
            break;
        default:
            printf("Enter a valid option");
    }
    }while(isRunning);



    return 0;
}

float checkDeposit(){
    
}
float checkWithdraw(){

}
float viewBalence(){

}