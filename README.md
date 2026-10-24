# Arduino Temperature Monitor

Projeto introdutório de sistemas embarcados desenvolvido no Tinkercad Circuits, utilizando Arduino Uno e sensor de temperatura TMP36.

## Objetivo

Monitorar a temperatura ambiente simulada e acionar um LED vermelho quando a temperatura ultrapassar 30 °C.

## Componentes

- Arduino Uno
- Sensor de temperatura TMP36
- LED vermelho
- Resistor de 220 Ω
- Protoboard
- Fios jumper

## Funcionamento

O sensor TMP36 fornece um sinal analógico proporcional à temperatura. O Arduino lê esse sinal pela entrada A0, converte a leitura em uma estimativa de temperatura e verifica se ela ultrapassa o limite de 30 °C.

- Temperatura acima de 30 °C: LED aceso.
- Temperatura igual ou abaixo de 30 °C: LED apagado.

A temperatura também é exibida no Monitor Serial.

## Tecnologias

- Arduino
- C/C++
- Tinkercad Circuits

## Status

Projeto funcional em ambiente de simulação.
