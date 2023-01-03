#include <stdio.h>
int main()
{
	
char ch;
char *ptr_ch;
ch = 'A';
printf("ch: %p,%d,%c\n", &ch,ch,ch);
ptr_ch = &ch;
*ptr_ch = 'B';
printf("*ptr_ch => %d\n", *ptr_ch);

/**
int flt_num = 123.45;
int* ptr = &flt_num;
int** d_ptr;
**d = & *ptr;
**d_ptr = 543.22;
printf("value of flt_num: %d\n", flt_num);
printf("value of flt_num: %d\n",*ptr);
printf("value of flt_num: %d\n",**d_ptr);
*\
return 0;
}
	
