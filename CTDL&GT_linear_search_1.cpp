// Cài đặt, link tham khảo:https://laptrinhtudau.com/tim-kiem-tuyen-tinh-linear-search-trong-c/
int linear_search(int A[], int n, int x){
    int i;
    for (i = 0; i < n; i++)
        //Neu co phan tu A[i] nao co gia tri bang voi x
        if (A[i] == x){
            return i; //Tra ve vi tri phan tu duoc tim thay
        }
    return -1; //Khong tim thay phan tu trong mang A[]
}


