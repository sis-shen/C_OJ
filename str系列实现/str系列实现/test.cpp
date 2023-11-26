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
		if (!(*str1 && *str2))
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


char* my_strncpy(char* dest, const char* src, size_t num)
{
	char* ret = dest;
	while (num &&  (*dest++ = *src++))
	{
		num--;
	}
	while (num)
	{
		*dest++ = '\0';
		num--;
	}
	return  ret;
}

char* my_strncat(char* dest, const char* src, size_t  num)
{
	char* copy = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (num && (*dest++ = *src++))
	{
		num--;
	}
	*dest = '\0';
	return copy;
}

void* my_memcpy(void* dest, void* src, size_t num)
{
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

void* my_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	if (dest <= src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

int main()
{
	char str[] = "I have a knife";
	char str2[50] = { 0 };
	my_strcpy(str2, str);
	my_memmove(str2 + 9, str2 + 7,7);
	printf(str2);
	return 0;
}