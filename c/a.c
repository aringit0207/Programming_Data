/*#include <stdio.h>
int print(char str[][10])
{
	for(int i=0; i<7; i++)
	{
		for(int j=0; j<9; j++)
		{
			if(i==0||j==0||i==6||i==8)
			{
				printf("*");
			}
			else if(i==1)
			{
				printf(" %s *", *str);
				break;
			}
			else if(i==2)
			{
				printf(" %s *", *(str+1));
				break;
			}
			else if(i==3)
			{
				printf(" %s    *", *(str+2));
				break;
			}
			else if(i==4)
			{
				printf(" %s     *", *(str+3));
				break;
			}
			else if(i==5)
			{
				printf(" %s *", *(str+4));
				break;
			}
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	char str[][10]={"Hello", "World", "of", "c", "print"};
	print(str);
	return 0;
}

// QUEs 3
#include <stdio.h>
int pro(int n)
{
	if (n == 1)
	{
		return 3;
	}
	return 3 * pro(n - 1);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", pro(n));
	return 0;
} 

// QUES 5
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n], arr1[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Second smallest element is %d\n", arr[1]);
	printf("Second largest element is %d", arr[n - 2]);
	return 0;
} 

#include <stdio.h>
int main()
{
	int sum[50];
	for(int person = 10; person<=22; person++)
	{
		if(person%2==0)
		sum[person]=person%4;
		else
		{
		sum[person]=person%3;}
		printf("%d", sum[person]);
	}
	return 0;
} 

#include <stdio.h>
#include <string.h>
int main()
{
	char str1[]="aaabcdaabbbaaa";
	char str2[]="ab";
	char str3[2];
	int len=strlen(str1);
	int a=0, b=0;
	for(int i=0; i<len-1; i++)
	{
		int k=0;
		for(int j=i; j<i+2; j++)
		{
			str3[k]=str1[j];
			k++;
		}
		str3[k]='\0';
		printf("%s\n", str3); 
		if(str2[0]==str3[0]&&str2[1]==str3[1])
		{
			a+=1;
		}
		if(str2[0]==str3[1]&&str2[1]==str3[0])
		{
			b+=1;
		}
	}
	printf("%d\n", a);
	printf("%d", a);
	return 0;
} */

#include <stdio.h>
int main()
{
	int matrix[3][3], transpose[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			transpose[i][j]=matrix[j][i];
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}

	return 0;
}