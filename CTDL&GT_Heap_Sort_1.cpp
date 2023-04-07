link tham khảo :https://dnmtechs.com/thuat-toan-sap-xep-vun-dong-heap-sort/
void heapSort(int arr[], int n)
{
	// Tao mot dong (Sap xep lai mang)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// Trích xuất từng một phần tử một từ heap
	for (int i = n - 1; i >= 0; i--)
	{
		// Di chuyen root ve cuoi cung
		swap(arr[0], arr[i]);

		// goi ham heapify
		heapify(arr, i, 0);
	}
}
