# include <stdio.h>
 /*int binary_search(int arr[], int k, int sz)
{
	 int left = 0;
     int right = sz-1;
	while(left<=right)
{
		int mid = (left+right)/2;
		if(arr[mid] > k)
		{
			right = mid-1;
	}
		else if(arr[mid] < k)
		{
			left = mid+1;
		}
	else
		{
			return mid;
		}
	}
	
	return -1;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = 0;
ret = binary_search(arr, k, sz);
if(ret == -1)
	{
		printf("���ź����Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
 }*/
int main()
{
	int k = 3;
	char password[20] = {0};
	char input[20];
	printf("����������:<");
	for (k = 0;k < 3; k++)
	{
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("����������ȷ���ɹ���¼/n");
			break;
		}
		else {
			printf("���������������������/n");
		}
	}
	if (k == 3)
	{
		printf("����������룬�˳�����/n");
	}
	return 0;
}