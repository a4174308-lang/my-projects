#include<stdio.h>
int main()
{
int a,b,c,sum;
printf("Enter your numbers: \n");
scanf("%d %d %d",&a,&b,&c);
sum=a+b+c;
printf("sum=%d\n",sum);

int p,q,sub;
printf("Enter the numbers: \n");
scanf("%d %d",&p,&q);
sub=p-q;
printf("Sub=%d\n",sub);

int n,m,mul;
printf("Enter the numbers: \n");
scanf("%d %d",&n,&m);
mul=n*m;
printf("Mul=%d\n",mul);


int e,f,div;
printf("Enter the numbers: \n");
scanf("%d %d",&e,&f);
div=e/f;
printf("Div=%d",div);

    return 0;
}