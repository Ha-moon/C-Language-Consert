//<5�� Programming 5��: �ٷ� �ҵ漼 ���>
//�ۼ���: 509 �� ����(B889041)
//��¥ :2018�� 10�� 4��
//���� : ����ڰ� ���� ǥ�� �ݾ��� �Է��ϸ� �ٷ� �ҵ漼�� ���
#include <stdio.h>

int main()
{
	int money, tax;
	printf("���� ǥ���� �Է��Ͻÿ�(����): ");
	scanf("%d", &money);

	if (money > 8000)
		tax = 8000 * 0.26 + (money - 8000)*0.35;
	else if(money>4000)
		tax=4000*0.17+ (money - 4000)*0.26;
	else if (money > 1000)
		tax = 1000 * 0.08 + (money - 1000)*0.17;
	else
		tax = money*0.08;

	printf("�ҵ漼�� %d�����Դϴ�\n", tax);
	return 0;
}