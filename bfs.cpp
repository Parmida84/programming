#include<iostream>

using namespace std;

int map[10][10], e;
bool d=true;
int v;

void quequeShift(int* pionter)
{
	int index=0;
	int queque[10];
	for ( int i = 0; i < 10; i++ ) {
      queque[i]= *(pionter + i);
   }	
   	for(int i=0;i<10;i++)
   	{
   		if (queque[i] ==100)
   		{
   			index=i;
   			break;
   		}
   	}
   	for(int i=0;i<index;i++)
   	{
		queqeu[i]=queque[i+1];
   	}
   	queque[index-1]=100;
}

int* findneighbor(int a,int* pointer)
{
	int arr[10];
	int b=0;
	int visited[v];
	for ( int i = 0; i < v; i++ ) {
      visited[i]= *(pointer + i);
   }
	for(int i=e;i>0;i--)
	{	
			if(map[a][i]==1)
			{
				for(int j=0;j<sizeof(visited);j++)
				{
					if(visited[j] != i)
					{
						arr[b]=i;
						b++;
					}
				}
			}
	}
	int* p=& arr[0];
	if (sizeof(arr) ==0)
		d=false;
	else
		return(p);
}

int main()
{
	int queque[10]={100,100,100,100,100,100,100,100,100,100};
    int  s, i,j;
    int b =0;
    cout <<"Enter no of vertices:";
    cin >> v;
    cout <<"Enter no of edges:";
    cin >> e;
    int visited[v];
    cout <<"\nEDGES \n";
    for(int k=1; k<=e; k++)
    {
        cin >>i>>j;
        map[i][j]=1;
        map[j][i]=1;
    }
    cout <<"Enter initial vertex to traverse from:";
    cin >>s;
    queque[0]= s;
    while( ??)
	{
    	int a = queque[0];
    	int* pointer= &queque[0];
    	quequeShift(pointer);
    	visited[b]=a;
    	b++;
   		int* pointer= &visited[0];
   		int* p =findneighbor(a, pointer);
   		if (d == false)
   		{
   			visited[b]= queque[0];
   			break;
   		else
   		{
   			for(int j=0;j<10;j++)
   			{
   				for(int i=0;i<10;i++)
   				{
   					if (queque[i] ==100)
   					{
   						int index=i;
   						break;
   					}
   				}
   				queque[index]=*(p + j);
   				visited[b]=*(p + j);
   				b++;
   			}
    	}
	}
    for(int k=0; k<v; k++)
    {
        cout<<visited[k];
    }
}
