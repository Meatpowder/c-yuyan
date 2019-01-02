#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

char *MyStrcpy(char *dst, const char *str);
char *MyStrcat(char *dst, const char *str);
char *MyStrstr(const char *dst, const char *str1);
char *MyStrchr(const char *string, char value);
int MyStrcmp(const char* s1, const char* s2);
char *MyMemcpy(char *dst, const char *src, int size);
char *MyMemmove(char *dst, const char *src, int size);
