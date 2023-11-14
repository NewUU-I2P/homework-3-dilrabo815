#include <string>
using namespace std;
string problemSolution3(float height, char S) {
    string result;
    if (S == 'M') {
        if (height < 1.70) {
            result = "short";
        } else if (height >= 1.7 && height < 1.85) {
            result = "normal";
        } else {
            result = "tall";
        }
    } else if (S == 'F') {
        if (height < 1.6) {
            result = "short";
        } else if (height >= 1.6 && height < 1.75) {
            result = "normal";
        } else {
            result = "tall";
        }
    }
    return result;
}
