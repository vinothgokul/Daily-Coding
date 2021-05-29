#include<stdio.h>

#define MERGE(x, y) x##y

int main() {
   printf("%d", MERGE(10, 20));
}