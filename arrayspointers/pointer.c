#include <stdlib.h>
#include <stdio.h>

//n should be int*
void passArray(int n[]){
  printf("  size of n: %lu\n",sizeof(n));
  printf("&n %p\n",&n);
  printf("n %p\n",n);
}
int main(){
  int ARR_SIZE = 10;
  int nums[ ARR_SIZE ];
  nums[0]= 0;
  printf("size of nums: %lu\n",sizeof(nums));
  printf("&nums %p\n",&nums);
  printf("nums %p\n",nums);
  passArray(nums);
  return 0;
}