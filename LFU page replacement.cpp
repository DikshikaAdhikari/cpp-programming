#include <iostream>
using namespace std;

int main() {
    int pages[] = {1, 2, 3, 1, 2, 4, 5};
    int n = 7;

    int frames[3];
    int freq[3];
    int faults = 0;

    for (int i = 0; i < 3; i++) {
        frames[i] = -1;
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int page = pages[i];
        bool found = false;

        for (int j = 0; j < 3; j++) {
            if (frames[j] == page) {
                freq[j]++;
                found = true;
                break;
            }
        }

        if (!found) {
            int pos = 0;

            for (int j = 1; j < 3; j++) {
                if (freq[j] < freq[pos])
                    pos = j;
            }

            frames[pos] = page;
            freq[pos] = 1;
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
