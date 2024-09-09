void toto(char *s)
{
    int i = 0;
    while (s[i])
    {
        s[i] = ft_tolower((int)s[i]);
        i++;
    }
    
}
void toto2(unsigned int i, char *s)
{
    int j ;

    j = *s;
    
    if (i % 2 != 0)
    {
        *s = ft_tolower(j);
    }
}

int main()
{
    // Allocation de mémoire pour un entier

    char txt[] = "VOICI LE";
    
    ft_striteri(txt, toto2);
    ft_putstr(txt);
    return 0;
}