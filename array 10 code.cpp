Q1 wap to program input and Print Array
#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}
Q2 wap to program Find Sum of Array
#include <iostream>
using namespace std;

int main() {
    int arr[5], sum = 0;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum;
}
Q3 wao to program find maximum and minimum element in array
Find Maximum Element
#include <iostream>
using namespace std;

int main() {
    int arr[5], max;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum = " << max;
}
4. Find Minimum Element
#include <iostream>
using namespace std;

int main() {
    int arr[5], min;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Minimum = " << min;
}
5. Reverse Array
#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Reversed Array: ";
    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}
6. Search Element (Linear Search)
#include <iostream>
using namespace std;

int main() {
    int arr[5], key, found = 0;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            cout << "Found at position " << i;
            found = 1;
            break;
        }
    }

    if(found == 0)
        cout << "Not Found";
}
7. Count Even and Odd Numbers
#include <iostream>
using namespace std;

int main() {
    int arr[5], even = 0, odd = 0;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;
}
8. Sort Array (Ascending Order)
#include <iostream>
using namespace std;

int main() {
    int arr[5], temp;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}
9. Copy One Array to Another
#include <iostream>
using namespace std;

int main() {
    int arr1[5], arr2[5];

    for(int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }

    cout << "Copied Array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
}
10. Merge Two Arrays
#include <iostream>
using namespace std;

int main() {
    int arr1[3], arr2[3], arr3[6];

    for(int i = 0; i < 3; i++) cin >> arr1[i];
    for(int i = 0; i < 3; i++) cin >> arr2[i];

    for(int i = 0; i < 3; i++) {
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < 3; i++) {
        arr3[i + 3] = arr2[i];
    }

    cout << "Merged Array: ";
    for(int i = 0; i < 6; i++) {
        cout << arr3[i] << " ";
    }
}

