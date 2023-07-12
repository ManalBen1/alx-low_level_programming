#include <stdlib.h>

int get_word_count(char *str);
int get_word_length(char *str);
void free_2d_array(char **arr, int rows);

char **strtow(char *str)
{
int i, j, k, len, words;
char **matrix;

if (str == NULL || *str == '\0')
return (NULL);

words = get_word_count(str);
if (words == 0)
return (NULL);

matrix = malloc((words + 1) * sizeof(char *));
if (matrix == NULL)
return (NULL);

for (i = 0; i < words; i++)
{
while (*str == ' ')
str++;
len = get_word_length(str);
matrix[i] = malloc((len + 1) * sizeof(char));
if (matrix[i] == NULL)
{
free_2d_array(matrix, i);
return (NULL);
}
for (j = 0, k = 0; j < len; j++, k++, str++)
{
matrix[i][k] = *str;
if (*(str + 1) == ' ' || *(str + 1) == '\0')
{
matrix[i][k + 1] = '\0';
str++;
break;
}
}
}
matrix[i] = NULL;
return (matrix);
}

int get_word_count(char *str)
{
int count = 0, i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}
return (count);
}

int get_word_length(char *str)
{
int length = 0;

while (*str != ' ' && *str != '\0')
{
length++;
str++;
}
return (length);
}

void free_2d_array(char **arr, int rows)
{
int i;

for (i = 0; i < rows; i++)
free(arr[i]);
free(arr);
}
