#include <stdio.h>

int main() {
    int eyes, faces, bodies, idols = 0;

    // take input from user
    scanf("%d %d %d", &eyes, &faces, &bodies);

    // count idols that can be made using one eye, one face, and one body
    int option_3 = eyes;
    if (faces < option_3) {
        option_3 = faces;
    }
    if (bodies < option_3) {
        option_3 = bodies;
    }
    idols += option_3;

    // count idols that can be made using two eyes and one body
    int option_1 = 0;
    if (eyes >= bodies * 2) {
        option_1 = bodies;
    } else {
        option_1 = eyes / 2;
    }
    idols += option_1;

    printf("%d", idols);

    return 0;
}
