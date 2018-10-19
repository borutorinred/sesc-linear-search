#include <stdio.h>

int main() {
int n, k;
scanf("%d%d", &n, &k);
int l = -1, r = -1;
for (int i = 0; i < n; i++) {
int tmp;
scanf("%d", &tmp);
if (tmp == k) {
r = i;
if (l == -1)
l = i;
}
}
printf("%d %d\n", l, r);
} 
