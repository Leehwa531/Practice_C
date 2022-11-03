
//���� 8-10
#include <stdio.h>

int main(void)
{
	int a[] = { 8, 2, 8, 1, 3 };
	int* p = a;

	int ary[][4] = { 5, 7, 6, 2, 7, 8, 1, 3 }; //���� 4�� ary�迭 ����
	int(*ptr)[4] = ary;			//���� 4�� �迭�� ����Ű�� ������
	//int *ptr[4] = ary;		//������ �迭

	printf("%2d, %2d\n", *(p + 1), *(p + 4));	// *(p + 1) = a[0] + 1 �̹Ƿ� a[1] = 2 �Ȱ��� *( p + 4 ) = a[4] = 3
	printf("%2d, %2d\m", p[0], p[4]);			// p[0] = 8, p[4] = 3
	printf("sizeof(a) = %d, sizeof(p) = %d\n", sizeof(a), sizeof(p));  //sizeof(a)�� a ��ü�� �迭��ũ��(20) �̰�, sizeof(p)�� p[0]�� ũ�⸦ ���ϴ� ���̹Ƿ� 4

	printf("%2d, %2d\n", **ary, **ptr++);		// ary�� ary[0][0]�� ���̹Ƿ� 5, ptr�� �Ȱ��� ptr[0][0]�� ���̹Ƿ� 5�� ��� �� ��, ptr�� ���������ڰ� �����Ƿ� ptr[0][1]�� �ȴ�.
	printf("%2d, %2d\n", **(ary + 1), **(ptr++));		//ary+1�� ary[0][1] *������ �ϳ��� �ּ��� ���� �ǰ� ** ������ �ΰ��� �� ���� ����ϹǷ� 7,���� ptr��  ptr[0][1]�̹Ƿ� �Ȱ��� �տ�ó�� 7�� ��µǰ� �� �� ptr[0][2]�� �ȴ�.
	ptr = ary;  //ptr �ּҸ� ptr[0][0]���� �ʱ�ȭ
	printf("%2d, %2d\n",*(ary[1]+1),*(ptr[1] + 1));		//ary[1]�� ���� ��, +1�� ���ǰ��� 1���ϴ°Ͱ� �����Ƿ�, ary[1][1]�� ���� 8 ptr�� ����.
	printf("%2d, %2d\n",  * (*(ary + 1) + 3), * (*(ptr + 1) + 3));			//*(ary+1)�� ary[1][0]�� �ּ� ���̰� +3�����Ƿ� ary[1][3]�� ���� ���.
	printf("sizeof(ary) = %d, sizeof(ptr) = %d\n", sizeof(ary), sizeof(ptr));		// ary�� ��ü�� ũ��� 8*4=32 ptr�� 4�̴�. �� �����ͺ����� 8byte�Դϴ�.

	return 0;
}