#ifndef main_h
#define main_h

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _putchar(char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
