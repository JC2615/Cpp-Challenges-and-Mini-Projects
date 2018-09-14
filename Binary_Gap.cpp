#include <iostream>
using namespace std;

int solution(int N){
    int binary[32];
    int count = 0;
    int r;
    int quotient;
    int gapCount = 0;
    int latestGapCount = 0;
    
    while(true){
            r = N % 2;
            quotient = N / 2;
            binary[count] = r;
            N = quotient;
        
        count++;
        
        if (quotient == 0) {
            break;
        }
        
    }
    
    for(int i = count - 1; i >= 0; i--){
        if (binary[i] == 1){
            if (gapCount > latestGapCount){
                latestGapCount = gapCount;
            }
            gapCount = 0;
        }
        else{
            gapCount++;
        }
    }
    return latestGapCount;
    
}

int main(){
    
    cout << solution(1041);
}



