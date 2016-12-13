
int x = 1;
int y = 2;
int z = 3;
int *p_x = &x;
int *p_y = &y;
int *p_z = &z;
void setup() {
  // So we can communicate with the PC
  Serial.begin(9600);
}
void loop() {
  Serial.print("De waarde van x is: ");
  Serial.print(x);
  Serial.print(" en staat op geheugelocatie: ");
  Serial.println((int)p_x);
  Serial.print("De waarde van y is: ");
  Serial.print(y);
  Serial.print(" en staat op geheugelocatie: ");
  Serial.println((int)p_y);
  Serial.print("De waarde van z is: ");
  Serial.print((int)z);
  Serial.print(" en staat op geheugelocatie: ");
  Serial.println((int)p_z);
  while(1);
}
