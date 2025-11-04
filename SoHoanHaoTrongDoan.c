#include <stdio.h>
#include <math.h>

int Exterminated(int Reimu) {
    if (Reimu <= 1) return 0;

    int Money = 1; 
    int sqrtN = (int) sqrt(Reimu);

    for (int Talisman = 2; Talisman <= sqrtN; Talisman++) {
        if (Reimu % Talisman == 0) {
            Money += Talisman;
            if (Talisman != Reimu / Talisman) {
                Money += Reimu / Talisman;
            }
        }
    }

    return (Money == Reimu);
}

int main() {
    int Reimu, Marisa;
    scanf("%d %d", &Reimu, &Marisa);
    if(Reimu>Marisa){
		int Shrine = Reimu;
		Reimu = Marisa;
	    Marisa = Shrine;
	}


    for (int Donation = Reimu; Donation <= Marisa; Donation++) {
        if (Exterminated(Donation)) {
            printf("%d ", Donation);
        }
    }

}
