#ifndef __STRING_H__
#define __STRING_H__

#include <sys/cdefs.h>

#include <stddef.h>

__BEGIN_DECLS

void *memcpy (void *, const void *, size_t);
void *memmove (void *, const void *, size_t);
void *memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void *memset (void *, int, size_t);
char *strcat(char *,const char *);
char *strncat (char *, const char *, size_t);
char * strchr (const char *, int);
char * strrchr (const char *, int);
int strcmp (const char *, const char *);
int strncmp (const char *, const char *, size_t);
int strcoll (const char *, const char *);
char *strcpy (char *, const char *);
char *strncpy (char *, const char *, size_t);
char *strerror (int);
size_t strlen (const char *);
size_t strspn (const char *, const char *);
size_t strcspn (const char *, const char *);
char *strpbrk (const char*, const char *);
char *strstr (const char *, const char *);
char *strtok (char *, const char *);
size_t strxfrm (char *, const char *, size_t);

__END_DECLS

#endif /* __STRING_H__ */
