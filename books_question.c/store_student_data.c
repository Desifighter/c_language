#include<stdio.h>
#include<string.h>
struct store_student_data
{
    char name[25];
    int rollnum;
    float cgpa;
};

int main(){
    struct store_student_data twelth_class[3];
    char* name2;   
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of student = ");
        scanf("%s",name2);
        strcpy(twelth_class[i].name,name2);
        printf("\nEnter roll no. ");
        scanf("%d",&twelth_class[i].rollnum);
        printf("\nresult = ");
        scanf("%f",&twelth_class[i].cgpa);
    }
    //twelth_class[0].name="juju";
    for (int i = 0,j=1; i < 3,j<=3; i++,j++)
    {
        printf("********************************%d******************************************\n",i+1);
        printf("(%d)Student name = %s\n",j,twelth_class[i].name);
        printf("(%d)Student roll no. = %d\n",j,twelth_class[i].rollnum);
        printf("(%d)Student result = %f\n",j,twelth_class[i].cgpa);

    }
    

return 0;
}