/*
Sample Input
3
3
1 3 2
4
4 3 2 1
2
2 1
Sample Output
Optimal train swapping takes 1 swaps.
Optimal train swapping takes 6 swaps.
Optimal train swapping takes 1 swaps.
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n1;
	cin>>n1; //��� �׽�Ʈ �Ұ��� �Է�; 
	while(n1--)
	{
		int n2=0;
		cin>>n2; //� �Է����� �Է�; 
		int save[n2]={0};
		for(int i=0;i<n2;i++)
		{
			cin>>save[i]; //�� �Է�; 
		}
		int count=0;
		for(int i=0;i<n2;i++)
		{
			for(int j=i;j<n2;j++)
			{
				if(save[i]>save[j])
				{
					int temp; //�ٲܶ����� Ƚ�� ���ϱ�; 
					temp=save[i];
					save[i]=save[j];
					save[j]=temp;
					count++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<count<<" swap."<<endl;	
	}
return 0;
}

