void strcat1(char *s, char *t)
{
        while(*s != '\0') *s++; 
        while(*t != '\0') {
                  *s = *t;
                  *t++;
                  *s++;
                }
}

void setup() {
  Serial.begin(9600);
  char str1[] = "Hello";
  char str2[] = " World";
  strcat1(str1, str2);
  Serial.println(str1);
}

void loop() {
  // put your main code here, to run repeatedly:

}
