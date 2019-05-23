void strcopy(char *s, char *t)
{
    while (*t++ = *s++);
}


int strlength(char *s)
{
    char *p = s;
    int i;
    while(*(p++) != '\0');
    return p-s;
}

int strcompare(char *s, char *t)
{
    for (;*s == *t; s++, t++)
        if (*s == '\0')
            return 0;
    return *s - *t;
}
