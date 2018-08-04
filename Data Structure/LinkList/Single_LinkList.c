#include <stdio.h>
#include <stdlib.h>
typedef struct Link{
    int  data;
    struct Link *next;
}link;
//创建链表函数 
link *initLink();

//链表插入的函数，head是链表头指针，data是插入的节点的数据域，add是插入的位置 
link * insert(link *head,int data,int add);

//删除节点的函数，head代表操作链表，add代表删除节点的位置 
link *del(link *head,int add);

//查找节点的函数，data为目标节点的数据域的值 
int select(link *head,int data);

//更新节点的函数，newElem为新的数据与的值 
link *amend(link *head,int add,int newdata);

//将此时的链表输出 
void display(link *head);

int main() {
    //输入(1,2,3,4，-1)
    printf("初始化链表为:\n");
    link *head = initLink();
    display(head);
   
    printf("在第4的位置插入5:\n");
    head = insert(head, 5, 4);
    display(head);
   
    printf("删除元素3:\n");
    head = del(head, 3);
    display(head);
   
    printf("查找元素2的位置为:\n");
    int address = select(head, 2);
    if (address == -1) {
        printf("没有该元素");
    }
	else{
        printf("元素2的位置为:%d\n",address);
    }
    printf("更改第3的位置的数据为7:\n");
    head = amend(head, 3, 7);
    display(head);
   
    return 0;
}
link * initLink()
{
    int n;
    link *head = (link *)malloc(sizeof(link));//创建一个头节点 
    link *q = head;//声明一个指针指向头节点，用于遍历链表 
    //生成链表，读数，读到-1为止。最后结果没有-1 
    scanf("%d",&n);
    while(n != -1){
	link *a = (link *)malloc(sizeof(link));
	a->data = n;
	a->next = NULL;
	q->next = a;
	q = q->next;
	scanf("%d",&n);
	}
    return head;
}
link *insert(link *head,int data,int add){
    link * q=head;//创建临时节点q
    //首先找到要插入位置的上一个节点 
    for (int i = 1; i < add; i++) {
        if (q == NULL) {
            printf("插入无效\n");
            return head;
        }
        q = q->next;
    }
    //创建插入节点c
    link *c = (link *)malloc(sizeof(link));
    c->data = data;
    //向链表中插入节点 
    c->next = q->next;
    q->next = c;
    return  head;
}
link *del(link *head,int add){
    link *q = head;
    //遍历到被删除节点的上一个节点 
    for (int i = 1; i<add; i++) {
        q = q->next;
    }
    link *del = q->next;//单独设置一个指针指向被删除的节点，防止丢失 
    q->next = q->next->next;//删除某个节点的方法就是更改前一个节点的指向 
    free(del);//手动释放，防止内存泄漏 
    return head;
}
int select(link *head,int data){
    link *t = head;
    int i = 1;
    while (t->next) {
        t = t->next;
        if (t->data == data) {
            return i;
        }
        i++;
    }
    return -1;
}
link *amend(link *head,int add,int newdata){
    link *q = head;
    q = q->next;//q指向头节点 
    //q指向被删除节点 
    for (int i = 1; i < add; i++) {
        q = q->next;
    }
    q->data = newdata;
    return head;
}
void display(link *head){
    link *q = head;//将q指针重新指向头节点 
    //只要q指针指向的节点的next不是NULL,执行输出语句 
    while (q->next) {
        q = q->next;
        printf("%d",q->data);
    }
    printf("\n");
}
