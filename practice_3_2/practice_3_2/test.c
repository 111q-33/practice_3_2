#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//int my_strlen(char *arr)
//{
//	if (*arr)
//		return my_strlen(arr + 1) + 1;
//	return 0;
//}
//char *my_strcpy(char *arr1,const char *arr2)
//{
//	char *ret = arr1;
//	while (*arr1 = *arr2)
//	{
//		arr1++;
//		arr2++;
//	}
//	return ret;
//}
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	while (*arr1==*arr2)
//	{
//		if (!*arr1)
//			return 0;
//		arr1++;
//		arr2++;
//	}
//	return *arr1 - *arr2;
//}
//char *my_strcat(char *arr1, const char* arr2)
//{
//	char *ret = arr1;
//	while (*arr1)
//	{
//		arr1++;
//	}
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
char* my_strstr(const char*arr1, const char* arr2)
{
	assert(arr1 && arr2);
	while (*arr1)
	{
		const char* s1 = arr1;
		const char* s2 = arr2;
		while (*s1 == *s2 && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (char*)s1;
		arr1++;
	}
	return NULL;
}
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "ef";
	if (my_strstr(arr1, arr2)!=NULL)
		printf("YES\n");
	else
		printf("NO\n");
	/*my_strcat(arr1, arr2);*/
	/*int n = my_strcmp(arr1, arr2);*/
	/*my_strcpy(arr1, arr2);*/
	/*int n = my_strlen(arr1);
	printf("%d\n", n);*/
	/*printf("%d\n", n);*/
	/*printf("%s\n", arr1);*/
	return 0;
}