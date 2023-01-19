#include <stdio.h>
#include <string.h>

int roll_no,i;
float tm,pm,marks[5];
char sub[5][40],course[40],name[30],remark[20];

void input()
{
   puts("\nEnter Name and Roll no and course:");
   scanf("%d%s%s",name,&roll_no,&course);

   for(i=0;i<5;i++)
   {
       puts("Enter Subject name and Marks:");
       scanf("%d%f",sub[i],&marks);
   }
}
float t_marks()
{
    tm=0;
    for(i=0;i<5;i++)
    tm=tm+marks[i];
    return tm;
}
float percentage()
{
    pm=t_marks()/5;
    return pm;
}
void remarks()
{
    if(pm>=90)
    strcpy(remark,"Excellent");
    if(pm>=75)
    strcpy(remark,"Very good");
    if(pm>=60)
    strcpy(remark,"Good");
    if(pm>=45)
    strcpy(remark,"Average");
    else
    strcpy(remark,"Fail");

    
}
void mark_sheet()
{
    puts("\nMarksheet-2022");
    puts("**************");

    printf("Roll no:%d\nName:%s\nCourse:%s",roll_no,name,course);

    puts("Subject name\tMarks");
    for(i=0;i<=4;i++)
    printf("%s\t\t\t\t%f",sub[i],marks[i]);

    printf("\nTotal marks:%f\nPercentage:%fRemark:%s\n",tm,pm,remark);
    puts("Thanks");

}

void main()
{
    input();
    percentage();
    remarks();
    mark_sheet();
}