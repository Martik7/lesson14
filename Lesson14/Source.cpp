#include <Windows.h>
#include <clocale>
#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

char* my_strstr(char* s1, char* s2) {
	char *p1 = s1;
	char *p2 = s2;
	int k = 0;
	while (*s1++ != '\0') {
		p1 = s1;
		p2 = s2;
		if (*p1 == *p2)
		{
			for(int i = 1; i < strlen(s1); i++)
				if (s1[i] == s2[i])
					k++;
			if (k == (strlen(s2) - 1)) return p1;
		}
	}
}

char *strchr1(const char *s, int c)
{
	while (*s != (char)c) {
		if (!*s++) {
			return NULL;
		}
	}
	return (char *)s;
}

//char *my_strstr1(const char *haystack, const char *needle)
//{
//	const char *temp, *c;
//	temp = needle;
//	while (*haystack)
//	{
//		c = haystack;
//		while (*(haystack++) == *(needle++))
//		{
//			if (!(*needle))
//			{
//				return (char*)c;
//			}
//			if (!(*haystack))
//			{
//				return NULL;
//			}
//		}
//		needle = temp;
//	}
//	return NULL;
//}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*char str1[100];
	cin.getline(str1, 100);

	char* p;
	char str2[100];
	cin >> str2;
	p = strstr(str1, str2);
	if(p)
	cout << p << endl;*/

	/*char str1[100];
	cin.getline(str1, 100);

	char *p;

	char str2[100];
	cin >> str2;
	p = my_strstr(str1, str2);
	if(p!=0)
	cout << p << endl;*/

	/*char str[10] = "125";
	cout << atoi(str) * 2 << endl;*/

	/*int a = 125;
	char str[10];
	cout <<_itoa_s(a, str, 2) << endl;
	cout << str << endl;*/

	/*int a;
	char str[10];
	cin >> a;
	_itoa_s(a, str, 10);
	cout << strchr1(str, '2') << endl;*/
	/*cout << str << endl;
	cout << strchr(str, '2') << endl;*/

	char str[50] = "Hello, World!";
	char str1[] = "Programm";

	////16
	//strcat_s(str, str1);
	//_strupr_s(str);
	////17
	//_strlwr_s(str);
	


	cout << strncmp(str, str1, 1) << endl;
	cout << str << endl;

	system("pause");
	return 0;
}