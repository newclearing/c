#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 10;
//	int b;
//	b=scanf("%d", &a);
//	printf("%d\n", a);
//
//	return 0;
//
//}

//int main()
//{
//	int a;
//	int b;
//	b=scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("%s", "所输入数字");
//		printf("%d", a);
//		printf("%s", "为奇数");
//	}
//	else
//	{
//		printf("%s", "所输入数字");
//		printf("%d", a);
//		printf("%s", "为偶数");
//	}
//}

//int main()
//{
//	int a = 1;
//	int i = 0;
//	/*for (i = 0; i <= 99; i++)
//	{
//		if (a % 2 == 1)
//				{
//					printf("%s", "所输入数字");
//					printf("%d", a);
//					printf("%s\n", "为奇数");
//				}
//		else
//				{
//					printf("%s", "所输入数字");
//					printf("%d", a);
//					printf("%s\n", "为偶数");
//				}
//		a++;
//	}*/
//	while (a<=99)
//	{
//		printf("%d\n", a);
//		a += 2;
//	}
//}

//int getnum(int a)
//{
//	int nsum = 1;
//	int i = 0;
//	for (i = 1; i <= a; i++)
//	{
//		nsum = nsum * i;
//	}
//	return nsum;
//}
//
//int main()
//{	
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	for (size_t i = 1; i <= a; i++)
//	{
//		sum =sum+getnum(i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	
//	int k = 4;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			right= mid-1;
//		}
//		else if (arr[mid]<k)
//			{
//			left = mid+1;
//			}
//		else
//		{
//			printf("找到数据k的下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//
//
//	return 0;
//}
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome!!" ;
//	char arr2[] = "#########" ;
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char psd[20] = { 0 };
//	for ( i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", psd);
//		if (strcmp(psd,"123456")==0)
//		{
//			printf("correct\n");
//			break;
//		}
//		else
//		{
//			printf("wrong psd\n");
//		}
//	}
//	if (i==3)
//	{
//		printf("wrong\n");
//	}
//	return 0;
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for ( j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 100; i < 201; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n个数:%d ", count);
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int cnt = 0;
//	for ( year = 2000; year < 2101; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			cnt++;
//			printf("%d ", year);
//		}
//	}
//	printf("\n个数:%d ", cnt);
//	return 0;
//}


//int binary_find(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入查询数字：");
//	scanf("%d", &k);
//	int ret=binary_find(arr, k, sz);
//	if (-1==ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了%d", k);
//		printf(",下标为：%d\n", ret);
//	}
//	return 0;
//}


//void add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int my_strlen(char* p)
//{
//	if (*p!='\0')
//	{
//		return 1 + my_strlen(p + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int len = my_strlen(arr);
//	printf("len=%d ", len);
//	return 0;
//}

//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		int temp = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,5,6,7,2,3,4,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d",b);
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d",&a);
//	int i = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1 )== 1)
//		{
//			count++; 
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}

//int my_strlen(char *str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//取首地址
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	//取第一个元素的地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	//取首地址，代表整个数组参与运算
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("%d \n",*(arr[i]));
//	}
//
//	return 0;
//}
//

//typedef struct stu
//{
//	char name[20];
//	int age;
//	char tele[20];
//	char sex[5];
//}sttu;
//
// struct stu1
//{
//	char name[20];
//	int age;
//	char tele[20];
//	char sex[5];
//};
//
//void print(sttu* ps)
//{
//	printf("姓名： %s\n", ps->name);
//	printf("年龄： %d\n", ps->age);
//	printf("电话： %s\n", ps->tele);
//	printf("性别： %s\n", ps->sex);
//}
//
//int main()
//{
//	struct stu1 s1 = {"代付良",23,"17730211969","男"};
//	sttu s2= { "代付良",23,"17730211969","男" };
//	print(&s1);
//	print(&s2);
//	
//
//	return 0;
//}
//
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

#include <assert.h>

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//
//}
//
//int main() 
//{
//	char arr1[] = "######";
//	char arr2[] = "hello";
//	//my_strcpy(arr1, arr2);
//	printf("%s\n",my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p==1)
//	{
//		printf("xiaodua\n");
//	}
//	else
//	{
//		printf("daduan\n");
//	}
//	return 0;
//}


//
//
//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n",p);
//	return 0;
//}




