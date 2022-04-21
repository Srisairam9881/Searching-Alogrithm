#include<iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  int myarr[10000],num,output,n;
  cout<<"Enter size of array: ";
  cin>>n;
 
  cout << "Please enter "<<n<<" elements ASCENDING order: ";
  for (int i = 0; i < n; i++) {
    cin >> myarr[i];
  }
  cout << "Please enter an element to search: ";
  cin >> num;

  output = binarySearch(myarr, 0, n-1, num);

  if (output == -1) {
    cout << "No Match Found" << endl;
  } else {
    cout << "Match found at position: " << output << endl;
  }

  return 0;
}