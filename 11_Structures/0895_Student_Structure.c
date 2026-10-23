/* Structure example */
#include <stdio.h>
struct Student { char name[40]; int roll; float marks; };
int main(void) {
    struct Student s = {"Asha", 1, 89.5f};
    printf("Name: %s\nRoll: %d\nMarks: %.1f\n", s.name, s.roll, s.marks);
    return 0;
}
