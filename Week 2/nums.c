// nums.c

#include <stdio.h>
#include <limits.h> //�ִ� & �ּڰ� �� �� ���

int main(void) {

	//char					1����Ʈ		(����)
	char ch = 'A';
	printf("[char]\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX); //limit.h�� ���
	printf("Min: %d\n", CHAR_MIN);

	//signed short int		2����Ʈ		(����)
	signed short int sshort = 1234;
	printf("\n[signed short int]\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); 
	printf("Min: %d\n", SHRT_MIN);

	//unsigned short int	2����Ʈ		(����)
	unsigned short int ushort = 1234U;
	printf("\n[unsigned short int]\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX); 

	//signed int	4����Ʈ		(����)
	signed int sint = 12345;
	printf("\n[signed int]\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);
	printf("Min: %d\n", INT_MIN);

	//long�� �ٸ� �ü������ �ٸ� ũ���̴�.
	//���� 4����Ʈ�ε� Linux/Unix/Mac������ 8����Ʈ�̴�.
	//Windows���� long long �ϸ� 8����Ʈ ����� �� �ִ�.

	//unsigned int		4����Ʈ		(����)
	unsigned int uint = 12345U;
	printf("\n[unsigned int]\n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX);

	//signed long int		4����Ʈ		(����)
	signed long int slong = 123456789L;
	printf("\n[signed long int]\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX);
	printf("Min: %d\n", LONG_MIN);

	//unsigned long int		4����Ʈ		(����)
	unsigned long int ulong = 123456789UL;
	printf("\n[unsigned long int]\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX);

	//float (�׻� ��ȣ ����)	4����Ʈ		(�Ǽ�)
	float f = 123.456f;
	printf("\n[float]\n");
	printf("Value: %f\n", f);
	//printf("Max: %d\n", FLT_MAX);
	//printf("Min: %d\n", FLT_MIN);

	//double (�׻� ��ȣ ����)	8����Ʈ		(�Ǽ�)
	double d = 123456.7890123f;
	printf("\n[double]\n");
	printf("Value: %.3f\n", d);
	//printf("Max: %d\n", DBL_MAX);
	//printf("Min: %d\n", DBL_MIN);

	return 0;
}