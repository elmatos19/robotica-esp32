Projeto 02 - Botão + LED

Descrição:

Neste projeto foi utilizado um ESP32 para controlar um LED através de um botão.

Ao pressionar o botão, o ESP32 deteta o sinal de entrada e acende o LED. Ao libertar o botão, o LED apaga-se.

Este projeto introduz o conceito de entrada digital (INPUT) e saída digital (OUTPUT).

Objetivos:

- Aprender a utilizar um botão com o ESP32;
- Aprender a ler uma entrada digital com digitalRead();
- Controlar um LED através de digitalWrite();
- Utilizar if e else para criar uma decisão;
- Compreender a utilização do INPUT_PULLDOWN;
- Perceber a interação entre hardware e software;

  Material utilizado:

  - ESP32;
  - Breadboard;
  - LED;
  - Resistência de 220 ohms;
  - Botão de pressão;
  - Jumpers;
  - Cabo USB;
 
  Ligações:

  - LED

 . Led ligado ao D23;
 . Resistência de 220 ohms;
 . GND ligado à linha negativa da breadboard;

 - Botão

 . Botão ligado ao 3.3V;
 . Sinal do botão ligado ao D22;
 . GND ligado à linha negativa da breadboard;

 O pino D22 foi configurado como INPUT_PULLDOWN.

 O que aprendi?

Neste projeto aprendi que um microcontrolador pode receber informação através de sensores ou botões e tomar decisóes com base nessa informaçáo.

Foi o primeiro projeto em que fiz o ESP32 reagir diretamente a uma ação física.

Resultado:

O projeto foi testado com sucesso.

Botão ON -> LED ON
Botão OFF -> LED OFF
