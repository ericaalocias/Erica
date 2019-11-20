#include<stdio.h>
void main()
{
int st_da,en_da,co_num,boo_id,boo_hr,ser_char,total_bill=0,diff;
scanf("%d %d %d %d %d %d %d %d",&st_da,&en_da,&co_num,&boo_id,&boo_hr,&ser_char,&total_bill);

char add[20] ,book_id[20],book_on[31],boo_type[20],pass_st[20],car_type[20];
scanf("%s %s %s %s %s %s %s", &add[20] ,&book_id[20],&book_on[31],&boo_type[20],&pass_st[20],&car_type[20]);

diff=((en_da)-(st_da))*24;
if (diff>boo_hr)
{
total_bill=(diff-boo_hr)*400+total_bill;
}
if (boo_type=="Out Station")
{
total_bill=total_bill+400;
}
if (boo_hr>10)
{
total_bill=total_bill+ser_cha;
}
if (pass_st=="yes" and boo_type=="Out Station")
{
total_bill=total_bill-600;
}
printf(total_bill);
