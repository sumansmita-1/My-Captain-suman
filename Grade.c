#include<studio.h>
main();
{
int n;
printf("Enter the value of n");
scanf("%d",&n);
printf("%d", n>85?"Grade A":(n>70?"Grade B":n>55?"Grade C":(n>40?"Grade D":"Grade F"))));
return 0;
}
