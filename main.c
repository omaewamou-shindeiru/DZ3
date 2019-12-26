
#include <stdio.h>
#include <stdlib.h>

int main()
{
int node, edge, p;
printf("Enter the number of graph nodes: ");
scanf("%d",&node);
printf("Enter the number of graph edges: ");
scanf("%d",&edge);
p = 0.5*(node-1)*(node-2);
if (edge > p) {
printf ("Graph is connected");
}
if (edge <= p) {
printf ("Graph is not connected");
}
return 0;
}
