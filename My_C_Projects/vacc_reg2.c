#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int main()
{
printf("\n");
printf("=======*Vaccine Registration Portal*=======\n");
printf("----------------------------------------------\n");
printf("\n");
printf("\n");
printf("\t\t\tSelect your operation choice: \n");
printf("\n");
printf("\t\t1)Register\n");
printf("\t\t2)Search Your Profile: \n");
printf("\n");
printf("\n");
int choice;
printf("\t\t\tEnter your choice here: \n");
scanf("%d", &choice);
switch (choice)
{
case 1:
{
printf("Register\n ");
printf("\n");
printf("\t\t\tHow do you want to register: \n");
printf("\t\t\t--------------------------------\n");
printf("\n");
printf("\t\t1)Using citizenship ID\n");
printf("\t\t2)Using student ID\n");
printf("\t\t3)Others\n");
 }
int choose;
float ID[20];
float stID[20];
char others[20];
float other_docu[20];
printf("\t\t\tChoose your registration method:\n");
scanf("%d", &choose);
switch (choose)
{
case 1:
{
printf("\t\t\tEnter your citizenship ID:\n ");
scanf("%f", ID);
//printf("Confirm your citizenship ID: ");
printf("\t\t\tYou are successfully registered ");
}
break;
case 2:
{
printf("\t\t\tEnter student ID:\n ");
scanf("%f", stID);
//printf("Confirm your citizenship ID: ");
printf("\t\t\tYou are successfully registered ");
}
break;
case 3:
{
printf("\t\t\tRegister using other national documents:\n ");
printf("\n");
printf("Enter the name of other registration document(s):\n ");
scanf("%s", others);
printf("Enter your %s number:\n ", others);
scanf("%f", other_docu);
printf("\t\t\tYou are successfully registered ");
}
}
break;
}
int profsrch;
float ID[20];
float stID[20];
char others[20];
float other_docu[20];
printf("\t\t\tHow do you want to search Your Profile:\n ");
printf("\n");
printf("\t\t1)Using citizenship ID\n");
printf("\t\t2)Using student ID\n");
printf("\t\t3)Others\n");
printf("Enter your profile search choice here\n ");
scanf("%d", &profsrch);
switch (profsrch)
{
case 1:
{
printf("\n");
printf("Enter citizenship ID: \n");
scanf("%d", ID);
printf("Profile found, you are registered!!\n ");
}
case 2:
{
printf("\n");
printf("Enter student ID: \n");
scanf("%d", stID);
printf("Profile found, you are registered!!\n ");
}
case 3:
{
printf("\n");
printf("Enter name of other document(s) to search your profile:\n ");
scanf("%s", others);
printf("Enter your %s number:\n ", others);
scanf("%f", other_docu);
printf("Profile found, you are registered!!\n ");
}
break;
default:
{
printf("Please enter valid choice!!!!\n ");
}
}
}
