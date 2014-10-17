#include <stdio.h>
#include "ϣ������.h"
#include <stdlib.h>
#include <time.h>


void printArr(int *input,int num)
{
	int i=0;	
	for (i=0;i<num;i++)
	{
		printf("input[%d]=%d\n",i,input[i]);
	}

}
//ѡ������
void selectSort(int * input,int num)
{
	int i=0;
	int j=0;
	int min=0;
	int k=0;

	for(i=0;i<num-1;i++)
	{
		min=input[i];
		for(j=i+1;j<num;j++)
		{
			if(input[j]<min)
			{
				min=input[j];
				k=j;
			}
		}
		input[k]=input[i];
		input[i]=min;
	}
}

//ð������
void bubbleSort(int *input ,int num)
{
	int i=0;
	int j=0;
	int temp=0;

	for(i=0;i<num-1;i++)
		for(j=i+1;j<num;j++)
		{
			if(input[i]>input[j])
			{			
				temp=input[j];
				input[j]=input[i];
				input[i]=temp;
			}

		}

}
//��������
void insertSort(int *input,int num)
{
		int i=0;
		int j=0;
		int temp=0;
		
		for(i=1;i<num;i++)
		{
			temp=input[i];
			for(j=i-1;j>=0;j--)
			{
				if(input[j]>temp)
				{
					input[j+1]=input[j];					
				}else
				{
					break;
				}			
			}
			input[j + 1] = temp; 
		}
}
//��������
void quick_sort(int s[], int l, int r)
{
	if (l < r)
	{
		//Swap(s[l], s[(l + r) / 2]); //���м��������͵�һ�������� �μ�ע1
		int i = l, j = r, x = s[l];
		while (i < j)
		{
			while(i < j && s[j] >= x) // ���������ҵ�һ��С��x����
				j--;  
			if(i < j) 
				s[i++] = s[j];

			while(i < j && s[i] < x) // ���������ҵ�һ�����ڵ���x����
				i++;  
			if(i < j) 
				s[j--] = s[i];
		}
		s[i] = x;
		quick_sort(s, l, i - 1); // �ݹ���� 
		quick_sort(s, i + 1, r);
	}
}


int main()
{
	
	int input[5000]={4,6,32,23,5,2,5};
	int i=0;
	for(i=0;i<5000;i++)
	{
		input[i]=5000-i;
	}


	printf("before shell sort:\n");
	printArr(input,5000);
	quick_sort(input,0,5000);
	printf("after  shell sort:\n");
	printArr(input,5000);
	system("pause");

}

void shellSort(int *input,int num)
{
	int i=0;
	int j=0;
	int temp=0;
	int k=num;

	while(k>=1)
	{
		for(i=1;i<num;i++)
		{
			temp=input[i];
			for(j=i-1;j>=0;j=j-k)
			{
				if(input[j]>temp)
				{
					input[j+k]=input[j];					
				}else
				{
					break;
				}			
			}
			input[j + k] = temp; 
		}
		k=k/3;
	}
}

