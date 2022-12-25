// Online C compiler to run C program online
#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>


int main() {
    printf("\n");
    printf("\n");
    printf("\t\t\t======*VACCINE REGISTRATION PORTAL\n");
    printf("------------------------------------\n");
    
    printf("\n");
    printf("\n");
    printf("Enter your operation choice:\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t1)Vaccine Registration\n");
    printf("\t\t\t2)Search Your Profile\n");
    
    int choice;
    printf("\n");
    printf("\n");
    printf("Enter your choice below to continue:\n");
    scanf("%d", &choice);
    printf("\n");
    
    switch(choice)
    {
        case 1:
        {
            printf("\t\tVaccine Registration\n");
            printf("\t\t1)Identity Verification\n");
            printf("1)Citizenship Card \n");
            printf("2)Student Card \n");
            printf("3)Others \n");
            
            int choose;
            printf("Choose your operation:\n");
            scanf("%d", &choose);
            printf("\n");
            
            switch (choose)
            {
                case 1:
                {
                    printf("\t\t\t1)Citizenship Card \n");
                    break;
                }
                case 2:
                {
                    printf("\t\t\t2)Student Card \n");
                    break;
                }
                case 3:
                {
                    printf("\t\t\t3)Others \n");
                    break;
                }
                default:
                {
                    printf("Enter valid choice!!!\n");
                    break;
                }
            }
            break;
        }
        case 2:
            {
                printf("\t\t\tSearch Your Profile\n");
                break;
            }
        default:
        {
            printf("Enter valid choice!!!\n");
            break;
        }
    }
    
    
    
    
    
    
    
    


    return 0;
}
