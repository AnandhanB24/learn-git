#include<iostream>
#include<stdlib.h>
using namespace std;

#define least(A,B) (A<B ? A:B)
int solution(int N, int start, int finish, int* Ticket_cost)
{
    int forward=0,backward=0,i;
    for(i = start; i< finish; i++)
    {
       forward += Ticket_cost[i];
    }
    i = start;
    while(finish!=i)
    {
        i--;
        if(i==0)
            i = N;
        backward += Ticket_cost[i];
    }
    printf("%d %d",forward, backward);
    return least(forward,backward);
    /*int forward=0,backward=0,i;
    for(i = start; i< stop; i++)
    {
       //cout<<cost[i]; 
       forward+= cost[i];
    }
    //cout<<endl;
    i = start;
    while(stop!=i)
    {
        i--;
        if(i==0)
            i = N;
        ///cout<<cost[i];
        backward += cost[i];
    }
    return least(forward,backward);*/
}
int main()
{
    int N, start, stop, i;
    cout<<"Total Tram stops are: "; cin>>N;
    cout<<"starting: "; cin>>start;
    cout<<"Stopping: "; cin>>stop;
    int *cost = (int *)malloc(sizeof(int)*N);
    for(i = start;i <= N; i++)
        cin>>cost[i];

    int out = solution(N, start, stop, cost); 
    cout<<"\nThe minimum cost is : "<<out;

return 0;
}