#include <stdio.h>

int main() {
    int eyes, faces, bodies;
    scanf("%d%d%d", &eyes, &faces, &bodies);

    int idols = 0;

    // Option 3: One eye, one face, one body
    int option3 = (eyes < faces ? eyes : faces);
    option3 = (option3 < bodies ? option3 : bodies);
    idols += option3;

    // Remove idols made with option 3
    eyes -= option3;
    faces -= option3;
    bodies -= option3;

    // Option 1: Two eyes, one body
    int option1 = (eyes/2 < bodies ? eyes/2 : bodies);
    idols += option1;

    printf("%d\n", idols);
    return 0;
}
