#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void menuController();
void StartQuiz();
void runQuiz(char name[20]);
void DisplayResult(char name[20] , int marks);


int main()
{

    char choice;

    menuController();

    printf("\nYour choice is  ");
    scanf("%d",&choice);


     if(choice == 1)
        {
            system("cls");
            StartQuiz();

        }
     else if (choice == 2)
        {
            exit(0);
        }
     else
        {
            system("cls");
            printf("\n\n\t\tnInvalid Entry BYE BYE :computer:");

        }
    return 0;
}

void menuController()
{
    system("cls");

    printf("\n\t - - - - - - -- - - -- - - - -- - - -- - - - -- - - - - - - - - - -- ");
    printf("\n\t - - - --  - - -- - - -- - - - - -- - - - -- - - - - - -- - - - - -- ");
    printf("\n\n\t\t Welcome to Simple Quiz Game \n\n");
    printf("\n\n\n\t Your Options");
    printf("\n\t - - - -- - - - - - - -- - - - ");
    printf("\n\t - - - -- - - - - - - -- - - - ");
    printf("\n\t _____________________________");
    printf("\n\n\t\t 1)  Start The Quiz." );
    printf("\n\n\t\t 2)  Exit. \n\n\n");
}

void StartQuiz()
{
    system("cls");
    char name[20];
    char ch;
    int m=0;
            printf("\n\t - - - - - - -- - - -- - - - -- - - -- - - - -- - - - - - - - - - -- ");
            printf("\n\t - - - --  - - -- - - -- - - - - -- - - - -- - - - - - -- - - - - -- ");
            printf("\n\n\t\t Welcome to Simple Quiz Game \n\n");

            printf("\n\n\n\n\t Player Name :   ");
            scanf("%s",&name);
            printf("\n\n\tReady (Y//N) :   ");
            scanf("%c",&ch);
    ch = toupper (getch());
    if (ch == 'Y')
    {
        printf("\n\n\n");
        runQuiz(name);

       // while(ch == 'Y')
        //{
          //  DisplayResult(name,m);
        //}
    }


}

void runQuiz(char name[20])
{
int j,b[10],d=0;
printf("\t\t\t\t|------------------------|");
printf("\n\t\t\t\t|   Welcome To C Quiz    |");
printf("\n\t\t\t\t|------------------------|");
printf("\n\n---------------------------------------------\n---------------------------------------------\n---------------------------------------------\n");
printf("\n |There are 10 Questions| ");
printf("\n---------------------------------------------\n---------------------------------------------\n\n\n\n ");
printf(" PRESS ENTER TO CONTINUE :>\n\n\n\n\n");
system("PAUSE");

{
system("cls");

for(j=0;j<=10;j++)
  switch(j)
   {

   case 0:
        printf("--------------------------------\n--------------------------------\n ");
        printf("Question Number : %d\n",j+1);
        printf("Question Category : Easy\n\n\n\n\n");
        printf("What is the another name of language C.\n\n\n1) PHP        2) JAVA\n3) OOPS       4) C\n\n");
       scanf("%d",&b[j]);
       if(b[j]==3)
       {
       d=d+1;
       printf("Correct\n\n\n\n");
       system("PAUSE");
       }
       else
       {
       printf("Not Correct\n\n");
       printf("Answer=3\n\n\n");
       system("PAUSE");
       }
       break;
  case 1:
      system("cls");
       printf("--------------------------------\n--------------------------------\n ");
       printf("Question Number : %d\n",j+1);
       printf("Question Category : Easy\n\n\n\n\n");
       printf("What is Data hinding?\n\n\n1) It is related with hinding internal objects details\n2) It is related with showing internal objects details\n3) It is related with data types\n4) None\n\n");
       scanf("%d",&b[j]);
       if(b[j]==1)
       {
       d=d+1;
       printf("Correct\n\n\n");
       system("PAUSE");
       }
       else
       {
       printf("Not Correct\n\n");
       printf("Answer=1\n\n\n\n");
       system("PAUSE");
       }
       break;
   case 2:
       system("cls");
        printf("--------------------------------\n--------------------------------\n ");
        printf("Question Number : %d\n",j+1);
        printf("Question Category : Easy\n\n\n\n\n");
        printf("What is class in C ? \n1) When you defines a class,you defines a blueprint for a data type\n2) When you defines a class, you make get more functional initially. \n3) When you defines a class, you define the logic.\n4) When you defines a class, you make debugging\n\n");
       scanf("%d",&b[j]);
       if(b[j]==1)
       {
       d=d+1;
       printf("Correct\n\n\n\n\n\n\n");
       system("PAUSE");
       }
       else
       {
       printf("Not Correct\n\n");
       printf("Answer=1\n\n\n\n\n\n\n");
       system("PAUSE");
       }
       break;

  case 3:
      system("cls");
        printf("--------------------------------\n--------------------------------\n ");
        printf("Question Number : %d\n",j+1);
        printf("Question Category : Easy\n\n\n\n\n");
        printf("What is object in C ? \n1) Object is part of syntex of a class.\n2) Object is datatype of a class. \n3) Object is an instance of a class. \n4) Object is function of a class.\n");
       scanf("%d",&b[j]);
       if(b[j]==3)
       {
       d=d+1;
       printf("Correct\n\n\n\n\n\n\n");
       system("PAUSE");
       }
       else
       {
       printf("Not Correct\n\n");
       printf("Answer=3\n\n\n\n\n\n");
       system("PAUSE");
       }
       break;
  case 4:
      system("cls");
        printf("--------------------------------\n--------------------------------\n ");
        printf("Question Number : %d\n",j+1);
        printf("Question Category : Easy\n\n\n\n");
        printf("What is purpose of abstract class ? \n1) to provide help with database connectivity. \n2) to provide data input to other classes. \n3) to provide security to other classes. \n4) to provide an appropriate base class from which other classes can inherit. \n");
       scanf("%d",&b[j]);
       if(b[j]==4)
       {
       d=d+1;
       printf("Correct\n\n\n\n\n\n");
       system("PAUSE");
       }
       else
       {
       printf("Not Correct\n\n");
       printf("Answer=4\n\n\n\n\n\n\n");
       system("PAUSE");
       }
       break;
  case 5:
      system("cls");
        printf("--------------------------------\n--------------------------------\n ");
        printf("Question Number : %d\n",j+1);
        printf("Question Category : Easy\n\n\n\n");
        printf("Classes that can be used to instantiate objects are called concrete classes.\n\n1) True       2) False\n");
       scanf("%d",&b[j]);
       if(b[j]==1)
       {
       d=d+1;
       printf("Correct\n\n\n\n\n\n\n");
     system("PAUSE");
       }
       else
       {
       printf("Not Correct\n");
       printf("Answer=1\n\n\n\n\n");
       system("PAUSE");
       }
       break;
  case 6:
      system("cls");
        printf("--------------------------------\n--------------------------------\n ");
        printf("Question Number : %d\n",j+1);
        printf("Question Category : Medium\n\n\n\n");
        printf("What is default visibility mode for members of classes in C?\n\n1) Private       2) Public\n3) Protected     4) Depends\n");
       scanf("%d",&b[j]);
       if(b[j]==1)
       {
       d=d+1;
       printf("Correct\n\n\n\n\n");
       system("PAUSE");
       }
       else
       {
       printf("Not Correct\n\n");
       printf("Answer=1\n\n\n\n\n");
       system("PAUSE");
       }
       break;
  case 7:
      system("cls");
        printf("--------------------------------\n--------------------------------\n ");
        printf("Question Number : %d\n",j+1);
        printf("Question Category : Medium\n\n\n\n");
        printf("Which is more memory efficient ?\n\n1) Structure       2) Union\n3) Both            4) Depends on programmer\n");
       scanf("%d",&b[j]);
       if(b[j]==2)
       {
       d=d+1;
       printf("Correct\n\n\n\n\n\n");
       system("PAUSE");
       }
       else
       {
       printf("Not Correct\n\n");
       printf("Answer=2\n\n\n\n\n\n");
       system("PAUSE");
       }
       break;
  case 8:
      system("cls");
        printf("--------------------------------\n--------------------------------\n ");
        printf("Question Number : %d\n",j+1);
        printf("Question Category : Medium\n\n\n\n");
        printf("Which among following is not a valid visibility mode in C program? \n\n1) Private\n2) Public\n3) Protected\n4) Limited\n");
       scanf("%d",&b[j]);
       if(b[j]==4)
       {
       d=d+1;
       printf("Correct\n\n\n\n\n");
       system("PAUSE");
       }
       else
       {
       printf("Not Correct\n\n");
       printf("Answer=4\n\n\n\n\n");
       system("PAUSE");
       }
       break;
  case 9:
        system("cls");
        printf("--------------------------------\n--------------------------------\n ");
        printf("Question Number : %d\n",j+1);
        printf("Question Category : Medium\n\n\n\n");
        printf("Even if we defines a function in a class,then also we  need to declare it first.\n\n1) True       2) False\n");
       scanf("%d",&b[j]);
       if(b[j]==2)
       {
       d=d+1;
       printf("Correct\n\n\n\n\n\n");
       system("PAUSE");
       }
       else
       {
       printf("Not Correct\n\n");
       printf("Answer=2\n\n\n\n\n");
       system("PAUSE");
       }
       break;

    }


DisplayResult(name,d);

}

}



void DisplayResult(char name[20],int marks)
{


    int totalMarks = 20;
    printf("\n\tCongratulation :  %s.\nYou have completed the quiz.",name);
    printf("\n\n\nYou have Scored %d out of %d",marks,totalMarks);
    printf("\n\n\tCategory Wise Marks ...");
    printf("\n\n\t\tEasy : %d",marks);
    printf("\n\t\tMedium : %d",marks);
    printf("\n\t\tHard : %d",marks);
    printf("\n\n\tYour Final Total Score : %d out of %d",marks,totalMarks);
    puts("\n\nNEXT PLAY?(Y/N)");
    if (toupper(getch())=='Y')
        StartQuiz();
}
