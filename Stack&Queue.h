/*
 * Stack&Queue.h
 *	Ò»¸öº¬ÓÐÕ»ºÍ¶ÓÁÐµÄÎÄ¼þ
 *
 */


typedef struct ListNode		//½¨Á¢Á´±í½Úµã
{
    void* data;		//½«Êý¾ÝÀàÐÍÉèÖÃ³Évoid*£¬¿ÉÒÔ¸ü·½±ãµÄÇÐ»»±äÁ¿ÀàÐÍ
    struct ListNode* next;	//Ö¸ÏòÏÂÒ»¸ö½ÚµãµÄµØÖ·
}ListNode;

typedef struct LinkStack	//½¨Á¢Á´±íÕ»£¨Á´Õ»£©
{
    ListNode* top;	//Í·½áµã
    int count;	//ÓÃÀ´¼ÇÂ¼ÓÐ¶àÉÙ½Úµã
}LinkStack;

typedef struct LinkQueue	//½¨Á¢Á´±í¶ÓÁÐ£¨Á´¶ÓÁÐ£©
{
    ListNode* front;
    ListNode* rear;	//¶ÓÍ·¡¢¶ÓÎ²Ö¸Õë
    int count;
}LinkQueue;



LinkStack* createStack();		//´´½¨Ò»¸öÕ»£¬×¢Òâ·µ»ØÖµÊÇÖ¸Õë
int isStackEmpty(LinkStack* stack);	//¼ì²éÊÇ·ñÎª¿ÕÕ»
void push(LinkStack* stack, void* data);		//²åÈëÐÂÔªËØdataÎªÐÂµÄÕ»¶¥ÔªËØ
void* pop(LinkStack* stack);		//Êä³öÕ»¶¥ÔªËØ
void DestroyStack(LinkStack* stack);	//´Ý»ÙÕ»

LinkQueue* createQueue();	//½¨Á¢Ò»¸ö¶ÓÁÐ
void EnQueue(LinkQueue* queue, void* data);	//Èô¶ÓÁÐ´æÔÚ£¬²åÈëÐÂÔªËØµ½¶ÓÁÐÖÐ²¢³ÉÎª¶ÓÎ²ÔªËØ
void* DeQueue(LinkQueue* queue);	//Êä³ö¶ÓÍ·ÔªËØ
int isQueueEmpty(LinkQueue* queue);	//²âÊÔ´Ë¶ÓÁÐÊÇ·ñÎª¿Õ
void DestroyQueue(LinkQueue* queue);	//´Ý»Ù¶ÓÁÐ



LinkStack* createStack()	//´´½¨Ò»¸öÕ»£¬×¢Òâ·µ»ØÖµÊÇÖ¸Õë
{
    LinkStack* stack = (LinkStack*) malloc (sizeof(LinkStack));	//´´½¨Ò»¸öÔÚ¶¯Ì¬ÄÚ´æÀïµÄÕ»Ö¸Õë
    stack->count=0;		//³õÊ¼»¯count
    return stack;
}

int isStackEmpty(LinkStack* stack)	//¼ì²éÊÇ·ñÎª¿ÕÕ»
{
    //·½·¨ÊÇ¼ì²écountÊÇ·ñÎª0
    return (stack->count==0);
}

void push(LinkStack* stack, void* data)	//²åÈëÐÂÔªËØdataÎªÐÂµÄÕ»¶¥ÔªËØ
{
    ListNode* s = (ListNode*) malloc (sizeof(ListNode));	//½¨Á¢Ò»¸öÓµÓÐ¶¯Ì¬ÄÚ´æµÄ½ÚµãÖ¸Õë£¬×¢ÒâÊÇÖ¸Õë
    s->data = data;
    s->next=stack->top;		//°Ñµ±Ç°µÄÕ»¶¥ÔªËØ¸³Öµ¸øÐÂ½ÚµãµÄÖ±½Óºó¼Ì
    stack->top=s;			//½«ÐÂ½Úµãs¸³Öµ¸øÕ»¶¥Ö¸Õë
    stack->count++;
}

void* pop(LinkStack* stack)	//Êä³öÕ»¶¥ÔªËØ
{
    ListNode* p;
    void* output = stack->top->data;
    p=stack->top;	//½«Õ»¶¥½Úµã¸³Öµ¸øp£¬¿ÉÒÔËµÏÖÔÚµÄpµÈÓÚpushÀïµÄs
    stack->top=stack->top->next;	//Ê¹µÃÕ»¶¥Ö¸ÕëÏÂÒÆÒ»Î»£¬Ö¸ÏòºóÒ»½Úµã
    free(p);	//ÊÍ·Å½Úµã£¨ÒòÎªpµÈÓÚs£©
    stack->count--;
    return output;
}

void DestroyStack(LinkStack* stack)	//´Ý»ÙÕ»
{
    while(!isStackEmpty(stack))
    {
        ListNode* p;
        p=stack->top;
        stack->top=stack->top->next;
        free(p);
        stack->count--;
        printf("yes\n");
    }

    free(stack);
}

LinkQueue* createQueue()	//¶¯Ì¬´´½¨Ò»¸ö¶ÓÁÐ
{
    LinkQueue* queue = (LinkQueue*) malloc (sizeof(LinkQueue));
    queue->front=NULL;	//½«frontºÍbackÉèÖÃÎªnull
    queue->rear=NULL;
    queue->count = 0;
    return queue;
}

void EnQueue(LinkQueue* queue, void* data)	//²åÈëÐÂÔªËØdataÎªÐÂµÄ¶ÓÍ·ÔªËØ
{
    ListNode* s = (ListNode*) malloc (sizeof(ListNode));	//´´½¨Ò»¸ö½Úµã
    s->data = data;
    s->next = NULL;

    if(isQueueEmpty(queue))	//Èç¹ûdataÊÇµÚÒ»¸öÊý¾Ý£¬Ôò½«frontºÍback¶¼Ö¸Ïòs£¬ÕâÒ»µãºÜÖØÒª
    {
        queue->front=s;
        queue->rear=s;
        queue->count = 1;
    }
    else	//Èç¹ûÕâ²»ÊÇµÚÒ»¸öÊý¾Ý
    {
        queue->rear->next = s;	//°ÑÓµÓÐÔªËØdataÐÂ½Úµãs¸³Öµ¸øÔ­¶ÓÎ²µãµÄºó¼Ì
        queue->rear = s;	//°Ñµ±Ç°µÄsÉèÖÃÎª¶ÓÎ²½Úµã£¬rearÖ¸Ïòs
        queue->count++;
    }
}

void* DeQueue(LinkQueue* queue)	//É¾³ýÍ·ÔªËØ²¢·µ»ØÆäÖµ
{
    ListNode* p;
    p = queue->front;	//½«½ÚµãpÖ¸Ïò¶ÓÍ·½Úµã
    void* output = p->data;	//½«ÓûÉ¾³ýµÄ¶ÓÍ·½ÚµãµÄÖµ¸³Öµ¸øoutput
    queue->front = p->next;		//½«Ô­½Úµãºó¼Ìp->next¸³Öµ¸øÍ·½áµã£¬´ËÊ±p->next±ä³É¶ÓÍ·ÔªËØ
    queue->count--;
    if(queue->front == NULL)	//Èç¹ûÍ·½áµã±ä³Énull£¬¼´ÏÖÔÚµÄ¶ÓÁÐÊÇ¿Õ¶ÓÁÐ
        queue->rear = NULL;		//½«¶ÓÎ²½ÚµãÒ²±ä³Énull

    free(p);
    return output;
}

int isQueueEmpty(LinkQueue* queue)	//²âÊÔ¶ÓÁÐÊÇ·ñÎª¿Õ
{
    return ((queue->rear == NULL) && (queue->front == NULL));		//¼ÆËã¹«Ê½
    //±ØÐëÁ½¸ö½Úµã¶¼Îª¿ÕµÄ¶ÓÁÐ²ÅÊÇ¿Õ¶ÓÁÐ£¬ÕâµãºÜÖØÒª
}

void DestroyQueue(LinkQueue* queue)	//´Ý»ÙÕ»
{
    while(!isQueueEmpty(queue))
    {
        ListNode* p;
        p = queue->front;
        queue->front = p->next;
        if(queue->front == NULL)
            queue->rear = NULL;
        free(p);
        printf("yes\n");
    }

    free(queue);
}
