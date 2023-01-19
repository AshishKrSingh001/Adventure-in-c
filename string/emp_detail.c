#include <stdio.h>
int emp_id;
char name[30],post[30];
float b_salary,hra,da,ma,pf,fa,gs,ns,ta;
void _input(int id,char nm[],char p[],float b)
{
    emp_id=id;
    strcpy(name,nm);
    strcpy(post,p);
    b_salary=b;

    // printf("Enter employee id,empolyee name,employee post,and his basic salary:");
    // sacnf("%d%s%s%f",&id,nm,p,&b);
}
float find_gross()
{
    if(b_salary>=20000)
    {
        hra=b_salary*40/100;
        da=b_salary*90/100;
        ta=b_salary*30/100;
        ma=b_salary*15/100;
        pf=b_salary*10/100;
    }

    else if(b_salary>=10000)
    {
        hra=b_salary*30/100;
        da=b_salary*80/100;
        ta=b_salary*20/100;
        ma=b_salary*10/100;
        pf=b_salary*10/100;
    }
    else
    {
        hra=b_salary*20/100;
        da=b_salary*70/100;
        ta=b_salary*15/100;
        ma=b_salary*10/100;
        pf=b_salary*10/100;
    }
    gs=pf+hra+da+fa+ma+b_salary;
    return gs;
}
float net_salary()
{
    ns=find_gross()-pf;
    return ns;
}
void generate_salary_slip()
{
    printf("\nSalary slip of month nov\n");
    printf("**************************");
    printf("\nEmployee id=%d\nName=%s\npost=%s\nBasic salary=%.2f\nHRA=%.2f\nDA=%.2f\nTA=%.2f\nPF=%.2f\nMA=%.2f\nGross salary=%.2f\nNet salary=%.2f\n",emp_id,name,post,b_salary,hra,da,ta,pf,ma,find_gross(),net_salary());
    
}

void main()
{
    _input(101,"Ashish","Manager",20000.00);
    generate_salary_slip();
    puts("\nDONE");
}