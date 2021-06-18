/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** random
*/

#include <stdlib.h>
#include <stdio.h>

static int srand_gen_helper(FILE *in)
{
    unsigned int seed;

    if (!in)
        return (-1);
    if (fread(&seed, sizeof(seed), 1, in) == 1) {
        fclose(in);
        srand(seed);
        return (0);
    }
    fclose(in);
    return (-1);
}

int srand_gen(void)
{
    if (!srand_gen_helper(fopen("/dev/urandom", "r")))
        return (0);
    if (!srand_gen_helper(fopen("/dev/arandom", "r")))
        return (0);
    if (!srand_gen_helper(fopen("/dev/random", "r")))
        return (0);
    return (-1);
}