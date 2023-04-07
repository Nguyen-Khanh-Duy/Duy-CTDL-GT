link tham khảo :https://cachhoc.net/2014/12/29/lap-trinh-c-bai-15-cai-dat-ngan-xep-stack/ 
#include <stdlib.h>
#include <stdio.h>

void Init (Stack &S) //khoi tao Stack rong
{
    S.Top = NULL;
}
 
int Isempty(Stack S) //kiem tra Stack rong
{
    return (S.Top == NULL);
}
 
int Len (Stack S)
{
    Node *P = S.Top;
    int i=0;
    while (P != NULL) //trong khi chua het Stack thi van duyet
    {
        i++;
        P = P->Next;
    }
    return i;
}
 
Node *MakeNode(item x) //tao 1 Node
{
    Node *P = (Node*) malloc(sizeof(Node));
    P->Next = NULL;
    P->Data = x;
    return P;
}
 
void Push(Stack &S, item x) //them phan tu vao Stack
{
    Node *P = MakeNode(x);
    P->Next = S.Top;
    S.Top = P;
}
 
int Peak(Stack S) //Lay phan tu o dau Stack nhung khong xoa
{
    return S.Top->Data;
}
 
int Pop(Stack &S) //Loai bo phan tu khoi Stack
{
    if (!Isempty(S))
    {
        item x = S.Top->Data; //luu lai gia tri
        S.Top = S.Top->Next; //Xoa phan tu Top
        return x;
    }
}
 
void Input (Stack &S) //nhap danh sach
{
    int i=0; 
    item x;
    do
    {
        i++;
        printf ("Nhap phan tu thu %d : ",i);
        scanf("%d",&x);
        if (x != 0) Push(S,x);
    } while(x != 0); //nhap 0 de ket thuc
}
 
void Output(Stack S)
{
    Node *P = S.Top;
    while (P != NULL)
    {
        printf("%d   ",P->Data);
        P = P->Next;
    }
    printf("\n");
}
