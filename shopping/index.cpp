#include <bits/stdc++.h>
using namespace std;

struct shoppingUser
{
    char name[20];
    char mobileNumber[11];
    char emailAddress[30];
    char Address[40];
    char userName[30];
    char password[20];
};

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

int main()
{

    displayMainMenu();
    return 0;
}

void displayMainMenu()
{
    int choice;
    cout<<"\n****************************";
    cout<<"\n****************************";
    cout<<"\n***                      ***";
    cout<<"\n***   1. Display Item    ***";
    cout<<"\n***   2. Sign In         ***";
    cout<<"\n***   3. Sign up         ***";
    cout<<"\n***   4. Contact Us      ***";
    cout<<"\n***   5. Exit            ***";
    cout<<"\n***                      ***";
    cout<<"\n****************************";
    cout<<"\n****************************\n";

    cin>>choice;
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
        cout<<"\nWrong choice.. please Enter a correct choice ";
        displayMainMenu();
        break;
    }
}

void displayChangedMainMenu()
{
    int choice;
    cout<<"\n****************************";
    cout<<"\n****************************";
    cout<<"\n***                      ***";
    cout<<"\n***   1. Display Item    ***";
    cout<<"\n***   2. Sign Out        ***";
    cout<<"\n***   3. Contact Us      ***";
    cout<<"\n***   4. Exit            ***";
    cout<<"\n***                      ***";
    cout<<"\n****************************";
    cout<<"\n****************************\n";

    cin>>choice;
    switch (choice)
    {
    case 1:
        displayItems();
        break;
    case 2:
        signedIn = 0;
        cout<<"\nSign Out Successfull ";
        displayMainMenu();
        break;
    case 3:
        ContactUs();
        break;
    case 4:
        exitProgram();
        break;
    default:
        cout<<"\nWrong choice.. please Enter a correct choice ";
        displayChangedMainMenu();
        break;
    }
}

void displayItems()
{
    int choice;
    cout<<"\nDisplaying alll items";
    cout<<"\n***********************************";
    cout<<"\n***********************************";
    cout<<"\n***                             ***";
    cout<<"\n***          1. Men             ***";
    cout<<"\n***          2. Women           ***";
    cout<<"\n***          3. Boys            ***";
    cout<<"\n***          4. Girls           ***";
    cout<<"\n***          5. Main Menu       ***";
    cout<<"\n***          6. Exit            ***";
    cout<<"\n***                             ***";
    cout<<"\n***********************************";
    cout<<"\n***********************************\n";

    cin>>choice;
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
        cout<<"\nWrong choice.. please Enter a correct choice ";
        displayItems();
        break;
    }
}

void SignIn()
{
    char uName[30], pass[20];

    cout<<"\nWelcome to Sign In \n\n";

    cout<<"Enter UserName = ";
    cin>>uName;

    cout<<"Enter Password = ";
    cin>>pass;

    if (UserSignIn(uName, pass) == 1)
    {
        cout<<"\nSign In successFull";
        signedIn = 1;
        displayChangedMainMenu();
    }
    else
    {
        cout<<"\nSign In Not successFull";
        SignIn();
    }
}
void SignUp()
{
    cout<<"\nWelcome to Sign Up ";

    struct shoppingUser user;

    fflush(stdin);
    cout<<"\nEnter Name = ";
    gets(user.name);

    cout<<"\nEnter Mobile Number = ";
    cin>>user.mobileNumber;

    fflush(stdin);
    cout<<"\nEnter Address = ";
    gets(user.Address);

    cout<<"Enter Email Address = ";
    cin>>user.emailAddress;

    cout<<"Enter UserName = ";
    cin>>user.userName;

    cout<<"Enter Password = ";
    cin>>user.password;

    if (checkUser(user.userName) == 1)
    {
        cout<<"User Exist ";
        cout<<"\nGoing back to main menu";
        displayMainMenu();
    }
    else
    {

        FILE *fp;

        fp = fopen("Accounts.dat", "a");

        if (fp == NULL)
        {
            cout<<"\nError opened file\n";
            exit(1);
        }

        fwrite(&user, sizeof(struct shoppingUser), 1, fp);

        if (fwrite != 0)
        {
            cout<<"Sign Up Successfull !\n";
            void displayMainMenu();
        }

        else
            cout<<"error writing file !\n";

        // close file
        fclose(fp);
    }
}
void ContactUs()
{
    cout<<"\nContact Information";
}
void exitProgram()
{
    cout<<"\nBye Loser ........";
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
        cout<<"\nError opening file\n";
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
        cout<<"\nError opening file\n";
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
        cout<<"\nMens Section";

    if (x == 2)
        cout<<"\nWomens Section";

    if (x == 3)
        cout<<"\nBoys Section";

    if (x == 4)
        cout<<"\nGirls Section";
} 