## Tarefa da aula síncrona do dia 29 de janeiro de 2025 - Atividade 1

### 🗒️Enunciado:
Com o emprego da função add_repeating_timer_ms(), presente na ferramenta Pico SDK, projete um semáforo com temporização de 3 segundos para cada alteração de sinal. O fluxograma simplificado de atuação do semáforo pode ser visualizado na Figura 1. Nesta prática, será necessário simular os seguintes componentes

### 📝Objetivos:
 - O acionamento dos LEDs (sinais do semáforo) deve iniciar na
cor vermelha, conforme orientação presente na Figura 1, alterando para amarela e, em seguida, verde.
 - O temporizador deve ser ajustado para um atraso de 3 segundos (3.000ms).
-  A mudança de estado dos LEDs deve ser implementa na função
de call-back do temporizador, a exemplo da rotina trabalhada na aula síncrona - repeating_timer_callback().
- A rotina principal, presente no interior da estrutura de
repetição while, deve imprimir algum tipo de informação a cada
segundo (1.000 ms) - a mensagem enviada pela porta serial fica
a critério do discente.
- Com o emprego da Ferramenta Educacional BitDogLab, faça um experimento com o código.

### ❗Requisitos para execução do projeto (Software)
- Compilador Arm gcc instalado
- PICO SDK intalado
- Visual Studio Code instalado
- Extensão do Respberry Pi Pico instalada
- Extensão do Wokwi Simulator instalada e configurada
- Extensões Cmake e Cmake tools instaladas 

### ❗Requisitos para execução do projeto (Hardware)
- Kit de desenvolvimento BitDogLab

### Instruções para a execução do projeto

1. Baixe o projeto na sua maquina atráves do cmd pelo comando: 
    ```bash 
    git clone https://github.com/Kuroikenshiga/Tarefa-AulaSincrona_29-01_A1.git
2. Abra o Visual Studio Code.
3. No menu lateral esquerdo, encontre a extensão do Respberry Pi Pico e clique nela.
4. Selecione a opção "Import Project"
5. No campo "Location" clique no botão "Change" e selecione o projeto que você acabou de baixar na sua maquina.
6. Clique no botão "Import"
7. Após carregar todos os arquivos necessários, clique na opção "Compile" presente no menu inferior direito.

