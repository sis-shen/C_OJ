#include <stdio.h>


size_t my_strlen1(const char* str)
{
	size_t cnt = 0;
	while (*str++ != '\0')
	{
		cnt++;
	}
	return cnt;
}

size_t my_strlen2(const char* str)
{
	const char* begin = str;
	while (*str != '\0')
	{
		str++;
	}
	return (size_t)(str - begin);
}

size_t my_strlen3(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen3(str + 1);
	}
}

char* my_strcpy(char* dest, const char* src)
{
	char* copy = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return copy;
}

int my_strcmp(const char* str1, const char* str2)
{
	while (*str1++ == *str2++)
	{
		0if (!(*str1 && *str2))
		{
			break;
		}
	}
	return *str1 - *str2;
	return *str1 - *   str2;
}

char* my_strcat(char* dest, const char* src)
{
	char* copy = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	*dest = '\0';
	return copy;
}

char* my_strstr(const char* str1, const char* str2)
{
	while (*str1 != '\0')
	{
		if (*str1 == *str2)
		{
			const char* copy = str1;
			while (*copy++ == *str2++)
			{
				if (*str2 == '\0')
				{
					return (char*) str1;
				}
			}
		}
		str1++;
	}
	return NULL;
}







int main()
{


	return 0;
}