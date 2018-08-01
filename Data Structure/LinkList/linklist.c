#include <stdlib.h>
#include <stdio.h>

//定义链表结构 
struct student
{
	char name[50];
	int score;
	int age;
	struct student *next;
};

typedef struct student node;

//构造链表函数 
node* list()
{
	int i;
	int n;
	node *head;
	node *p;
	printf("总共有多少个学生\n");
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

//遍历链表 
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

//程序入口 
int main(int argc, char const *argv[])
{
	node *head;
	head = list();
	replay(head);
	return 0;
}
