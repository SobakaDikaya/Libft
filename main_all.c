#include <stdio.h>  //Для printf
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main (void) //MEMSET
{
	// Исходный массив
	unsigned char src[15]="1234567890";

	// Заполняем массив символом ‘1’
	ft_memset (src, '1', 10);

	// Вывод массива src на консоль
	printf ("src: %s\n",src);

	return 0;
}

int main (void) //BZERO
{
	// Исходный массив
	unsigned char src[15]="1234567890";

	// Заполняем массив символом ‘1’
	ft_bzero (src, 10);

	// Вывод массива src на консоль
	printf ("src: %s\n",src);

	return 0;
}

int main (void) //MEMCPY
{
	// Массив источник данных
	unsigned char src[10]="12345678";
	// Массив приемник данных
	unsigned char dst[10]="";

	// Копируем 6 байт из массива src в массив dst
	ft_memcpy (dst, src, 7);

	// Вывод массива dst на консоль
	printf ("dst: %s\n",dst);

	return 0;
}



int main (void) //MECCPY
{
    // Массив источник данных
    unsigned char src[15]="1234567890";

    // Массив приемник данных
    unsigned char dst[15]="";

    // Копируем данные из массива src в массив dst
    ft_memccpy (dst, src,'5', 10);

    // Вывод массива dst на консоль
    printf ("dst: %s\n",dst);

    return 0;
}


int main (void) //MEMMOVE
{
    // Исходный массив данных
    unsigned char src[11]="1234567890";
	unsigned char src1[11]="1234567890";
    printf ("src old: %s\n",src);

    // Копируем 3 байт
    memmove (&src1[4], &src1[3], 3); //Оригинал
	printf ("   memmove src new: %s\n",src1);
	
	ft_memmove (&src[4], &src[3], 3);
	printf ("ft_memmove src new: %s\n",src);

    return 0;
}
int main (void) //MEMCHR
{
	// Исходный массив
	unsigned char src[15]="1234567890";
	// Переменная, в которую будет сохранен указатель
	// на искомый символ.
	char *sym;

	// Вывод исходного массива
	printf ("src old: %s\n",src);

	// Поиск требуемого символа
	sym = ft_memchr (src, '5', 10);

	// Если требуемый символ найден, то заменяем его
	// на символ '!'
	if (sym != NULL)
		sym[0]='!';

	// Вывод исходного массива
	printf ("src new: %s\n",src);

	return 0;
}
int main (void)// MEMCMP
{
	char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
	char *s2 = "\xff\xaa\xde\x02";
	size_t size = 8;
	int i1 = memcmp(s1, s2, size);
	int i2 = ft_memcmp(s1, s2, size);

	if (memcmp (s1, s2, 8) == 0)
		printf("Области памяти идентичные.\n");
	else
		printf("Области памяти отличаются.\n");

	if (ft_memcmp (s1, s2, 8) == 0)
		printf("Области памяти идентичные.\n");
	else
		printf("Области памяти отличаются.\n");
	if (i1 == i2)
		printf("TEST_SUCCESS");
	else
		printf("TEST_FAILED");
}


int main (void) //STRLEN
{    
	// Массив с исходной строкой
	char str [11]="1";

	//Определение длины строки и вывод результата на консоль
	printf ("Длина строки «%s» - %d символов\n", str, ft_strlen (str) );

	return 0;
}

int main (void) //STRDUP
{    
	// Исходная строка
	char str [11]="0123456789";
	// Переменная, в которую будет помещен указатель на дубликат строки
	char *istr;

	// Дублирование строки
	istr = strdup (str);

	// Вывод дубликата на консоль
	printf ("Оригинал: %s\n", str);
	printf ("Дубликат: %s\n", istr);

	// Очищаем память, выделенную под дубликат
	free (istr);
	return 0;
}

int main (void) //STRCPY
{    
	// Массив источник данных
	char src[1024]="1234567890\0 fref";

	// Массив приемник данных
	char dst[1024]="";
	char dst1[1024]="";

	// Копируем строку из массива src в массив dst. Обратите внимание, 
	//что скопируется только строка «первая строка\0». 
	strcpy (dst, src);
	ft_strcpy (dst1, src);

	// Вывод массива src на консоль
	printf ("src: %s\n",src);

	// Вывод массива dst на консоль
	printf ("Оригинал dst: %s\n",dst);

	// Вывод массива dst1 на консоль
	printf ("Копия   dst1: %s\n",dst1);
	return 0;
}

int main (void) //STRNCPY
{    
    // Массив источник данных
    char src[10]="12345\0006789";

    // Массивы приемники данных
    char dst1[10]="1111111111";
    char dst2[10]="1111111111";

    // Счетчик
    int i;

    // Вывод массива src на консоль
    printf ("src:  ");
    for (i=0;i < 10;i++)
        printf (" %2d",(unsigned short) src[i]);
    printf ("\n ");

    // Копируем строку длиною не более трех символов из массива src в массив dst1. 
    ft_strncpy (dst1, src,3);

    // Вывод массива dst1 на консоль
    printf ("dst1: ");
    for (i=0;i<10;i++)
        printf (" %2d",(unsigned short) dst1[i]);
    printf ("\n");

    // Копируем строку длиною не более семи символов из массива src в массив dst2. 
    ft_strncpy (dst2, src,7);

    // Вывод массива dst2 на консоль
    printf ("dst2: ");
    for (i=0;i<10;i++)
        printf (" %2d",(unsigned short) dst2[i]);
    printf ("\n");

    return 0;
}

int main (void) //STRCAT
{    
	// Массив источник данных
	char app[1024]="вторая строка ";

	// Массив приемник данных
	char dst[1024]="первая строка";
	char dst1[1024]="первая строка";

	// Добавляем строку из массива src в массив dst. 
	strcat (dst, app);
	ft_strcat (dst1, app);
	// Вывод массива dst на консоль
	printf ("Оригинал: %s\n",dst);
	printf ("Копия:    %s\n",dst1);

	return 0;
}

int main (void) //STRNCAT
{    
    // Массивы в которые добавляется строка
    char src1[10]="000";
    char src2[10]="000";
    // Добавляемая строка
    char app[10]="12345";

    // Вывод добавляемой строки
    printf ("app:  %s\n",app);

    // Добавление строки app в строку src1, но не более трех символов
    strncat (src1, app,4);
    // Вывод результата
    printf ("Оригинал: %s\n",src1);

    // Добавление строки app в строку src2, но не более семи символов
    ft_strncat (src2, app,4);
    // Вывод результата
    printf ("Копия   : %s\n",src2);

    return 0;
}


int main(void) //STRLCAT
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

	__builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
	
	printf ("Оригинал: %lu\n", strlcat(buff1, str,max));
	printf ("Оригинал: %s\n", buff1);
	printf ("Копия   : %lu\n", ft_strlcat(buff2, str, max));
	printf ("Копия   : %s\n", buff2);
	if (!strcmp(buff1, buff2))
		printf("TEST_SUCCESS");
	else
		printf("TEST_FAILED");
	return 0;
}



int	main (void) //STRCHR
{    
    // Массив со строкой для поиска
    char str [11]="0123456789";
    // Код искомого символа
    int ch = '6';
    // Указатель на искомую переменную в строке,
    // по которой осуществляется поиск.
   char *ach;

    // Ищем символ ‘6’
    ach=strchr (str,ch);
	
    // Выводим результат на консоль
    if (ach==NULL)
        printf ("Оригинал: Символ в строке не найден\n");
    else
        printf ("Оригинал: Искомый символ в строке на позиции # %ld\n",ach-str+1);

	ach=ft_strchr (str,ch);

	if (ach==NULL)
        printf ("Копия:    Символ в строке не найден\n");
    else
        printf ("Копия:    Искомый символ в строке на позиции # %ld\n",ach-str+1);
    return 0;
}

int main (void) //STRRCHR
{    
	// Массив со строкой для поиска
	char str [11]="0163456769";
	// Код искомого символа
	int ch = '0';
	// Указатель на искомую переменную в строке,
	// по которой осуществляется поиск.
   char *ach;

	// Ищем символ ‘6’
	    ach=strrchr (str,ch);
	
    // Выводим результат на консоль
    if (ach==NULL)
        printf ("Оригинал: Символ в строке не найден\n");
    else
        printf ("Оригинал: Искомый символ в строке на позиции # %ld\n",ach-str+1);

	ach=ft_strrchr (str,ch);

	if (ach==NULL)
        printf ("Копия:    Символ в строке не найден\n");
    else
        printf ("Копия:    Искомый символ в строке на позиции # %ld\n",ach-str+1);

	return 0;
}


int main (void) //STRSTR
{    
	char str1 [11]="0123556355";
	char str2 [10]="345";
	char *istr;

	istr = strstr (str1,str2);
	if ( istr == NULL)
		printf ("Оригинал: Строка не найдена\n");
	else
		printf ("Оригинал: Искомая строка начинается с символа %ld\n",istr-str1+1);

	istr = ft_strstr (str1,str2);
	if ( istr == NULL)
		printf ("Копия:    Строка не найдена\n");
	else
		printf ("Копия:    Искомая строка начинается с символа %ld\n",istr-str1+1);

	return 0;
}

int main (void) //STRNSTR
{    
	char *s1 = "MZIRIB MZIRIBMZE 123";
	char *s2 = "MZIRIBMZE";
	char *istr;

	istr = strnstr(s1,s2, 10);
	if ( istr == NULL)
		printf ("Оригинал: Строка не найдена\n");
	else
		printf ("Оригинал: Искомая строка начинается с символа %ld\n",istr-s1+1);

	istr = ft_strnstr(s1,s2, 10);
	if ( istr == NULL)
		printf ("Копия:    Строка не найдена\n");
	else
		printf ("Копия:    Искомая строка начинается с символа %ld\n",istr-s1+1);

	size_t max = strlen(s2);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);

	if (i1 == i2)
		printf("TEST_SUCCESS");
	else
		printf("TEST_FAILED");

}


int main (void) //STRCMP
{    
	// Сравниваемые строки
	char str1[1024]="22347";
	char str2[1024]="12345";

	// Сравниваем две строки
	if (strcmp (str1, str2)==0)
		printf("Оригинал: Строки идентичны\n");
	else
		printf("Оригинал: Строки отличаются\n");

	if (ft_strcmp (str1, str2)==0)
		printf("Копия:    Строки идентичны\n");
	else
		printf("Копия:    Строки отличаются\n");

	return 0;
}

int main (void) //STRNCMP
{    
	// Сравниваемые строки
	char str1[1024]="12345678990";
	char str2[1024]="1233566890";

	// Сравниваем две строки
	if (strncmp (str1, str2, 5)==0)
		printf("Оригинал: Строки идентичны\n");
	else
		printf("Оригинал: Строки отличаются\n");

	if (ft_strncmp (str1, str2, 6)==0)
		printf("Копия:    Строки идентичны\n");
	else
		printf("Копия:    Строки отличаются\n");

	return 0;
}

int main (void)//ATOI
{   
	char *Str = "65р2.23brrt"; //Строка для преобразования
	int Num = 0;                //Переменная для записи результата

	//Преобразование строки в число типа int
	Num = atoi (Str);
	printf ("Оригинал: %d\n",Num);

	Num = ft_atoi (Str);
	printf ("Копия:    %d\n",Num);
	//Завершение работы программы
	return 0; 
} 

int			main(void) //ISALPHA
{
	char	c;

	c = '>';
	if (isalpha(c))
		printf("Оригинал: %c - буква\n", c);
	else
		printf("Оригинал: %c - не буква\n", c);

	if (ft_isalpha(c))
		printf("Копия:    %c - буква\n", c);
	else
		printf("Копия:    %c - не буква\n", c);
	return (0);
}

int			main(void) //ISDIGIT
{
	char	c;

	c = '9';
	if (isdigit(c))
		printf("Оригинал: %c - цифра\n", c);
	else
		printf("Оригинал: %c - не цифра\n", c);

	if (ft_isdigit(c))
		printf("Копия:    %c - цифра\n", c);
	else
		printf("Копия:    %c - не цифра\n", c);
	return (0);
}

int			main(void) //ISALNUM
{
	char	c;

	c = '.';
	if (isalnum(c))
		printf("Оригинал: %c - цифра или буква\n", c);
	else
		printf("Оригинал: %c - не цифра или буква\n", c);

	if (ft_isalnum(c))
		printf("Копия:    %c - цифра или буква\n", c);
	else
		printf("Копия:    %c - не цифра или буква\n", c);
	return (0);
}

int			main(void) //ISASCII
{
	char	c;

	c = (char)128;
	if (isascii(c))
		printf("Оригинал: %c - ascii\n", c);
	else
		printf("Оригинал: %c - не ascii\n", c);

	if (ft_isascii(c))
		printf("Копия:    %c - ascii\n", c);
	else
		printf("Копия:    %c - не ascii\n", c);
	return (0);
}

int			main(void) //ISPRINT
{
	char	c;

	c = 'f';
	if (isprint(c))
		printf("Оригинал: %c - печатный\n", c);
	else
		printf("Оригинал: %c - не печатный\n", c);

	if (ft_isprint(c))
		printf("Копия:    %c - печатный\n", c);
	else
		printf("Копия:    %c - не печатный\n", c);
	return (0);
}

int	main(void) //TOUPPER
{
	printf("Оригинал: %c\n", toupper('1'));
	printf("Копия:    %c\n", ft_toupper('1'));
}


int	main(void) //TOLOWER
{
	printf("Оригинал: %c\n", tolower('a'));
	printf("Копия:    %c\n", ft_tolower('a'));
}
