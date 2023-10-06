#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int diameters[N];
    int heights[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &diameters[i], &heights[i]);
    }
    
    int uniqueCount = 0;
    
    for (int i = 0; i < N; i++) {
        int isUnique = 1;
        
        for (int j = 0; j < N; j++) {
            if (i != j && diameters[j] > diameters[i] && heights[j] > heights[i]) {
                isUnique = 0;
                break;
            }
        }
        
        if (isUnique) {
            uniqueCount++;
        }
    }
    
    printf("%d\n", uniqueCount);
    
    return 0;
}
