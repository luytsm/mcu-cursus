---
title: "Labo 8: Timers"
description: "Aansturen van een servo"
---

# Labo 8: Timers: Aansturen van een servo

Een servo stuur je aan met een bloksignaal. De meeste servo's maken gebruik van
een 50 Hz controle signaal. De servo leid de gewenste hoek af van de dutycycle
van het controle signaal. De frequentie blijft constant, de dutycycle veranderd.

In het algemeen centreer je een servo wanneer de dutycycle van het signaal 7.5%
is. De servo staat met een dutycycle van 5% op zijn uiterst linkse positie en
bij 10% op de uiterst rechtse. Voor deze stelling gaan we uit van een signaal
van 50Hz


<img style="display:block; margin: auto; height: 100%;" src="./img/servo_signal.png" alt="Arduino Nano als programmer voor de ATtiny">


## Opdracht

Stuur een servo aan met een potentiometer. 

* De generatie van het controlsignaal stel je in door het aanspreken van de
  correcte registers.
  * Maak gebruik van Timer1
  * Gebruik mode 14
* De dutycycle van het signaal verander je dmv een potentiometer
  * Je stuurt het controlesignaal in single shot mode (Je stopt het
    controlesignaal nadat de servo in de juiste hoek staat.)
  * Je leest de potentiometer uit mbv registers.
* Voor het beveiligen van de microcontroller maak je gebruik van 2N7000 mosfet.
  Je gebruikte deze als schakelaar voor de servo.


## Tips:

* Zet volgende 2 lijnen als eerste in je setup functie:  
```
TCCR1A = 0;
TCCR1B = 0;
```
* Voor de juiste start en stop dutycycles van je servo te bepalen ga je wat
  moeten experimenteren. Het is mogelijk dat de servo een range accepteer van
2% tot 15% dutycycle @ 50Hz

## Verslag 
* Uploaden een ino file



