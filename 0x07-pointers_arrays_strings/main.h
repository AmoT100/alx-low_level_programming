#ifndef MAIN_H
#ifndef MAIN_H
char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char  *strstr(char *haystack, char *needle);
void print_cheeseboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
#endif
