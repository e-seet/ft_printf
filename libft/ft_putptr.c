/*
// treat the memory address stored in p as an unsigned integer.
uintptr_t x = (uintptr_t)p;

buf[i + 2] = "0123456789abcdef"[(x >> ((sizeof(x) * 8 - 4 - i * 4)) & 0xf)];
void more_stuff(uint32_t value) {     
// Example value: 0x01020304

uint32_t byte1 = (value >> 24);           
// 0x01020304 >> 24 is 0x01 so no masking is necessary

uint32_t byte2 = (value >> 16) & 0xff;    
// 0x01020304 >> 16 is 0x0102 so we must mask to get 0x02

uint32_t byte3 = (value >> 8)  & 0xff;    
// 0x01020304 >> 8 is 0x010203 so we must mask to get 0x03
uint32_t byte4 = value & 0xff;            
// here we only mask, no shiftingis necessary
}
*/
#include "libft.h"

// print address of the pointer
void	ft_putptr(void *s, int *ptrnum)
{
	char		buf[2 + sizeof((uintptr_t)s) * 2];
	size_t		i;
	size_t		startindex;
	size_t		length;
	uintptr_t	x;

	x = (uintptr_t) s;
	if (x == 0)
	{
		write(1, "0x0", 3);
		*ptrnum = *ptrnum + 3;
		return;
	}
	i = 0;
	startindex = 2;
	buf[0] = '0';
	buf[1] = 'x';
	while (sizeof(x) * 2 > i)
	{
		buf[i + 2] = "0123456789abcdef"
		[(x >> ((sizeof(x) * 8 - 4 - i * 4)) & 0xf)];
		i++;
	}
	while (buf[startindex] == '0')
		startindex++;
	length = 2 + sizeof(x) * 2 - startindex;
	*ptrnum = *ptrnum + 2 + length;
	write(1, buf, 2);
	write(1, buf + startindex, length);
}
