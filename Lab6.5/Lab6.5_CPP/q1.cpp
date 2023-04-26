#include <iostream>
using namespace std;

int main() {

    int list1[] = {1,2, 3, 4, 5};
    int list2[] = {5, 6, 7, 8, 9};
    int a1 = sizeof(list1)/sizeof(list1[0]);
    int b2 = sizeof(list2)/sizeof(list2[0]);

    int element[a1 < b2 ? a1 : b2];
    int k = 0;

    for (int i = 0; i < a1; i++) {
        for (int j = 0; j < b2; j++) {
            if (list1[i] == list2[j]) {
                bool isUnique = true;
                for (int n = 0; n < k; n++) {
                    if (element[n] == list1[i]) {
                        isUnique = false;
                        break;
                    }
                }
                if (isUnique) {
                    element[k] = list1[i];
                    k++;
                }
            }
        }
    }

    for (int i = 0; i < k; i++) {
        cout << element[i] << " ";
    }
    cout << endl;
    return 0;
}
