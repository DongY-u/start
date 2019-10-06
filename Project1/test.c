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
		printf("很遗憾，找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
 }*/
int main()
{
	int k = 3;
	char password[20] = {0};
	char input[20];
	printf("请输入密码:<");
	for (k = 0;k < 3; k++)
	{
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码输入正确，成功登录/n");
			break;
		}
		else {
			printf("密码输入错误，请重新输入/n");
		}
	}
	if (k == 3)
	{
		printf("三次输错密码，退出程序/n");
	}
	return 0;
}