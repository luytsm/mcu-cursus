---
title: "Labo 6: Getting started with registers"
description: "Basis oefeningen op registers en Whack - a - Mole"
---
# Labo 6: Getting started with registers
Nu dat we registers hebben gezien in de theorie gaan we dit toepassen tijdens
de labo's. Voor de eerste oefeningen gaan we enkele van ons gemaakte oefeningen
herschrijven maar we laten de Arduino libraries achterwegen.

## Opdracht 1: 
Maak een simpele 2 digit counter met een 7 segment. Deze counter gebruikt als
input een pushbutton. Je polt naar de staat van de pushbutton

Plan het gebruik van de pinnen, gebruik een poort voor de segmenten, een ander
voor de digits en de laatste voor de rest van de functionaliteit.

Maak deze opdracht door de registers van de ATmega328p rechtstreeks aan te
spreken.

## Opdracht 2: 
Koppel 3 pushbuttons aan op een poort en koppel deze 3 knoppen aan een pin
change interrupt. Zie deze 3 drukknoppen als een geheugen van 3 bits. Toon
nadien de waarde van dit geheugen op een 7 segment display. De waarde van het
segment gaat van 0 - 7.

## Opdracht 3:
Hermaak de opdracht van labo 3 zonder de player 2 functionaliteit.

## Opdracht 4: 
Lees de waarde in van een potentiometer in. De uitgelezen waarde representeer
je door deze liniear te verdelen over 5 leds.

Schrijf de nodige code voor het gebruik van de interne Timers/Counters van de
atmega voor het gebruik van PWM.

