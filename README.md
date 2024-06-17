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













## Nomes e RMs

- **Nome**:	  Gustavo Oliveira de Moura	        **RM**: 555827
- **Nome**:	  Lynn Bueno Rosa			              **RM**: 551102
- **Nome**:	  Ygor Vieira Pontes          	    **RM**: 555686
- **Nome**:	  Vinicius Matareli     	          **RM**: 555200
- **Nome**:	 	Giovanne C. Z. Silva 	            **RM**: 556223
