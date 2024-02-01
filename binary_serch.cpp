#include<iostream>
using namespace std;
int main()
{
	int arr[5] = {1,22,3,5,4};
	for(int i=0;i<5;i++)
	{
		int temp = arr[i];
		int j = i - 1;
		while(temp <= arr[j] && j >= 0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
}
