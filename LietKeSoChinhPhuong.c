#include <stdio.h>
#include <math.h>

int main() {

    long Reimu;
    long Marisa;
    scanf("%ld %ld", &Reimu, &Marisa);
    long poor = (long)ceil(sqrt(Reimu));
    long rich = (long)floor(sqrt(Marisa));
    int Donation = rich - poor + 1;
    if (Donation > 0){
        printf("%d\n", Donation);
    }
    for (long Talisman = poor; Talisman <= rich; Talisman++){      
            printf("%ld\n", Talisman * Talisman);      
    }  
}


