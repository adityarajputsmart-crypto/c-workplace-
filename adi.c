#include <stdio.h>
#include <stdlib.h>
#define queuesize 7
int front = -1;
int rear = -1;
int queue[queuesize];

typedef struct node
{
    int data;
    struct node *next;
} node;

int insertlinkedlist(node *head, int newdata)
{
    node *ptr, *new;
    new = (node *)malloc(sizeof(node));
    new->data = newdata;
    new->next = head;
    head = new;
    return head;
}

int subarrsum(int arr[], int size, int subarraySize)
{
    int start = 0;
    int end = subarraySize - 1;
    int sizee = size - 1;
    int temp = 0;
    int see = 1;
    for (int i = 0; end <= sizee; i++)
    {

        for (int j = start; j <= end; j++)
        {
            temp = temp + arr[j];
        }

        printf("%d is %d itration\n", temp, see);
        see++;
        start++;
        end++;
        temp = 0;
    }
}

int evenorodd(int arr[], int size)
{
    int oddcount = 0, evencount = 0;
    int odd[size];
    int even[size];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evencount] = arr[i];
            evencount++;
        }

        else
        {
            odd[oddcount] = arr[i];
            oddcount++;
        }
    }
}

int ReverseArray(int arr[], int size)
{
    int temp;
    int n = size - 1;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i];
        arr[n - i] = temp;
    }
}

int arrmax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[j + 1] > arr[j])
            {
                max = arr[j + 1];
            }
        }
    }
    printf("your max number in this array = %d\n", max);
}

int swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;
}

//======= array operation =====================================================================================================================
int array2dprint(int coloumn, int rows, int arr[][coloumn])
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}

int scanfarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("enter on %d index in array ", i);
        scanf("%d", &arr[i]);
    }
}

int printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d is in %d index \n", arr[i], i);
    }
}

void arrswap(int *swap1, int *swap2)
{
    int temp;
    temp = *swap1;
    *swap1 = *swap2;
    *swap2 = temp;
}
//======= searching algorithm ================================================================================================================
int linsearch(int arr[], int arrsize, int key)
{
    int flag = 0;
    for (int i = 0; i < arrsize; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            printf("your %d is find on arr[%d]", key, i);
        }
    }
}

int binerysearch(int arr[], int arrsize, int key)
{
    int flag = 0;
    int mid = arrsize / 2;
    if (mid == key)
    {
        flag = 1;
        printf("your %d element is store on %d index ", key, mid);
    }
    if (mid > key)
    {
        for (int i = 0; i < mid; i++)
        {
            if (i == key)
            {
                flag = 1;
                printf("your key %d is found on %d index in array", key, i);
            }
        }
    }
    else
    {
        for (int i = mid; i < arrsize - 1; i++)
        {
            if (i == key)
            {
                flag = 1;
                printf("your key %d is found on %d index in array", key, i);
            }
        }
    }
}
//======= sorting algorithm =================================================================================================================
int bubbleshort(int arr[], int size)
{
    int count = 0;
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                count++;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("%d is your swap count", count);
}

int slectionshort(int arr[], int size)
{
    int smallindex;
    for (int i = 0; i < size - 1; i++)
    {
        smallindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[smallindex])
            {
                smallindex = j;
            }
        }
        arrswap(&arr[smallindex], &arr[i]);
    }
}

int calculator(int a, int b)
{
    int n;
    printf("1 - sum \n");
    printf("2 - subtract \n");
    printf("3 - multiplication \n");
    printf("4 - division \n");
    printf("5 - square  \n");
    printf("6 - cube\n");
    printf("7 - modulas \n");

    scanf("%d", &n);

    switch (n)
    {

    case 1:

        printf("your sum is %d \n", a + b);
        break;

    case 2:

        printf("your subtract is %d \n", a - b);
        break;
    case 3:

        printf("your multiplly is %d \n", a * b);
        break;

    case 4:

        printf("your divison is %d \n", a / b);
        break;

    case 5:

        printf("your square is %d \n", a * a);
        break;
    case 6:

        printf("your cube is %d \n", a * a * a);
        break;
    case 7:

        printf("your modulus is %d \n", a % b);
        break;

    default:
        printf(" ENTER VALID OPTION !");
    }
}

int isempty()
{
    if (front == -1)
    {
        printf("yes ! your queue is empty !\n");
        return 1;
    }
    else
    {
        printf("No ! your queue is not empty !\n");
        return 0;
    }
}
int isfull()
{
    if (rear == queuesize - 1)
    {
        printf("yes ! your queue is full !\n");
        return 1;
    }
    else
    {
        printf("No ! your queue is not full !\n");
        return 0;
    }
}

void enqueue(int value)
{
    if (isfull())
    {
        printf("your queue is full\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        queue[++rear] = value;
        printf("INSERTED %d in Queue !\n", value);
    }
}

void dequeue()
{
    if (isempty())
    {
        printf("your queue is empty\n");
    }
    if (front > rear)
    {
        rear == front == -1;
    }

    printf("%d is REMOVED !\n", queue[front]);
    front++;
}

void queuedisplay()
{
    if (isempty())
    {
        printf("Queue is EMPTY\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}

int queuecase()
{
    printf("\n1- Enqueue\n");
    printf("2- Dequeue\n");
    printf("3- IsEmpty\n");
    printf("4- IsFull\n");
    printf("5- Display\n");
    printf("6- EXIT !\n");
}

//======= main function =========================================================================================================================

int main()
{
    node *head = NULL;
    int a;
    printf("data \n");
    scanf("%d", &a);
    insertlinkedlist(head, a);
}
