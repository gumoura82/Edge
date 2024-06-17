# Projeto:
## Descrição do projeto:
Esse projeto tem como objetivo captar e informar as equipes do automobilismo sobre carro e pista durante percursos. O projeto lê a quiantidade de luminosidade na pista e informa o nível de atenção necessária do piloto para garantir sua segurança, o mesmo lê a temepratura do motor e se exceder a temperatura aceitável um motor externo para de se mexer como alerta, ele também lê a umidade e informa no Serial Monitar.

## Estrutura do projeto:
1x Arduino Uno
1x Breadboard
1x Sensor de umidade do solo
1x LDR (sensor de luminosidade)
1x Sensor de temperatura TMP36
1x Transistor NPN (2N2222)
1x Motor DC
3x Resistores de 10k ohms
1x Resistor de 220 ohms

## Funcionalidades
### Leitura dos Dados
- **Função `ler_sensores()`**: Lê os valores dos sensores de temperatura, umidade e luminosidade.

### Conversão de Dados
- **Função `converter_temperatura(analog_value)`**: Converte a leitura analógica do sensor de temperatura para graus Celsius.

- **Função `converter_umidade(analog_value)`**: Converte a leitura analógica do sensor de umidade para porcentagem.

### Controle de Segurança
- **Função `controle_luminosidade(light_level)`**: Define o nível de atenção necessário do piloto com base na leitura do sensor de luminosidade, utilizando LEDs de diferentes cores.

- **Função `controle_temperatura(temperature)`**: Controla um motor externo para alertar se a temperatura do motor exceder um valor aceitável.

### Execução Principal
- **Função `loop()`**: Executa a leitura dos sensores, controla os LEDs e o motor com base nos valores lidos e exibe as informações no Serial Monitor.
## Instruções de Uso

### Pré-requisitos

- Arduino IDE instalado.

- Arduino Uno e componentes eletrônicos listados conectados conforme o diagrama.

### Preparação do Projeto

- Certifique-se de que todos os componentes estão conectados corretamente na breadboard e no Arduino conforme o diagrama de montagem.

- Carregue o código no Arduino Uno usando a Arduino IDE.

### Execução do Projeto

- Conecte o Arduino ao computador usando o cabo USB.

- Abra a Arduino IDE e carregue o código fornecido no Arduino.

- Abra o Serial Monitor na Arduino IDE para visualizar as leituras dos sensores.

### Informações Relevantes

- Certifique-se de que todos os componentes estão funcionando corretamente e conectados de acordo com o diagrama.

- As leituras dos sensores de temperatura, umidade e luminosidade serão exibidas no Serial Monitor.

- Os LEDs indicam o nível de luminosidade na pista:

- LED verde aceso: alta luminosidade.

- LED amarelo aceso: luminosidade moderada.

- LED vermelho aceso: baixa luminosidade.

- O motor será desativado se a temperatura do motor exceder 90°C como medida de segurança.

### Informações Adicionais

- Verifique se o sensor de umidade está devidamente calibrado para a leitura correta dos valores.

- O sensor de luminosidade (LDR) deve estar posicionado corretamente para capturar a luz ambiente na pista.

- Mantenha os sensores limpos e em bom estado para garantir a precisão das leituras.

## Link do projeto:
<a target="_blank" href="https://www.tinkercad.com/things/3usDwgRt4i4-edge-sprint/editel">Acesse o link do nosso projeto no Tinkercad</a>

## Nomes e RMs

- **Nome**:	  Gustavo Oliveira de Moura	        **RM**: 555827
- **Nome**:	  Lynn Bueno Rosa			              **RM**: 551102
- **Nome**:	  Ygor Vieira Pontes          	    **RM**: 555686
- **Nome**:	  Vinicius Matareli     	          **RM**: 555200
- **Nome**:	 	Giovanne C. Z. Silva 	            **RM**: 556223
