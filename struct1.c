#include <stdio.h>

typedef struct {
    int id;
    char name[20];
    float value;
    char unit[10];
} Sensor;

void initSensor(Sensor *s, int id, char *name, float value, char *unit) {
    s->id = id;
    s->value = value;
}

void printSensor(Sensor *s) {
    printf("Sensor %d | value: %.2f %s\n", s->id, s->value, s->unit);
}
void updateSensor(Sensor *s, float newValue) {
    s->value = newValue;
}

int main() {
    Sensor temp;
    initSensor(&temp, 1, "temperature", 25.4, "C");
    printSensor(&temp);
    Sensor humidity;
initSensor(&humidity, 2, "humidity", 60.0, "%");
printSensor(&humidity);
printSensor(&temp);
updateSensor(&temp, 30.5);
printf("after update: ");
printSensor(&temp);
return 0;
}