#ifndef STRING_H
#define STRING_H
int Strlen(char str[]);
void Strcat(char dest[], char src[]);
void Substring(char str[], char sub[], int start, int end);
void Strcpy(char copy[], char original[]);
int Strcmp(char s1[], char s2[]);
void Strrev(char str[]);
void Strinsert(char str[], char insert[], int pos);
void Strdelete(char content[], int start, int len);
void Strtrim(char text[]);
void Strreplace(char str[], char old[], char new[]);
#endif // MYSTRING_H
