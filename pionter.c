#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int main()
//{
//	char* p = "abcdef";
//	//将字符串的地址传给p，此时字符串看作字符串常量；属于一种特殊情况定义；
//	printf("%s\n",p);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 }; 
//	int arr3[] = { 3,4,5,6 };
//	int* parr[] = { arr1,arr2,arr3 };
//	for (int  i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", * (parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	char* arr[5];      //char*为数组的元素类型
//	char* (*pa)[5] = &arr;    //*说明pa是指针，pa是指针变量的名字，[5]说明pa指向的数组是5个元素的，
//                            //char*表示为pa指向的数组的元素类型
//	return 0;
//}
//
//
//void print1(int arr[2][3], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < x; i++)
//	{
//		for ( j = 0; j < y; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[3],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			printf("%d ", *(*(p+i)+j));
//		}
//		printf("\n");
//	}
//
//}
//
//
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	//print1(arr,2,3);
//	print2(arr,2,3);
//
//	return 0;
//}


//int ADD(int x, int y) 
//{
//	return x + y;
//
//}
//
//int main()
//{
//	int (*pa)(int, int) = ADD;// 函数指针
//	printf("%d ",(*pa)(2, 3));
//	return 0;
//}


//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1.Add     2.Sub    *****\n");
//	printf("*****3.Mul     4.Div    *****\n");
//	printf("*****5.Xor     0.Exit   *****\n");
//	printf("*****************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//转移表作用，连接函数和字符；
//	do
//	{
//		menu();
//		printf("check one ->:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("input two number->:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("exit\n");
//			return 0;
//		}
//		else
//		{
//			printf("error\n");
//		}
//	} while (input);
//	return 0;
//}

#include<stdlib.h>
#include<string.h>

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;//由void *类型地址，转换为int * ；类型地址，再进行解引用，可以避免类型错误；
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,7,5,6};
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int sz1 = sizeof(s) / sizeof(s[0]);
//	//qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	qsort(s,sz1,sizeof(s[0]), cmp_stu_by_name);
//	/*for (size_t i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}*/
//	for (size_t i = 0; i < sz1; i++)
//	{
//		printf("%s ",s[i].name);
//		printf("%d \n", s[i].age);
//
//	}
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void swap(char *buf1,char * buf2,int width)
//{
//	for (size_t i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bobble_sort(void *base,int sz,int width,int (*cmp)(void *e1,void *e2))
//{
//	for (size_t i = 0; i < sz-1; i++)
//	{
//		for (size_t j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base+j*width,(char*)base + (j +1)* width)>0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//	
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,7,5,6 };
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int sz1 = sizeof(s) / sizeof(s[0]);
//	//bobble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//	bobble_sort(s, sz1, sizeof(s[0]), cmp_stu_by_age);
//	/*for (size_t i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}*/
//	for (size_t i = 0; i < sz1; i++)
//	{
//		printf("%s ",s[i].name);
//		printf("%d \n", s[i].age);
//
//	}
//	return 0;
//}

#include<string.h>
#include<assert.h>
//void reverse(char *str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left<right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[255] = { 0 };
//	gets_s(arr, 255);
//	reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}

#include<math.h>

//int main()
//{
//	for (size_t i = 0; i <= 10000; i++)
//	{
//		//确定位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		//计算每一位的n次方之和 sum
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//比较i和sum
//		if (sum==i)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上半部分
//	for (size_t i = 0; i < line; i++)
//	{
//		//打印空格
//		for (size_t j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印**
//		for (size_t j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (size_t i = 0; i < line-1; i++)
//	{
//		for (size_t j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印**
//		for (size_t j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=:%d \n", total);
//	return 0;
//}

//void print(int arr[],int  sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move (int arr[], int  sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr,sz);
//	return 0;
//}


//int main()
//{
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i==j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i-1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		//111
//		for (int k = 0; k < 10 - i; k++)
//		{
//			printf(" ");
//		}
//		for (int  j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for ( killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k < len);
//	reverse(arr, arr + k - 1);//逆序左边部分
//	reverse(arr + k, arr + len - 1);//逆序右边部分
//	reverse(arr, arr + len - 1);//逆序整体
//}
//
//int main()
//{
//	char arr[10] = "abcdefg";
//	int k = 0;
//	printf("input string->:");
//	scanf("%s", &arr);
//	printf("input numb->:");
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//int is_left_move(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(arr1, arr1, len1);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//
//int main()
//{
//	char arr1[30] = "abcedf";
//	char arr2[] = "bcedfa";
//	int ret = is_left_move(arr1, arr2);
//	if (ret==1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while ((x <= *px - 1) && (y >= 0))
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	int k = 3;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret==1)
//	{
//		printf("find!!\n");
//		printf("location:%d %d\n", x, y);
//	}
//	else
//	{
//		printf("can not find!\n");
//	}
//	return 0;
//}

//int my_strcmp(const char* str1, char* str2)
//{
//	assert(str1 && str2);
//	while (*str1==*str2)
//	{
//		if (*str1=='\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	char* p1 = "abce";
//	char* p2 = "abce";
//	int ret = my_strcmp(p1, p2);
//	printf("%d \n", ret);
//	return 0;
//}


//char * my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* start =(char *) p1;
//	if (!*p2)
//	{
//		return (char*)p1;
//	}
//	while (*start)
//	{
//		s1 = start;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return start;
//		}
//		start++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* p1 = "abcedddcabbb";
//	char* p2 = "ddc";
//	char* ret = my_strstr(p1, p2);
//	if (ret==NULL)
//	{
//		printf("not find!\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	char arr[] = "192.168@13/56";
//	char p[] = ".@/";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret=strtok(arr,p);ret!=NULL;ret=strtok(NULL,p) )
//	//strtok函数返回地址由ret接受，strtok查询分隔符后将该分隔符修改为'\0',如果无法找到分割符，返回NULL；
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		//des和src是void*类型，想要操作的时候，无法判断类型，又知道字节大小，所以可以根据字节大小调整地址位移
//		//为了和num字节数匹配，将dest和src的指针类型转换为char*，刚好一个字节一个num数值；
//		++(char *)dest;
//		//dest和src的指针类型无法++。先进行转换，在进行前置++，实现地址移动；
//		++(char*)src;
//	}
//	return ret;
//}
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"zhangsan",20},{"lisi",25} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	//memcpy(arr2, arr1, sizeof(arr1));
//	//memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1+1, 8);//可以使用地址偏移，截取数组一段元素；
//	return 0;
//}

//void* my_memmove(char* dest, char* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;//src从前开始移动
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);//src从后开始移动
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	my_memmove(arr1+3, arr1 + 2, 12);
//
//	return 0;
//}

//int main()
//{
//	char arr[10] = "";
//	memset(arr, '*', 10);
//	return 0;
//}