• memset - Функция memset заполняет первые n байт области памяти, на которую указывает аргумент destination, символом, код которого указывается аргументом c.

• bzero - Функция memset заполняет первые n байт области памяти, на которую указывает аргумент destination, символом \0.

• memcpy - Функция memcpy копирует n байт из массива (области памяти), на который указывает аргумент source, в массив (область памяти), на который указывает аргумент destination. Если массивы перекрываются, результат копирования будет не определен.

• memccpy - Функция memcpy копирует данные из массива (области памяти), на который указывает аргумент source, в массив (область памяти), на который указывает аргумент destination пока не встретится символ, код которого соответствует указанному в аргументе c или пока не будет скопировано n байт данных. 
Если массивы перекрываются, результат копирования будет не определен.

• memmove - Функция memmove копирует n байт из массива (области памяти), на который указывает аргумент source, в массив (область памяти), на который указывает аргумент destination. При этом массивы (области памяти) могут пересекаться.

• memchr - Функция memchr ищет вхождение в массив (область памяти) символа, код которого задан аргументом c, сравнивая каждый байт массива (области памяти) определенный как unsigned char с кодом искомого символа. Если искомый символ найден, то возвращается адрес найденного символа и сравнение завершается. Если, после проверки n байтов, искомый символ не найден, то сравнение прекращается и функция возвращает NULL.

• memcmp - Функция memcmp побайтно сравнивает два массива (области памяти), на которые указывают аргументы arr1 и arr2. Каждый байт массива определяется типом unsigned char. Сравнение продолжается, пока не будут проверено n байт или пока не встретятся отличающиеся байты.

• strlen - Функция strlen вычисляет количество символов в строке до первого вхождения символа конца строки. При этом символ конца строки не входит в подсчитанное количество символов.

• strdup - Функция strdup дублирует строку, на которую указывает аргумент str. Память под дубликат строки выделяется с помощью функции malloc, и по окончанию работы с дубликатом должна быть очищена с помощью функции free.

• strcpy - Функция strcpy копирует данные из строки, на которую указывает аргумент source, в строку, на которую указывает аргумент destination, пока не встретится символ конца строки (нулевой символ). Копирование производится вместе с символом конца строки. 
Если строки перекрываются, результат копирования будет не определен.

• strncpy - Функция strncpy копирует данные из строки, на которую указывает аргумент source, в строку на который указывает аргумент destination, пока не встретится символ конца строки (нулевой символ) или количество скопированных символов не достигнет величины указанной в аргументе n. При этом символ конца строки не копируется. 
Если в аргументе n указана величина большая, чем длинна строки, т.е. символ конца строки '\000' встретился раньше, чем было скопировано n символов, то в массив, на который указывает аргумент destination, дозаписывается столько нулевых символов, чтобы общая длина записанной строки достигла величины указанной в аргументе n. 
Если строки перекрываются, результат копирования будет не определен.

• strcat - Функция strcat добавляет в строку, на которую указывает аргумент destination, строку, на которую указывает аргумент append. Символ конца строки помещается в конце объединенных строк. 
Если строки перекрываются, результат объединения будет не определен.

• strncat - Функция strncat добавляет в строку, на которую указывает аргумент destination, строку, на которую указывает аргумент append, пока не встретится символ конца строки или пока не будет добавлено n символов. 
Символ конца строки помещается в конце объединенных строк. 
Если строки перекрываются, результат объединения будет не определен.

• strlcat - делает то же самое, что и strncat, но возвращает только длину получившейся строки.

• strchr - Функция strchr ищет первое вхождения символа, код которого указан в аргументе ch, в строке, на которую указывает аргумент str.

• strrchr - Функция strchr ищет последнее вхождения символа, код которого указан в аргументе ch, в строке, на которую указывает аргумент str.

• strstr - Функция strstr ищет первое вхождение строки (за исключением признак конца строки), на которую указывает аргумент src2, в строку , на которую указывает аргумент src1. Если строка src2 имеет нулевую длину, то функция вернет указатель на начало строки src1.

• strnstr - то же самое, что и strstr, но только определенное количество символов с начала.

• strcmp - Функция побайтно сравнивает коды символов двух строк, на которые указывают аргументы функции. Сравнение продолжается до встречи первого отличающегося символа или пока не будут проверены все символы строк. 
Если все символы строк совпали, то возвращается 0. 
Если при сравнении встретились отличающиеся символы, то сравнение прекращается и возвращается отрицательное или положительное число, в зависимости от того больше или меньше код символа строки str1, кода символа строки str2 на той же позиции (см. возвращаемые значения). 
Если строки разной длины, то возвращается положительное число, если строка str1 длиннее строки str2, или отрицательное число, если строка str2 длиннее строки str1.

• strncmp - Функция побайтно сравнивает коды символов двух строк, на которые указывают аргументы функции. 
Сравнение прекращается если встретились отличающиеся символы. При этом возвращается отрицательное или положительное число (см. возвращаемые значения). 
Если были проверены n символов или обе сравниваемые строки закончились, и отличий не было, то сравнение прекращается и возвращается ноль.

• atoi - Функция возвращает число - результат преобразование строки, если в начале строки содержится число. Если в начале строки стоит символ не являющейся цифрой, то функци возвращает ноль.
• isalpha
• isdigit• isalnum• isascii• isprint• toupper• tolower