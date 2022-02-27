#include <stdio.h>
void input_string(char *string)
{
    printf("Enter the word:\n");
    scanf("%s", string);
}
void input_substring(char *substring)
{
    printf("Enter the subword:\n");
    scanf("%s", substring);
}
int str_index(char *string, char *substring)
{
    int a = 0, b = 0, i, j = 0;
    for (i = 0; substring[i] != '\0'; i++)
        a++;
    for (i = 0; string[i] != '\0'; i++)
        b++;
    for (i = 0; string[i] != '\0'; i++)
    {
        j=0;
        while (string[i] == substring[j])
        {
            j++;
            i++;
                if (j == a)
            return i - j;
            if(string[i] != substring[j])
            i--;
        }
    }
}
void output(char *string, char *substring, int index)
{
    printf("The Index of %s in %s is %d\n", substring, string, index);
}
int main()
{
    int index;
    char string[25], substring[25];
    input_string(string);
    input_substring(substring);
    index = str_index(string, substring);
    output(string, substring, index);
    return 0;
}
