/*
** EPITECH PROJECT, 2019
** paul.fermey@epitech.eu
** File description:
** converts a string to an int
*/

int check_overflow(int nb, int to_check, char c, int min)
{
    if (nb == 214748364 && c == '8' && min > 0)
            return (84);
    else if (nb / 10 != to_check && nb != -2147483648)
        return (84);
    return (0);
}

int my_getnbr(char const *str)
{
    int min = 1;
    int nb = 0;
    int to_check;
    int i;

    for (i = 0; str[i] == '+' || str[i] == '-'; i++)
        if (str [i] == '-')
            min *= -1;
    for (int j = i; str[j] <= '9' && str[j] >= '0'; j++) {
        to_check = nb;
        nb = nb * 10 + (str[j] - 48);
        if (check_overflow(nb, to_check, str[j + 1], min) == 84)
            return (84);
    }
    return (nb * min);
}
