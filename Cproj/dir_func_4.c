#include "Header_for_C.h"

char** make_text(unsigned short* len)
{
    char** words, *srting;
    unsigned short qauntity = 0, length, size = 1;
    words = (char**)malloc(size * sizeof(char*));
    do {
        srting = st_find_st_input("string", &length);
        if (strcmp(TERM_WORD, srting) == 0 || '\n' == srting[0]) {
            break;
        }
        if (qauntity >= size) 
        {
            size++;
            words = (char**)realloc(words, size * sizeof(char*));
        }
        words[qauntity] = (char*)malloc(length + 1);
        strcpy(words[qauntity], srting);
        qauntity++;
    } while (1);
    *len = qauntity;
    return words;
}

char* break_chain(char* string, char* code, bool* sign)
{
    unsigned short i = 1, j = 0;
    for (; string[i] != '\0'; i++)
    {
        if (string[i - 1] == '.' && string[i] != '.') j = i;
        if (string[i - 1] != '.' && string[i] == '.' && j != 0)
        {
            if ((int)string[j] > 48 && (int)string[j] < 58 && (float)(int)string[j] / 2.0 != 0 && *sign)
            {
                code = (char*)malloc((i - j + 1) * sizeof(char));
                unsigned short k = 0;
                for(unsigned short ch = j; ch < i; ch++)
                {
                    code[k] = string[ch]; k++;
                }
                code[k] = '\0';
                *sign = false;
            }
            for (; j < i; j++)
            {
                printf("%c", string[j]);
            }
            printf("\n");
        }
    }
    return code;
}

unsigned short find_even(char** strings, unsigned short qauntity)
{
    char* code, * have_changes; bool sign = true;
    unsigned short num = 0;
    code = (char*)malloc(sizeof(char));
    have_changes = code;
    printf("After processing:\n");
    for (unsigned short i = 0; i < qauntity; i++)
    {
        code = break_chain(strings[i], code, &sign);
        if (have_changes != code)
        {
            num = i;
            have_changes = code;
        }
    }
    if (num == 0)
    {
        return 0;
    }
    printf("Searched string: \n%s \n", code);
    return num;
}

int main()
{	
	setlocale(LC_ALL, "Rus");
	setlocale(LC_ALL, "Eng");
	char** strings; unsigned short qauntity, num;
    strings = make_text(&qauntity);
    if (qauntity==0)
    {
        printf("You did not enter the strings\n");
        return 0;
    }
    printf("Entered strings:\n");
	for (unsigned short i = 0; i < qauntity; i++)
	{
		printf("Sring %d: %s\n", i+1, strings[i]);
	}
    num = find_even(strings, qauntity);
    if (num == 0)
    {
        printf("There are not any searched strings\n");
        return 0;
    }
    printf("last string:\n");
    for (unsigned short i = 0; strings[num][i] != '\0'; i++)
    {
        if ((int)strings[num][i] > 48 && (int)strings[num][i] < 58)
            printf("%c", (char)((int)strings[num][i] + 17));
        else
            printf("%c", strings[num][i]);
    }
    printf("\n\n");
	return 0;
}
