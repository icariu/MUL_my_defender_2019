/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
void my_putchar(char letter);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str , int size);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
int	my_str_isalpha(char *str);
int	my_str_islower(char *str);
int	my_str_isnum(char *str);
int	my_str_isprintable(char *str);
int	my_str_isupper(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, const char *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strncat(char *dest, const char *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char **my_str_to_word_array(char const *str);
int my_show_word_array(char * const *tab);
char *my_strdup(char const *src);
int nb_prime(int nb);
void split_and_display(int n);
float my_put_fnbr(float f, int precision);
unsigned int my_put_unbr(unsigned int u);
char *convert_to_hex(unsigned long int number);
int convert_to_octal(int number);
unsigned int convert_to_binary(unsigned int number);
char *convert_to_big_hex(int number);
char *my_itoa(int nb);
int my_char_isdigit(char c);

#endif /* !MY_H_ */
