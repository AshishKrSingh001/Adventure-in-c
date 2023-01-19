#include <stdio.h>
#include <string.h>
int rollno,i;
float marks[5],tm,pm;
char subject[5][40],course[40],name[30],remark[20];
void input()
{
printf("enter roll no,name and course");
scanf("%d%s%s",&rollno,name,course);
for(i=0;i<5;i++)

{
    printf("Enter subject name and markes");
    scanf("%s%f",subject[i],&marks[i]);
}
}
float find_total()
{
    tm=0;
    for(i=0;i<5;i++)
    {
        tm=tm+marks[i];
    }
    return(tm);
    
}
float find_percentage()
{
    pm=find_total();
    return(pm);
} 
void get_remark()
{
    if(pm>90)
    strcpy(remark,"Execllent");
    else if(pm>=75)
    strcpy(remark,"very good");
    else if(pm>=60)
    strcpy(remark,"very good");
    else if(pm>=45)
    strcpy(remark,"avrage");
    else 
    strcpy(remark,"fail");
}
void generate_marksheet()
{
    printf("marksheet_2022\n");
    printf("===========\n");
    printf("rollno=%d\n,name=%s\ncourse=%s\n",rollno,name,course);
    printf("subject name\t mark\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t\t%f\n",subject[i],marks[i]);
    }
    printf("total marks=%f\npercentage marks =%f\nremark=%s\n",tm,pm,remark);
    printf("thanks");
}
int main()
{
    input();
    find_percentage();
    get_remark();
    generate_marksheet();
    return 0;

}
