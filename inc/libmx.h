#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>
#include <string.h>


typedef struct s_list {
	void *data;
	struct s_list *next;
}   t_list;


int mx_count_words(char *str, char c);
void mx_foreach(int *arr, int size, void (*f)(int));
unsigned long mx_hex_to_nbr(char *hex);
char *mx_itoa(int number);
char *mx_nbr_to_hex(unsigned long nbr);
double mx_pow(double n, unsigned int pow);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(char *s);
int mx_sqrt(int x);
int mx_strcmp( char *s1,  char *s2);
int mx_strlen( char *s);
char *mx_strnew( int size);
int mx_binary_search(char **arr, int size, char *s, int *count);
char *mx_strcat(char *restrict s1,  char *restrict s2);
int mx_get_substr_index( char *str,  char *sub);
char *mx_strstr( char *haystack,  char *needle);
int mx_bubble_sort(char **arr, int size);
int mx_quicksort(char **arr, int left, int right);
void mx_swap_char(char *s1, char *s2);
void mx_print_strarr(char **arr,  char *delim);
void mx_str_reverse(char *s);
int mx_get_char_index( char *str, char c);
char *mx_strndup( char *s1, size_t n);
char *mx_strdup( char *str);
char *mx_strtrim( char *str);
char *mx_del_extra_spaces( char *str);
char *mx_strjoin( char *s1,  char *s2);
char *mx_file_to_str( char *file);
char *mx_replace_substr( char *str,  char *sub,  char *replace);
int mx_count_substr(char *str, char *sub);
char **mx_strsplit( char *s, char c);
t_list *mx_create_node(void *data);
int mx_list_size(t_list *list);
void mx_pop_back(t_list **head);
void mx_pop_front(t_list **head);
void mx_push_back(t_list **list, void *data);
void mx_push_front(t_list **list, void *data);
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));
char *mx_strcpy(char *dst,  char *src);
void mx_del_strarr(char ***arr);
void *mx_memcpy(void *restrict dst,  void *restrict src, size_t n);
void *mx_memccpy(void *restrict dst,  void *restrict src, int c, size_t n);
void *mx_memset(void *b, int c, size_t len);
int mx_memcmp( void *s1,  void *s2, size_t n);
void *mx_memrchr( void *s, int c, size_t n);
void *mx_memchr( void *s, int c, size_t n);
void *mx_memmem( void *big, size_t big_len,  void *little, size_t little_len);
void *mx_realloc(void *ptr, size_t size);
int mx_read_line(char **lineptr, int buf_size, char delim,  int fd);
void *mx_memmove(void *dst,  void *src, size_t len);
void mx_strdel(char **str);
char *mx_string_copy(char *str);

