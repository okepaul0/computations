#include<stdio.h>

void binary_search(int search, int a[], int n) {
  int first, middle, last;
    first = 0;
    last = n-1;
    middle = (first + last)/2 ;
    while (first <= last) {
    if (a[middle] < search)
      first = middle + 1;
    else if (a[middle] == search) {
      printf("%d\n",middle);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("null\n", search);

}

int main(){
    int search, n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    scanf("%d", &search);
    binary_search(search,a,n);
    return 0;
}