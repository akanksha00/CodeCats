#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//User Section

struct shoppingUser
{
    char name[20];
    char mobileNumber[11];
    char emailAddress[30];
    char Address[40];
    char userName[30];
    char password[20];
};

//Declaration of all the functions

void displayMainMenu();
void displayItems();
void SignIn();
void SignUp();
void ContactUs();
void exitProgram();
int checkUser(char ch[30]);
void displayChangedMainMenu();
void products(int x);

int signedIn = 0;

// Main Function

int main()
{

    displayMainMenu();
    return 0;
}

//Main Menu

void displayMainMenu()
{
    int choice;
    printf("\n****************************");
    printf("\n****************************");
    printf("\n***                      ***");
    printf("\n***   1. Display Item    ***");
    printf("\n***   2. Sign In         ***");
    printf("\n***   3. Sign up         ***");
    printf("\n***   4. Contact Us      ***");
    printf("\n***   5. Exit            ***");
    printf("\n***                      ***");
    printf("\n****************************");
    printf("\n****************************\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        displayItems();
        break;
    case 2:
        SignIn();
        break;
    case 3:
        SignUp();
        break;
    case 4:
        ContactUs();
        break;
    case 5:
        exitProgram();
        break;

    default:
        printf("\nWrong choice.. please Enter a correct choice ");
        displayMainMenu();
        break;
    }
}

void displayChangedMainMenu()
{
    int choice;
    printf("\n****************************");
    printf("\n****************************");
    printf("\n***                      ***");
    printf("\n***   1. Display Item    ***");
    printf("\n***   2. Sign Out        ***");
    printf("\n***   3. Contact Us      ***");
    printf("\n***   4. Exit            ***");
    printf("\n***                      ***");
    printf("\n****************************");
    printf("\n****************************\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        displayItems();
        break;
    case 2:
        signedIn = 0;
        printf("\nSign Out Successfull ");
        displayMainMenu();
        break;
    case 3:
        ContactUs();
        break;
    case 4:
        exitProgram();
        break;
    default:
        printf("\nWrong choice.. please Enter a correct choice ");
        displayChangedMainMenu();
        break;
    }
}

//Displaying all the Items
void displayItems()
{
    int choice;
    printf("\nDisplaying alll items");
    printf("\n***********************************");
    printf("\n***********************************");
    printf("\n***                             ***");
    printf("\n***          1. Men             ***");
    printf("\n***          2. Women           ***");
    printf("\n***          3. Boys            ***");
    printf("\n***          4. Girls           ***");
    printf("\n***          5. Main Menu       ***");
    printf("\n***          6. Exit            ***");
    printf("\n***                             ***");
    printf("\n***********************************");
    printf("\n***********************************\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        products(choice);
        break;
    case 2:
        products(choice);
        break;
    case 3:
        products(choice);
        break;
    case 4:
        products(choice);
        break;
    case 5:
        if (signedIn == 1)
        {
            displayChangedMainMenu();
        }
        else
        {
            displayMainMenu();
        }
        break;
    case 6:
        exitProgram();
        break;
    default:
        printf("\nWrong choice.. please Enter a correct choice ");
        displayItems();
        break;
    }
}

//User Sign In
void SignIn()
{
    char uName[30], pass[20];

    printf("\nWelcome to Sign In \n\n");

    printf("Enter UserName = ");
    scanf("%s", &uName);

    printf("Enter Password = ");
    scanf("%s", &pass);

    if (UserSignIn(uName, pass) == 1)
    {
        printf("\nSign In successFull");
        signedIn = 1;
        displayChangedMainMenu();
    }
    else
    {
        printf("\nSign In Not successFull");
        SignIn();
    }
}

//User Sign Up
void SignUp()
{
    printf("\nWelcome to Sign Up ");

    struct shoppingUser user;

    fflush(stdin);
    printf("\nEnter Name = ");
    gets(user.name);

    printf("\nEnter Mobile Number = ");
    scanf("%s", &user.mobileNumber);

    fflush(stdin);
    printf("\nEnter Address = ");
    gets(user.Address);

    printf("Enter Email Address = ");
    scanf("%s", &user.emailAddress);

    printf("Enter UserName = ");
    scanf("%s", &user.userName);

    printf("Enter Password = ");
    scanf("%s", &user.password);

    if (checkUser(user.userName) == 1)
    {
        printf("User Exist ");
        printf("\nGoing back to main menu");
        displayMainMenu();
    }
    else
    {

        FILE *fp;

        fp = fopen("Accounts.dat", "a");

        if (fp == NULL)
        {
            printf("\nError opened file\n");
            exit(1);
        }

        fwrite(&user, sizeof(struct shoppingUser), 1, fp);

        if (fwrite != 0)
        {
            printf("Sign Up Successfull !\n");
            void displayMainMenu();
        }

        else
            printf("error writing file !\n");

        // close file
        fclose(fp);
    }
}

//Contact Information
void ContactUs()
{
    printf("\nContact Information");
}

//Exit the program
void exitProgram()
{
    printf("\nBye Loser ........");
}

int checkUser(char ch[30])
{
    FILE *infile;
    int userExist = 0;
    struct shoppingUser input;

    // Open person.dat for reading
    infile = fopen("C://Users//Aman//Desktop//C C++//C Lab//Accounts.dat", "r");
    if (infile == NULL)
    {
        printf("\nError opening file\n");
        exit(1);
    }

    // read file contents till end of file
    while (fread(&input, sizeof(struct shoppingUser), 1, infile))
    {
        if (strcmp(input.userName, ch) == 0)
        {
            userExist = 1;
            break;
        }
    }

    // close file
    fclose(infile);
    return userExist;
}

int UserSignIn(char ch[30], char pass[20])
{
    FILE *infile;
    int successfull = 0;
    struct shoppingUser input;

    // Open person.dat for reading
    infile = fopen("C://Users//Aman//Desktop//C C++//C Lab//Accounts.dat", "r");
    if (infile == NULL)
    {
        printf("\nError opening file\n");
        exit(1);
    }

    // read file contents till end of file
    while (fread(&input, sizeof(struct shoppingUser), 1, infile))
    {
        if (strcmp(input.userName, ch) == 0 && strcmp(input.password, pass) == 0)
        {
            successfull = 1;
            break;
        }
    }

    // close file
    fclose(infile);
    return successfull;
}

void products(int x)
{
    if (x == 1)
        printf("\nMens Section");

    if (x == 2)
        printf("\nWomens Section");

    if (x == 3)
        printf("\nBoys Section");

    if (x == 4)
        printf("\nGirls Section");
} 