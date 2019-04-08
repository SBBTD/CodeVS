#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void qSort(int* arr, int start, int end)
{
	if (start < end) {
		int left = start, right = end;
		int base = arr[left];
		while (left != right) {
			while (right > left && arr[right] >= base)right--;
			arr[left] = arr[right];
			while (right > left && arr[left] <= base)left++;
			arr[right] = arr[left];
		}
		arr[left] = base;
		qSort(arr, start, left - 1);
		qSort(arr, right + 1, end);
	}
}

int main()
{
	int a[50001];
	int n, m, f;
	scanf("%d", &n);
	while (n-- > 0) {
		scanf("%d", &m);
		for (int i = 1; i <= m; i++) {
			scanf("%d", &a[i]);
		}
		qSort(a, 1, m);
		if (m % 2)printf("%d ", f = a[(m + 1) / 2]);
		else printf("%d ", f = a[m / 2]);
		int sum = 0;
		for (int i = 1; i <= m; i++)sum += abs(f - a[i]);
		printf("%d\n", sum);
	}
	return 0;
}