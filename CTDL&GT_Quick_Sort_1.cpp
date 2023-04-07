link tham khảo:https://freetuts.net/thuat-toan-sap-xep-nhanh-quick-sort-2940.html

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* index là chỉ số nơi phần tử này đã đứng đúng vị trí
         và đây là phần tử chia mảng làm 2 mảng con trái & phải */
        int index = partition(arr, low, high);
  
        // Gọi đệ quy sắp xếp 2 mảng con trái và phải
        quickSort(arr, low, index - 1);
        quickSort(arr, index + 1, high);
    }
}
