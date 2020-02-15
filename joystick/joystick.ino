/*

    Programado por Luis Cabrera Benito
  ____          _____               _ _           _
  |  _ \        |  __ \             (_) |         | |
  | |_) |_   _  | |__) |_ _ _ __ _____| |__  _   _| |_ ___
  |  _ <| | | | |  ___/ _` | '__|_  / | '_ \| | | | __/ _ \
  | |_) | |_| | | |  | (_| | |   / /| | |_) | |_| | ||  __/
  |____/ \__, | |_|   \__,_|_|  /___|_|_.__/ \__, |\__\___|
         __/ |                               __/ |
        |___/                               |___/


    Blog:       https://parzibyte.me/blog
    Ayuda:      https://parzibyte.me/blog/contrataciones-ayuda/
    Contacto:   https://parzibyte.me/blog/contacto/
*/
#define EJE_X 0
#define EJE_Y 1
#define BOTON 2

void setup() {
  Serial.begin(9600);
  // Será de tipo entrada
  pinMode(BOTON, INPUT_PULLUP);
}

void loop() {
  int valorX = analogRead(EJE_X),
      valorY = analogRead(EJE_Y),
      botonPulsado = digitalRead(BOTON);
  if (!botonPulsado) {
    Serial.println("Botón pulsado");
  }
  if (valorX > 1000) {
    Serial.println("Abajo");
  } else if (valorX < 200) {
    Serial.println("Arriba");
  }

  if (valorY > 1000) {
    Serial.println("Izquierda");
  } else if (valorY < 200) {
    Serial.println("Derecha");
  }
  delay(100);
}
