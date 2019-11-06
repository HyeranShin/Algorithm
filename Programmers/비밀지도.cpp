#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string convertToBinary(int n, int num);

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i=0; i<n; i++) {
        string arr1ToBinary = convertToBinary(n, arr1[i]);
        string arr2ToBinary = convertToBinary(n, arr2[i]);
        string tempMap = "";
        for(int i=0; i<n; i++) {
            if(arr1ToBinary[i] == '0' && arr2ToBinary[i] == '0') {
                tempMap += ' ';
            }
            else {
                tempMap += '#';
            }
        }
        answer.emplace_back(tempMap);
    }
    
    return answer;
}

string convertToBinary(int n, int num) {
    string binary = "";
    string tempBinary = "";
    while(num > 0) {
        tempBinary += to_string(num%2);
        num /= 2;
    }
    reverse(tempBinary.begin(), tempBinary.end());
    int diff = n-tempBinary.length();
    while(diff > 0) {
         binary += '0';
        diff--;
    }
    binary += tempBinary;
    return binary;
}
