

//尾插法
void createlistR(LNode *&C,int al],int n) //要改变的变量用引用型。
{
	LNode *s, *r;//s用来指向新申请的结点，r始终指向C的终端结点
	int i;
	C= (LNode *)malloc (sizeof (LNode)) ;//申请C的头结点空间
	C->next=NULL;
	r=C;//r指向头结点，因为此时头结点就是终端结点
	for(i=0;i<n;++i)金//循环申请 n个结点来接收数组a中的元素
	{
		S= (LNode* )malloc (sizeof (LNode)) ;//s指向新申请的结点
		s->data=a[i];迎//用新申请的结点来接收a中的一个元素
		r->next=s;//用r来接纳新结点
		r=r->next;//r指向终端结点，以便于接纳下一个到来的结点
	}
}
r->next=NULL;//数组a中所有的元素都已经装入链表C中，C的终端结点的指针域置为NULL, C建立完成






void createlistF (LNode *&C, int a[],int n)
{
	LNode *s;
	int i;
	C= (LNode*)malloc(sizeof(LNode)) ;
	C->next=NULL;
	for (i=0;i<n;++i)
	{
		s= (LNode* )malloc (sizeof (LNode) ) ;
		s->data=a[i] ;
		/*下边两句是头插法的关键步骤*/
		s->next=C->next;//s所指新结点的指针域next指向C中的开始结点
		C->next=s;//头结 点的指针域next指向s结点，使得s成为新的开始结点
	}
}








