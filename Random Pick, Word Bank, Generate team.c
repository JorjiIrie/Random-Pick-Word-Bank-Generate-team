//Global Declarations (Header files)
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <process.h>
#include <unistd.h>
#include <ctype.h>
#define MAX 150

FILE *fpstorageBank, *fptemporaryFile; //Text file to be use
//Global Declaration for functions
void fileChecking();
void promptFunction();
void mainMenu();
void addBank();
void editupdateBank();
void deleteBank();
void openBank();
void displayBank();
void randomPick();
void randomGenerator();
void graphics();
//Global Declaration for prompt
char prompt;
int i;

//Giving some delay
void delay( unsigned int value){
    unsigned int count1 =0;
    unsigned int count2 = 0;

    for(count1 = 0; count1 < value ; count1++ ){
        for(count2 = 0; count2 < count1 ; count2++ ){

        }
    }
}

// String to display Rocket
const char rocket[] =
    "           ^ \n\
          /^\\\n\
          |-|\n\
          | |\n\
          |L|\n\
          |O|\n\
          |A|\n\
          |D|\n\
         /|I|\\\n\
        / |N| \\\n\
       |  |G|  |\n\
        `-\"\"\"-`\n\
";

//Design Functions
void gotoxy(int x,int y){

    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void bankLoading(){

    int a,b;

    gotoxy(0,0);
        printf("%c",201);
    gotoxy(79,0);
        printf("%c",187);
    gotoxy(0,24);
        printf("%c",200);
    gotoxy(79,24);
        printf("%c",188);

    for(int i = 1; i < 79; i++){
        gotoxy(i, 0);
        printf("%c",205);
    }

    for(int i = 1; i < 79; i++){
        gotoxy(i, 24);
            printf("%c",205);
    }

    for(int i = 1; i < 24; i++){
        gotoxy(0, i);
            printf("%c",186);
    }

    for(int i = 1; i < 24; i++){
        gotoxy(79, i);
            printf("%c",186);
    }

    gotoxy(28,10);
        printf("%c",201);
    for(int i = 29; i < 49; i++){
        gotoxy(i, 10);
            printf("%c",205);
    }
    gotoxy(49,10);
        printf("%c",187);
    gotoxy(28,11);
        printf("%c",186);
    gotoxy(49,11);
        printf("%c",186);
    gotoxy(28,12);
        printf("%c",200);
    gotoxy(49,12);
        printf("%c",188);
    for(int i = 29; i < 49; i++){
        gotoxy(i, 12);
        printf("%c",205);
    }
    gotoxy(29,11);
    for(a=1;a<=20;a++){
        for(b=0;b<=100000000;b++);
            printf("%c",219);
    }
}

void loadingPrint(){

    system("cls");
    gotoxy(28,9);
    printf("Loading...");
    bankLoading();
}

void bankTop(){

    int i, j;

    gotoxy(0,0);
        printf("%c",201);
    gotoxy(79,0);
        printf("%c",187);
    gotoxy(0,5);
        printf("%c",204);
    gotoxy(79,5);
        printf("%c",185);

    for(i = 1; i < 79; i++){
        gotoxy(i, 0);
            printf("%c",205);
    }
    for(i = 1; i < 79; i++){
        gotoxy(i, 5);
            printf("%c",205);
    }
    for(i = 1; i < 6; i++){
        if (i == 5){
            gotoxy(79, i);
                printf("%c", 185);
        } else{
            gotoxy(79, i);
                printf("%c", 186);
        }
    }
    for(i = 1; i < 6; i++){
        if (i == 5){
            gotoxy(0, i);
                printf("%c", 204);
        }else{
            gotoxy(0, i);
                printf("%c", 186);
        }
    }
    gotoxy(19,1);
        printf("Technological University of the Philippines");
    gotoxy(26,2);
        printf("DANS|GEPANAYAO|NACARIO|SEMBLANTE");
    gotoxy(31,3);
        printf("College of Science");
    gotoxy(31,4);
        printf("BSCS-1AB-M (STEM)");
}

void bankMain(){

    int r;
    gotoxy(0, 24);
        printf("%c", 200);
    gotoxy(79, 24);
        printf("%c", 188);
    for(i = 6; i < 24; i++){
            gotoxy(0, i);
                printf("%c", 186);
    }
    for(i = 6; i < 24; i++){
            gotoxy(79, i);
                printf("%c", 186);
    }
    for(i = 1; i < 79; i++){
        gotoxy(i, 24);
            printf("%c",205);
    }
}

struct wordBank{

    char nameWord[150];
};
    struct wordBank arrayWord[MAX];

struct WordStorage{
    char word[MAX];

}w[MAX];
    struct WordStorage b[MAX];

int main(){ //Our Main program

    int ch; //Variable to be use in switch case statement

    graphics();
    bankTop();
    bankMain();
    fileChecking(); //Checking the text file if it's existing or not
    getch(); //Wait for the user's input to continue
    do{
        system("cls");
        system("COLOR F0");
        bankTop();
        bankMain();
        gotoxy(28,9);
        mainMenu();
        gotoxy(8,22);
        printf("\n\t\t\t   Enter an input: "); // Prompt user to input his/her choice
        scanf("%d", &ch);
    do{
        switch(ch){
            case 1:
                system("cls");
                system("COLOR 0B");
                gotoxy(28,9);
                printf("Please wait...");
                bankLoading();
                system("cls");
                addBank();
            break;
            case 2:
                system("cls");
                system("COLOR 0B");
                gotoxy(28,9);
                printf("Please wait...");
                bankLoading();
                system("cls");
                editupdateBank();
            break;
            case 3:
                system("cls");
                system("COLOR 0B");
                gotoxy(28,9);
                printf("Please wait...");
                bankLoading();
                system("cls");
                deleteBank();
            break;
            case 4:
                system("cls");
                system("COLOR 0B");
                gotoxy(28,9);
                printf("Please wait...");
                bankLoading();
                system("cls");
                randomPick();
            break;
            case 5:
                system("cls");
                system("COLOR 0B");
                gotoxy(28,9);
                printf("Please wait...");
                bankLoading();
                system("cls");
                randomGenerator();
            break;
            case 6:
                system("cls");
                system("COLOR 0B");
                gotoxy(28,9);
                printf("Please wait...");
                bankLoading();
                system("cls");;
                openBank();
            break;
            case 0:
                system("cls");
                system("COLOR 0B");
                bankMain();
                gotoxy(6,14);
                printf ("Project submitted by: DANS, GEPANAYAO, NACARIO, SEMBLANTE\n");
                gotoxy(6,15);
                printf ("Date Prepared: MAY-JUNE 2021\n");;
                gotoxy(28,9);
                printf("SHUTTING DOWN");
                bankLoading();
                system("cls");
                exit(0);
            break;
            }
        }while(ch>7||ch<1);
        prompt = 'N';
        if(ch>=1 && ch<=7){
        do{
            printf("\n\n\tGo back to Main Menu[Y/N]? ");
            promptFunction();
            }while(prompt!='Y' && prompt!='N'); //Loop if the input is invalid
        }system("cls");
    }while(prompt=='Y');
    return 0;
}

void graphics(){

    int jumpControlAtBottom = 0;
    const int someDelay = 6000;
    int shifControl = 0;
    //Jump to bottom of console
    for(jumpControlAtBottom = 0; jumpControlAtBottom < 30; ++jumpControlAtBottom){
        printf("\n");
    }
    //Print rocket
    fputs(rocket,stdout);
    for (shifControl = 0; shifControl < 30; ++shifControl){
        // Rocket move on the basis of delay
        delay(someDelay);
        // Move rocket a line upward
        printf("\n");
    }
}

void mainMenu(){    //Main menu function

    gotoxy(8,6);
    printf("\n\t\t\t\t:::::::: MENU ::::::::\n");
    gotoxy(8,8);
    printf("\n\t\t[1] Add word to the bank ");
    gotoxy(8,10);
    printf("\n\t\t[2] Edit/Update a word");
    gotoxy(8,12);
    printf("\n\t\t[3] Delete a word");
    gotoxy(8,14);
    printf("\n\t\t[4] Random pick");
    gotoxy(8,16);
    printf("\n\t\t[5] Random Generator");
    gotoxy(8,18);
    printf("\n\t\t[6] Open Word Bank");
    gotoxy(8,20);
    printf("\n\t\t[0] Exit");
}

void promptFunction(){ //Prompt function for another service

    scanf(" %c", &prompt);
    prompt=toupper(prompt);
        if(prompt!='Y' && prompt!='N'){
            printf("INVALID INPUT!");
        }
}

void fileChecking(){

    gotoxy(28,9);
    printf("Please wait...");
    bankLoading();
    fpstorageBank=fopen("Word Bank.txt", "a");
    if(fpstorageBank==NULL){
        system("cls");
        bankTop();
        bankMain();
        system("COLOR 4");
        gotoxy(28,9);
        printf("ERROR: Cannot open file ");
        exit(1);
    }else{
        system("cls");
        bankTop();
        bankMain();
        system("COLOR 4");
        gotoxy(28,12);
        printf("FILE CHECKING: Successful!");
        gotoxy(28,14);
        printf("Press any key to continue...");
    }
    fclose(fpstorageBank);
}

void addBank(){ //Adding

 do{
        //Local Declarations
        char addedEntry[150];
        int i, k;
        system("cls");
        system("COLOR F0");
        fpstorageBank=fopen("Word Bank.txt", "a");
        bankTop();
        bankMain();
        gotoxy(30,8);
        printf(":::ADD WORD:::");
        gotoxy(6,10);
        printf("Enter the number of words to add: ");
        scanf("%d", &k);

        for(i=0; i!=k; i++){
            printf("\n\tEnter your word [#%d]: ", i+1);
            scanf("%s", addedEntry);
            fflush(stdin);
            fprintf(fpstorageBank, "%s\n", addedEntry);
        }
        fclose(fpstorageBank);
        do{
            printf("\n\tWord/s added succesfully! Would you like to try another one? (Y/N): ");
            promptFunction();
            fflush(stdin);
        }while(prompt=='Y' && prompt=='N');
    }while(prompt=='Y');
    fclose(fpstorageBank);
}

void openBank(){

    int i,k=0, words=0;

    system("COLOR F0");
    fpstorageBank=fopen("Word Bank.txt", "r");
    if(fpstorageBank==NULL){
        gotoxy(28,9);
        printf("\n\n\t\tERROR: Cannot open file.");
        exit (1);
    }
    while (fscanf(fpstorageBank,"%s", &arrayWord[k].nameWord)!=EOF){
            fflush(stdin);
            k++;
        }
    printf("\n\t\t\t:::WORD BANK:::\n\n\n");
    for (i=0; i< 80; i++){
        printf("=");
    }
    printf("\n\n");
    for( i = 0, words=1; i!=k; i++, words++){
        printf("   %s", arrayWord[i].nameWord);
            if (words==9){
                printf("\n\n");
                words=0;
            }
        }
     printf("\n\n");
     for (i=0; i< 80; i++){
        printf("=");
    }
    printf("\n\n");
    fclose (fpstorageBank);
}


void editupdateBank(){
    do{
        char word[35], editedWord[35];
        int k=0;
        system("cls");
        system("COLOR F0");
        bankTop();
        bankMain();
        fpstorageBank=fopen("Word Bank.txt", "r");
        if(fpstorageBank==NULL){
            gotoxy(28,9);
            printf("ERROR: Cannot open file. ");
            exit(1);
        }
        fptemporaryFile=fopen("wbtemp.txt", "w");
        gotoxy(32,8);
        printf(":::EDIT WORD:::");
        printf("\n\n\t\tEnter the word you wish to edit: ");
        fflush(stdin);
        gets(word);
        printf("\n\t\tEnter the updated version: ");
        fflush(stdin);
        gets(editedWord);

        while(fscanf(fpstorageBank, "%s", &arrayWord[k].nameWord)!=EOF){
            k++;
        }
        for(int i=0; i<k; i++){
            if(strcmp(word, arrayWord[i].nameWord)==0){
                fprintf(fptemporaryFile, "%s\n", editedWord);
            }else{
                fprintf(fptemporaryFile, "%s\n", arrayWord[i].nameWord);
            }
        }
        fclose(fptemporaryFile);
        fclose(fpstorageBank);
        remove("Word Bank.txt");
        rename("wbtemp.txt", "Word Bank.txt");

     do{
            printf("\n\tWould you like to try another one? (Y/N): ");
            promptFunction();
            fflush(stdin);
        }while(prompt=='Y' && prompt=='N');
    }while(prompt=='Y');
}

void deleteBank(){
     do{
        char deleting[35];
        int i, k=0;
        system("cls");
        system("COLOR F0");
        bankTop();
        bankMain();
        fpstorageBank=fopen("Word Bank.txt", "r");
        if(fpstorageBank==NULL){
            gotoxy(28,9);
            printf("ERROR: Cannot open file. ");
            exit(1);
        }
        fptemporaryFile=fopen("wbtemp.txt", "w");
        gotoxy(32,8);
        printf(":::DELETE BANK:::");
        printf("\n\n\t\tEnter the word to be deleted: ");
        fflush(stdin);
        gets(deleting);

        while(fscanf(fpstorageBank, "%s", &arrayWord[k].nameWord)!=EOF){
            k++;
        }

        for(i=0; i<k; i++){
            if(strcmp(deleting, arrayWord[i].nameWord)==0){
            continue;
        }else{
            fprintf(fptemporaryFile,"%s\n", arrayWord[i].nameWord);
            }
        }

        fclose(fptemporaryFile);
        fclose(fpstorageBank);
        remove("Word Bank.txt");
        rename("wbtemp.txt", "Word Bank.txt");
        do{
            printf("\n\n\tWould you like to delete another one? (Y/N): ");
            promptFunction();
        }while(prompt!='Y' && prompt!='N');
    }while(prompt=='Y');
}

void randomPick(){

    char choice_one, choice_two, choice_three, another;
    int i;

    //loop to keep repeating the function as long as user wants
    do{
    //First user prompt for using word bank
    system("cls");
    system("COLOR F0");
    bankTop();
    bankMain();
    gotoxy(32,8);
    printf(":::RANDOM PICK:::");
    printf("\n\n\t\tDo you want to use words from the Word Bank? (Y/N): ");
    scanf(" %c" , &choice_one);

    //if users wants to use the word bank
    if(choice_one == 'Y' || choice_one == 'y'){
        i = 0;
        fpstorageBank = fopen("Word Bank.txt","r");
        //loop for checking word bank contents
        while (feof(fpstorageBank) == 0){
            fscanf(fpstorageBank, "%s ", b[i].word);
            i++;
        }
        fclose(fpstorageBank);
    }
    //if user does not want to use the word bank
    else {
        //loop for asking words
        do{
         i=0;
         printf("\n\t\tEnter Name/Word: ");
         scanf("%s", b[i].word);
         i++;

        //second prompt for word input
         printf("\n\t\tDo you want to add another name? (Y/N): ");
         scanf(" %c", &choice_two);
        }while (choice_two == 'Y' || choice_two == 'y');
        fclose(fpstorageBank);
    }
    //3rd prompt to use words given or drop operation
    printf("\n\t\tDo it / Don't do it (Y/N): ");
    scanf(" %c", &choice_three);
        if (choice_three == 'Y' || choice_three == 'y'){
        printf("\n\t\t==========================");
        printf("\n\t\tPicked person is: %s ", b[rand() % i].word);
        printf("\n\t\t==========================");
        }else{
        printf("\n\n\t\tRandom pick aborted...");
    }
        fclose(fpstorageBank);
        printf("\n\n\n\n\tWould you like to pick again?(Y/N): ");
        scanf(" %c", &another);
    }while(another == 'Y' || another == 'y');
}

void randomGenerator(){

    char another;

    do{
    void openBank();
    int i, j, group, members, remainder;
    int groupNum = 1;
    int exc = 0;
    int k = 0;
    int l = 0;
    char temp[MAX];

    fpstorageBank = fopen("Word Bank.txt", "r");    //opens file (word bank)
    if(fpstorageBank == NULL){
            printf("ERROR!! Cannot open file.");
            exit (1);
        }
        while (fscanf(fpstorageBank,"%s", &arrayWord[k].nameWord)!=EOF){
                fflush(stdin);
                k++;
            }

    system("cls");
    system("COLOR F0");
    printf("\n\n\t\t\t:::RANDOM TEAM GENERATOR:::");
    printf("\n\n\tEnter the number of groups you want to make: ");
    scanf("%d", &group);
    fflush(stdin);

    for(i=1; i<k; i++){
     j = rand()%i;            // makes the team randomized by using rand
     strcpy(temp, arrayWord[j].nameWord);
     strcpy(arrayWord[j].nameWord, arrayWord[i].nameWord);
     strcpy(arrayWord[i].nameWord, temp);
    }

    members= k/group; //divides the words in word bank according to the number of groups want to form
    remainder= k%group; //if the words in the bank are odd in numbers

    if(remainder!=0){
        members++;
        exc++;
    }

    for(i=0; i < group; i++, groupNum++, exc++){
       printf("\t\n Group %d\n", groupNum); //prints the group number
       for(j=0, k = l; j < members; j++){
           printf("%s\n", &arrayWord[k].nameWord); //prints the words in the bank
           k++;
           l=k;
       }
       if(remainder!=0){
           if(exc==remainder){
               members--;
           }
       }
       fclose(fpstorageBank);
    }
        printf("\n\n\n\n\tWould you like to generate a new team?(Y/N): ");
        scanf(" %c", &another);
    }while(another== 'Y' || another == 'y');
}




