#include <stdio.h>
int main()//我是萌新，轻喷，求指教
{//很清新，很通俗易懂吧!
   int n,a1,a2,b1,b2,c1,c2,a,b,c,z;
   scanf("%d",&n);//n是需要的数量
   scanf("%d %d",&a1,&a2);//a1是数量，a2是价格
   scanf("%d %d",&b1,&b2);
   scanf("%d %d",&c1,&c2);
   a=n/a1;a1=n%a1==0?a:a+1;a=a1*a2;//第一和第二表达式求至少需要买的铅笔包数，第三给表达式表示总共需要的价格
   b=n/b1;b1=n%b1==0?b:b+1;b=b1*b2;//同上
   c=n/c1;c1=n%c1==0?c:c+1;c=c1*c2;//同上
   if(a<b&&a<c)z=a;//取最省钱的方案，赋值给z
   if(b<a&&b<c)z=b;
   if(c<b&&c<a)z=c;
   printf("%d\n",z);
   return 0;
}
