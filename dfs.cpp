#include<iostream> 
#include<stack>

using namespace std;

int map[10][10], e;
bool d=true;
int v;
int t=0;


int* findneighbor(int a,int* pointer)
{

	
	int visited[v];
	for ( int i = 0; i < v; i++ ) {
      visited[i]= *(pointer + i);
   }
   	for(int i=e;i>0;i--)
	{	
		if(map[a][i]==1)
		{
			for(int j=0;j<v;j++)
			{
				if(visited[j] != i)
						t++;

			}
		}
	}
	int arr[t];
	for(int i=0;i<t;i++)
		arr[i]=-1;	
	int b=0;
	for(int i=e;i>0;i--)
	{	
			if(map[a][i]==1)
			{
				for(int j=0;j<v;j++)
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
	if (t ==0)
		d=false;
	else
		return(p);
}

int main()
{
	stack<int> stack;
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
    stack.push(s);
    while(! stack.empty() )
	{
    	int a = stack.top();
    	stack.pop();
    	visited[b]=a;
    	b++;
   		int* pointer= &visited[0];
   		int* p =findneighbor(a, pointer);

   		if (d == false)
   		{
   			visited[b]=stack.top();
   			stack.pop();
   			break;
   		}
   		else
   		{
   			char val=true;
   			int array[10];
   			int h=0;
   			while(! stack.empty() )
			{
   					array[h]=stack.top();
   					stack.pop();
   					h++;
   			}
   			for(;h>=0;h--)
   			{
   				stack.push(array[h]);	
   			}
   			for(int i=0;i<h;i++)
   			{
   				for(int j=0;j<h;j++)
   				{
   					if (*(p + i) != array[j])
   						val=true;
   					else
   						val=false;
   			    }
   			    if(val)
   					stack.push(*(p + i));
   			}
    	}
	}
    for(int k=0; k<v; k++)
    {
        cout<<visited[k];
    }
}








