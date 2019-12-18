#include <stdio.h>
#include "txtfind.h"
#include <string.h>

int getline1(char *s)
{
    char c = getchar();
    int i = 0;
    while (c != '\n' && c != EOF)
    {

        *(s + i) = c;
        i++;
        c = getchar();
    }
    *(s + i) = '\0';
    if (c == EOF)
    {
        return EOF;
    }
    else
        return 1;
}

int getword(char w[])
{
    char c = getchar();
    int i = 0;
    while (c!='\n'&&c!=' '&&c!='\t' &&c!= EOF)
    {
        *(w+i)=c;
        i++;
        c=getchar();
    }
    *(w+i)='\0';
    if(c==EOF)
    {
        return EOF;
    }
    else
        return 1;
}

int substring(char *r, char *s)
{
    int M = strlen(s);
    int N = strlen(r);

    for (int i = 0; i <= N - M; i++)
    {
        int j;

        for (j = 0; j < M; j++)
            if (*(r + i + j) != *(s + j))
                break;

        if (j == M)
            return 1;
    }

    return EOF;
}

void print_lines(char *arr)
{
    char s[LINE];
    while (getline1(s) != EOF)
    {
        if ((substring(s, arr) == 1))
        {
            printf("%s\n", s);
        }
    }
}
int similar(char *word, char *arr,int n)
{
    if(strcmp(word,arr)==0)
    {
        return 1;
    }
    int counter=0;
    int i=0;
    int j=0;
    while(*(arr + i)!='\0' || *(word + j) != '\0')
    {
        if (*(arr + i) == *(word + j))
        {
            i++;
            j++;
        }
        else
        {
            j++;
            counter++;
        }
    }
    if (counter > n)
    {
        return 0;
        ;
    }
    else
    {
        return 1;
    }
}

void print_similar_words(char *arr)
{
    char word[WORD];
    while (getword(word)!=EOF)
    {
        if (similar(word,arr,1))
        {
            printf("%s\n",word);
        }
    }
}