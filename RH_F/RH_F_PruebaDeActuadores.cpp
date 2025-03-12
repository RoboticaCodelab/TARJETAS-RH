/*
   Fecha: 2025
   Proyecto: RH F - Prueba de Actuadores
   Descripción:
   - Activa y desactiva los actuadores en secuencia con pausas entre cada acción.
*/

#define ACTUADOR_1 19
#define ACTUADOR_2 18

void setup() {
    pinMode(ACTUADOR_1, OUTPUT);
    pinMode(ACTUADOR_2, OUTPUT);
}

void loop() {
    // Activar actuador 1
    digitalWrite(ACTUADOR_1, HIGH);
    delay(2000);
    digitalWrite(ACTUADOR_1, LOW);
    delay(1000);

    // Activar actuador 2
    digitalWrite(ACTUADOR_2, HIGH);
    delay(2000);
    digitalWrite(ACTUADOR_2, LOW);
    delay(1000);

    // Activar ambos actuadores
    digitalWrite(ACTUADOR_1, HIGH);
    digitalWrite(ACTUADOR_2, HIGH);
    delay(2000);

    // Apagar ambos actuadores
    digitalWrite(ACTUADOR_1, LOW);
    digitalWrite(ACTUADOR_2, LOW);
    delay(2000);
}
