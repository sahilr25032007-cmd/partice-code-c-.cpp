// Is 15 code c++ pattern
write a program sequare pattern
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
Q2 wap to program to right angle triangle pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the right angle triangle pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
Q3  wap to program right half pyramid pattern
#include <iostream> 
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the right half pyramid pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
Q4 wap to program to inverted right half pyramid pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the inverted right half pyramid pattern: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
Q5 wap to program to character pyramid 
#include <iostream>
using namespace std;
int main() {
    int n;
    for(int i = 0; i < 5; i++) {
    for(int j = 0; j <= i; j++) {
        cout << (char)('A' + i) << " ";
    }
    cout << endl;
}
    return 0;
};
 Q6  wap to program mirrored right half pyramid pattern
#include <iostream> 
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the mirrored right half pyramid pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Print spaces
        }
        for (int k = 1; k <= i; k++) {
            cout << "* "; // Print stars
        }
        cout << endl;
    }

    return 0;
}
Q7 wap to program full pyrmaid traingle
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the full pyramid triangle pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Print spaces
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "* "; // Print stars
        }
        cout << endl;
    }

    return 0;
}
Q8 wap to program full inverted pyramid triangle
#include <iostream>
using namespace std;
int main() {    
    int n;
    cout << "Enter the size of the full inverted pyramid triangle pattern: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Print spaces
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "* "; // Print stars
        }
        cout << endl;
    }

    return 0;
}

Q9 wap to program to hollow square pattern
#include <iostream>
using namespace std;    
int main() {
    int n;
    cout << "Enter the size of the hollow square pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* "; // Print stars on the borders
            } else {
                cout << "  "; // Print spaces inside the square
            }
        }
        cout << endl;
    }

    return 0;
}
Q 98 wap to program letter sequare pattern
#include <iostream> 
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the letter square pattern: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (char)('A' + (i + j) % 26) << " "; // Print letters in a square pattern
        }
        cout << endl;
    }

    return 0;
}
Q10 wap to program to Rhombus pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the rhombus pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Print spaces
        }
        for (int k = 1; k <= n; k++) {
            cout << "* "; // Print stars
        }
        cout << endl;
    }

    return 0;
}
Q11 wap to program to diamond pattern
#include <iostream>
using namespace std;    
int main() {
    int n;
    cout << "Enter the size of the diamond pattern: ";
    cin >> n;

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Print spaces
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "* "; // Print stars
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Print spaces
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "* "; // Print stars
        }
        cout << endl;
    }

    return 0;
}
Q12 wap to program to butterfly pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the butterfly pattern: ";
    cin >> n;

    // Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print left wing
        }
        for (int k = 1; k <= 2 * (n - i); k++) {
            cout << "  "; // Print spaces between wings
        }
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print right wing
        }
        cout << endl;
    }

    // Lower half of the butterfly
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print left wing
        }
        for (int k = 1; k <= 2 * (n - i); k++) {
            cout << "  "; // Print spaces between wings
        }
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print right wing
        }
        cout << endl;
    }

    return 0;
}
Q13 wap to program to pascal triangle pattern
#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
} 
Q14 wap to program to number triangle pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the number triangle pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " "; // Print numbers in a triangle pattern
        }
        cout << endl;
    }

    return 0;
}
Q15 wap to program to spiral simple square style pattern 
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the spiral square pattern: ";
    cin >> n;

    int arr[n][n];
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (value <= n * n) {
        for (int i = left; i <= right; i++) {
            arr[top][i] = value++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            arr[i][right] = value++;
        }
        right--;

        for (int i = right; i >= left; i--) {
            arr[bottom][i] = value++;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            arr[i][left] = value++;
        }
        left++;
    }

    // Print the spiral square pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}