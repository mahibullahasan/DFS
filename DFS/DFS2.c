#include<stdio.h>>
int main()
{

void DFS(int i)
{
int node i*p;
printf("n%d",i);
p=G[i];
visited[i]=1;
while(p!=NULL)
{
i=p->vertex;
if(!visited[i])
DFS(i);
p=p->next;
}
}
