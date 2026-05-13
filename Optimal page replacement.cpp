#include <iostream>
using namespace std;

int main() {
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = 13;
    int frames[3];
    int faults = 0;

    for (int i = 0; i < 3; i++)
        frames[i] = -1;

    for (int i = 0; i < n; i++) {
        int page = pages[i];
        bool found = false;

        for (int j = 0; j < 3; j++) {
            if (frames[j] == page) {
                found = true;
                break;
            }
        }

        if (!found) {
            int pos = -1;

            for (int j = 0; j < 3; j++) {
                if (frames[j] == -1) {
                    pos = j;
                    break;
                }
            }

            if (pos == -1) {
                int farthest = i;
                int replaceIndex = -1;

                for (int j = 0; j < 3; j++) {
                    int k;
                    for (k = i + 1; k < n; k++) {
                        if (frames[j] == pages[k]) {
                            if (k > farthest) {
                                farthest = k;
                                replaceIndex = j;
                            }
                            break;
                        }
                    }

                    if (k == n) {
                        replaceIndex = j;
                        break;
                    }
                }

                pos = replaceIndex;
            }

            frames[pos] = page;
            faults++;
        }

        cout << "Frames: ";
        for (int j = 0; j < 3; j++)
            cout << frames[j] << " ";
        cout << endl;
    }

    cout << "Total Page Faults = " << faults;

    return 0;
}
