#include <stdlib.h>
#include <stdio.h>

//���������ṹ 
struct student
{
	char name[50];
	int score;
	int age;
	struct student *next;
};

typedef struct student node;

//������������ 
node* list()
{
	int i;
	int n;
	node *head;
	node *p;
	printf("�ܹ��ж��ٸ�ѧ��\n");
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		if(i == 0){
			head = (node*)malloc(sizeof(node));
			p = head;
		}
		else{
			p->next = (node*)malloc(sizeof(node));
			p = p->next;
		}
	scanf ("%s %d %d", p->name, &p->score, &p->age);
	}
	p->next = NULL;
	return head;
}

//�������� 
void replay(node *head)
{
	node *p;
	p = head;
	int count = 1;
	while(p != NULL){
		
		printf("\nstudent %d: %s\t %d\t %d\t",count,p->name,p->score,p->age);
		count++;
		p = p->next;
	}
	printf("\n");
}

//������� 
int main(int argc, char const *argv[])
{
	node *head;
	head = list();
	replay(head);
	return 0;
}