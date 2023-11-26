#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char sides_str[100];
    fgets(sides_str, sizeof(sides_str), stdin);
    
    char *token = strtok(sides_str, " ");
    int sides[3];
    int i = 0;
    while (token != NULL && i < 3)
    {
        sides[i] = atoi(token);
        token = strtok(NULL, " ");
        i++;
    }
    
    if (sides[0] + sides[1] > sides[2] && sides[0] + sides[2] > sides[1] && sides[1] + sides[2] > sides[0])
    {
        int perimeter = sides[0] + sides[1] + sides[2];
        int half_perimeter = perimeter / 2;
        int area = sqrt(half_perimeter * (half_perimeter - sides[0]) * (half_perimeter - sides[1]) * (half_perimeter - sides[2]));
        int area_array[1] = {area * area};
        printf("%d", area_array[0]);
    }
    else
    {
        printf("-1");
    }
}

}