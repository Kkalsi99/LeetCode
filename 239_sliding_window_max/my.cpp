#include <bits/stdc++.h>
using namespace std;
void heapifyIns(int arr[], int n, int i)
{
    // Find parent
    int parent = (i - 1) / 2;

    if (arr[parent] < arr[i])
    {
        // For Max-Heap
        // If current node is greater than its parent
        // Swap both of them and call heapify again
        // for the parent
        if (arr[i] > arr[parent])
        {
            swap(arr[i], arr[parent]);

            // Recursively heapify the parent node
            heapifyIns(arr, n, parent);
        }
    }
}

void heapifyDel(int arr[], int n, int i)
{
    int largest = i;   // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapifyDel(arr, n, largest);
    }
}
void insertNode(int arr[], int &n, int Key)
{
    // Increase the size of Heap by 1
    n = n + 1;

    // Insert the element at end of Heap
    arr[n - 1] = Key;

    // Heapify the new node following a
    // Bottom-up approach
    heapifyIns(arr, n, n - 1);
}

// Function to delete the element from Heap

void deleteAny(int arr[], int &n, int num)
{
    // Get the last element

    int lastElement = arr[n - 1];
    int i;

    // Replace root with ith element
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            // cout << arr[i] << " ";
            break;
        }
    }
    arr[i] = lastElement;

    // Decrease size of heap by 1
    n = n - 1;

    // heapify the root node
    heapifyDel(arr, n, i);
    if ()
        heapifyIns(arr, n, i);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{

    int n = nums.size();
    vector<int> maxOfWindow;
    int arr[k + 1];
    int n1 = 0;
    int counter = 0;
    int i = 0, j = 0;
    for (i = 0; i < k; i++)
    {
        insertNode(arr, n1, nums[i]);
    }
    printArray(arr, n1);

    maxOfWindow.push_back(arr[0]);
    deleteAny(arr, n1, nums[counter++]);

    for (i = k; i < n; i++)
    {
        insertNode(arr, n1, nums[i]);
        maxOfWindow.push_back(arr[0]);
        printArray(arr, n1);

        deleteAny(arr, n1, nums[counter++]);
    }
    for (int i = 0; i < maxOfWindow.size(); i++)
    {
        cout << maxOfWindow[i];
    }

    return maxOfWindow;
}
int main()
{
    int n = 0;

    vector<int> nums = {-5769, -7887, -5709, 4600, -7919, 9807, 1303, -2644, 1144, -6410, -7159, -2041, 9059, -663, 4612, -257, 2870, -6646, 8161, 3380, 6823, 1871, -4030, -1758, 4834, -5317, 6218, -4105, 6869, 8595, 8718, -4141, -3893, -4259, -3440, -5426, 9766, -5396, -7824, -3941, 4600, -1485, -1486, -4530, -1636, -2088, -5295, -5383, 5786, -9489, 3180, -4575, -7043, -2153, 1123, 1750, -1347, -4299, -4401, -7772, 5872, 6144, -4953, -9934, 8507, 951, -8828, -5942, -3499, -174, 7629, 5877, 3338, 8899, 4223, -8068, 3775, 7954, 8740, 4567, 6280, -7687, -4811, -8094, 2209, -4476, -8328, 2385, -2156, 7028, -3864, 7272, -1199, -1397, 1581, -9635, 9087, -6262, -3061, -6083, -2825, -8574, 5534, 4006, -2691, 6699, 7558, -453, 3492, 3416, 2218, 7537, 8854, -3321, -5489, -945, 1302, -7176, -9201, -9588, -140, 1369, 3322, -7320, -8426, -8446, -2475, 8243, -3324, 8993, 8315, 2863, -7580, -7949, 4400};
    int k = 6;

    maxSlidingWindow(nums, k);
}