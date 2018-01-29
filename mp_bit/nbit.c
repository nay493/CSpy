#include<stdio.h>

int main()
{

union emp{
int ph;
char ch[4];
};

union emp e1;
//e1.ph=228;
e1.ph=0x11100100;

// If lsb byte stored in lower address then little-endian system else big endian
printf("ch[0]=%x\t&ch[0]=%x\n",e1.ch[0],&e1.ch[0]);
printf("ch[1]=%x\t&ch[1]=%x\n",e1.ch[1],&e1.ch[1]);
printf("ch[2]=%x\t&ch[2]=%x\n",e1.ch[2],&e1.ch[2]);
printf("ch[3]=%x\t&ch[3]=%x\n",e1.ch[3],&e1.ch[3]);

// To Tell if OS is 32 bit or 64-bit ==> if o/p = 4 then 32 bit else if 8 then
// 64 bit

printf("sizeof(void *)=%d\n",sizeof(void *));

return 0;
}
