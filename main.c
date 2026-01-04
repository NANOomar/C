#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>


float checkDeposit(float balence);
float checkWithdraw(float balence);
void viewBalence(float balence);
void userprofile(char name[50] , char lastName[50] , int age);
void setColor(int color);


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
    float balence = 0.0f;

    setColor(10);
    printf("          ============================\n");
    printf("Welcom to        **NANO Bank\n");
    printf("          ============================\n\n\n");

    
    setColor(7);
    //creat an  account
    printf("creat your account :)\n");
    setColor(7);
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
    setColor(12);
    printf("!!Don't forget your password!!\n");
    
    for(int i = 0 ; i < 4 ; i++){
        printf("(   )\r");
        Sleep(600);
        printf(" ( )\r");
        Sleep(600);
        printf(" ()\r");
        Sleep(600);
        
    }
    setColor(9);
    printf("^_^account created seccussfully ^_^\n");

    //login
    setColor(15);
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

    setColor(7);
    

    do{
    printf("\nChoose an option: \n");
    printf("1.Deposit \n");
    printf("2.Withdraw \n");
    printf("3.Check balence \n");
    printf("4.profile\n");
    printf("5.Exit \n");
    
    printf("Enter your option : ");
    scanf("%d" , &option);

switch(option){
        case 1:
            balence = checkDeposit(balence);
            break;
        case 2:
            balence = checkWithdraw(balence);
            break;
        case 3:
            viewBalence(balence);
            break;
        case 4:
            userprofile(name , lastName , age);
            break;
        case 5:
            printf("Don't forget *NANO BANK*");
            isRunning = false;
            break;
        default:
            printf("Enter a valid option");
    }
    }while(isRunning);



    return 0;
}

float checkDeposit(float balence){
    float amount = 0.0f;
    bool valid = true;

    
    printf("Enter amount to deposit : ");
    scanf("%f" , &amount);
    if(amount <= 0){
    printf("Invalid operation\n");
    }
    balence += amount;
    printf("Seccussfull operation\n");

    

    return balence;
}
float checkWithdraw(float balence){
    float amount = 0.0f;

    printf("Enter withdraw amount : ");
    scanf("%f" , &amount);
    if(amount > balence){
        printf("HAHA thiefer i got you take 1$");
        balence++;
    }
    else{
        balence -= amount;
        printf("withdraw seccessfull");
    }
    return balence;

}
void viewBalence(float balence){
    printf(" your courrent balence is %f" , balence);
}
void userprofile(char name[50] , char lastName[50] , int age){
    printf("    PROFILE    \n");
    printf("Name : %s\n" , name);
    printf("last name : %s\n" , lastName);
    printf("age : %d\n" , age);

}
void setColor(int color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE) , color);
} 
