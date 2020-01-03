#include <iostream>
#include <math.h>   /* log10 */
using namespace std;

struct orderedPairOfInts {
    int x;
    int y;
    };
orderedPairOfInts maximums = {10, 10};

string repeatStringInt(string pattern = "", int n = 0) {  // As the name says: string first, int after. // https://github.com/RedGuff/repeatStringInt
    if(n < 0) {
        cerr << "Error: repeat(" << pattern << ", " << n << " < 0)" << endl;
        return "-1";
        }
    else if(n == 0) {
        return "";
        }
    else {
        return pattern + repeatStringInt(pattern, n - 1);
        }
    }

int main() {
    /* // Tests ok:
    cout << maximums.x << endl;
    cout << maximums.y << endl;
     maximums.x = 12;
     maximums.y = 12;
    cout << maximums.x << endl;
    cout << maximums.y << endl;
    */

    string SP1 = "";
    string SP2 = "";
    string SP3 = "";
    int Z = log10(maximums.x * maximums.y);
    for(int i = 0; i < maximums.x + 1; i++) {
        for(int j = 0; j < maximums.y + 1; j++) {
            if(i != 0) {
                SP1 = repeatStringInt(" ", Z - int(log10(i)));
                }
            else {
                SP1 = repeatStringInt(" ", Z);
                }
            if(j != 0) {
                SP2 = repeatStringInt(" ", Z - int(log10(j)));
                }
            else {
                SP2 = repeatStringInt(" ", Z);
                }
            if(i * j != 0) {
                SP3 = repeatStringInt(" ", Z - int(log10(i * j)));
                }
            else {
                SP3 = repeatStringInt(" ", Z);
                }
            cout << SP1 << i << " *" << SP2 << j << " =" << SP3 << i*j << " ";
            }
        cout << "" << endl;
        }
    return 0;
    }
