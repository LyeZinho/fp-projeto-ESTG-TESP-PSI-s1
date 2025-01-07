/*
### **Requisitos do Projeto**

#### **Cenário e Objetivos**
1. **Propósito do Projeto:**
   - Desenvolver um protótipo de aplicação em linguagem C para gestão das submissões de exercícios.
   - Integrar no futuro os dados na Plataforma para o Sucesso Académico.

2. **Indicadores-Chave de Sucesso:**
   - Número médio de créditos ECTS realizados por estudante.
   - Taxa de renovação de inscrições no fim do primeiro ano curricular.

#### **Funcionalidades da Aplicação**
1. **Gestão de Dados:**
   - **Estudantes:** Registrar e consultar identificador único, número, nome e e-mail.
   - **Fichas de Exercícios:** Registrar e consultar identificador único, nome, número de exercícios e data de publicação.
   - **Exercícios:** Registrar e consultar identificador único, identificador da ficha, nome, grau de dificuldade e tipo de solução.
   - **Submissões:** Registrar e consultar identificador único, identificador do estudante, ficha e exercício, data da submissão, número de linhas e classificação.

2. **Estatísticas:**
   - Total de submissões realizadas por estudante.
   - Média das classificações das submissões realizadas.
   - Percentagem de exercícios resolvidos em cada ficha.

3. **Persistência de Dados:**
   - Carregar dados a partir de ficheiros binários ao iniciar a aplicação.
   - Armazenar dados em ficheiros binários ao encerrar ou quando solicitado.

4. **Interface Usuário:**
   - Menu para selecionar funcionalidades.
   - Mensagens de erro/aviso para validação de entradas.

#### **Requisitos Técnicos**
1. **Especificações Técnicas:**
   - Linguagem: ANSI C.
   - IDE: Visual Studio Code.
   - Dados:
     - Até 100 estudantes.
     - Até 10 fichas, cada uma com até 10 exercícios.
     - Até 10.000 submissões.
   - Estruturas: Vetores, structs e ficheiros.

2. **Restrições:**
   - Proibido o uso de:
     - Variáveis globais.
     - Funções sem parâmetros e/ou que não devolvam valores.
     - GOTO ou chamadas recursivas.
   - Limite de 25 linhas por função (exceto `main`).
   - `main` apenas orquestra chamadas de funções.

3. **Armazenamento:**
   - Apenas leitura/escrita explícita para persistência.

#### **Relatório**
1. **Estrutura do Relatório (em PDF):**
   - Descrição de estruturas de dados utilizadas.
   - Constantes e variáveis principais.
   - Funcionalidades implementadas e funções associadas.
   - Funcionalidades não implementadas.
   - Validação de entradas.
   - Testes realizados e cenários.

#### **Avaliação**
1. **Parâmetros de Avaliação e Pesos:**
   - Estruturas de dados: 5%
   - Estrutura geral do programa: 5%
   - Registo e consulta de estudantes: 10%
   - Registo e consulta de fichas de exercícios: 10%
   - Registo e consulta de exercícios: 15%
   - Registo e consulta de submissões: 20%
   - Estatísticas: 15%
   - Ficheiros binários: 10%
   - Relatório: 10%

2. **Entrega e Penalidades:**
   - Primeira entrega: 7 de janeiro de 2025.
   - Segunda entrega: 8 de janeiro de 2025.
   - Penalidade por plágio ou violação de integridade académica.

#### **Aspetos de Funcionamento**
1. **Trabalho em Grupo:**
   - Grupos de dois estudantes.
   - Informar nomes e números ao docente até 8 de novembro de 2024.

2. **Entrega:**
   - Ficheiro compactado no Moodle.
   - Considerado submetido após confirmação do Moodle.

3. **Orientações Gerais:**
   - Questões ou omissões no enunciado devem ser esclarecidas com docentes.

#### **Cronograma**
1. **Publicação do Enunciado:** 23 de outubro de 2024.
2. **Indicação dos Grupos:** 8 de novembro de 2024.
3. **Primeira Entrega:** 7 de janeiro de 2025.
4. **Segunda Entrega:** 8 de janeiro de 2025.

Estes são os requisitos completos baseados no enunciado. Se precisar de mais detalhes ou auxílio na implementação, é só avisar!



Roadmap:

Segue o roadmap detalhado para a implementação do projeto, com os passos necessários para o desenvolvimento do protótipo solicitado:

---

## **Roadmap Detalhado para o Projeto**

### **1. Planejamento e Estrutura Inicial**
1. **Configuração do Ambiente de Desenvolvimento:**
   - Instalar e configurar o Visual Studio Code.
   - Garantir compatibilidade com ANSI C.
   - Criar estrutura de pastas do projeto:
     - `/src`: Código-fonte.
     - `/data`: Arquivos binários de dados.
     - `/docs`: Relatório e documentação.

2. **Definição de Estruturas de Dados:** (feito)
   - Criar `structs` para cada tipo de dado:
     - `Estudante`.
     - `FichaDeExercicios`.
     - `Exercicio`.
     - `Submissao`.

3. **Definir Constantes e Limites:** (feito)
   - Máximo de 100 estudantes.
   - Máximo de 10 fichas, 10 exercícios por ficha e 10.000 submissões.

4. **Mapeamento de Funcionalidades:** (pendente)
   - Criar um documento descrevendo as funcionalidades básicas e sua divisão em funções.

---

### **2. Desenvolvimento de Funcionalidades Básicas** (feito)
1. **Gerenciamento de Estudantes:**
   - **Registrar estudante:**
     - Criar função para adicionar um novo estudante.
     - Validar dados (e.g., email único).
   - **Consultar estudante:**
     - Buscar pelo número do estudante.

2. **Gerenciamento de Fichas de Exercícios:**
   - **Registrar ficha:**
     - Criar função para adicionar uma nova ficha.
     - Validar que o identificador seja único.
   - **Consultar ficha:**
     - Buscar pelo nome ou identificador.

3. **Gerenciamento de Exercícios:**
   - **Registrar exercício:**
     - Criar função para adicionar exercício a uma ficha.
     - Validar identificador único e número de exercícios da ficha.
   - **Consultar exercício:**
     - Buscar por identificador ou grau de dificuldade.

4. **Gerenciamento de Submissões:**
   - **Registrar submissão:**
     - Criar função para adicionar submissão com:
       - Validação da data e ID de estudante, ficha e exercício.
       - Garantir limite de submissões.
   - **Consultar submissão:**
     - Buscar por estudante ou exercício.

---

### **3. Implementação das Estatísticas**  (feito)
1. **Estatísticas por Estudante:**
   - Criar funções para:
     - Total de submissões realizadas.
     - Média das classificações nas submissões.
     - Percentual de exercícios resolvidos por ficha.

---

### **4. Persistência de Dados** (pendente)
1. **Leitura de Arquivos Binários:**
   - Criar função para carregar dados salvos ao iniciar a aplicação.
   - Validar integridade dos dados lidos.

2. **Gravação em Arquivos Binários:** (pendente)
   - Criar função para salvar dados em arquivo ao encerrar a aplicação ou sob demanda.

---

### **5. Validações e Boas Práticas** (feito)
1. **Validação de Dados:**
   - Criar funções auxiliares para validar:
     - Emails, datas e valores únicos.
     - Limites de cada estrutura (100 estudantes, etc.).

2. **Boas Práticas:** (feito)
   - Evitar variáveis globais.
   - Garantir modularidade.
   - Documentar todas as funções com comentários.

---

### **6. Criação de Interface de Menu**
1. Criar menus principais e submenus para:
   - Gerenciamento de Estudantes.
   - Gerenciamento de Fichas.
   - Gerenciamento de Exercícios.
   - Gerenciamento de Submissões.
   - Estatísticas.
   - Gerenciamento de Arquivos.

2. Garantir fácil navegação e exibir mensagens de erro ou sucesso.

---

### **7. Testes**
1. **Testes Funcionais:**
   - Criar cenários de teste para:
     - Inserção, consulta e manipulação de dados.
     - Cálculo de estatísticas.

2. **Testes com Dados em Arquivos:**
   - Garantir consistência ao carregar/salvar dados.

---

### **8. Documentação**
1. **Relatório:**
   - Descrever:
     - Estruturas de dados.
     - Funcionalidades implementadas.
     - Validações de entrada.
     - Cenários de teste.

2. **Código:**
   - Documentar cada função com objetivos e parâmetros.

---

### **9. Refinamento Final**
1. Revisar todas as funcionalidades.
2. Garantir conformidade com o enunciado.
3. Compactar o projeto para submissão no formato exigido.

---

### **10. Futuras Funcionalidades (Segunda Entrega)**
- Adicionar novas estatísticas.
- Implementar validação semiautomática com docentes.

---

Se precisar de ajuda em alguma etapa específica, posso detalhar mais cada parte! 😊
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <stddef.h>

#pragma region Constantes
/*
    Os tamanhos máximos de cada array serão predefinidos,
    de forma a facilitar a manutenção do código, e manter um padrão,
    durante o desenvolvimento.

*/

/*
3. **Definir Constantes e Limites:**
   - Máximo de 100 estudantes.
   - Máximo de 10 fichas, 10 exercícios por ficha e 10.000 submissões.
*/
// Tamanho máximo de cada array
#define MAX_USERS 100
#define MAX_FICHAS 10
#define MAX_EXERCICIOS 10
#define MAX_SUBMISSOES 10000

// Tamanhos máximos para strings
#define MAX_NOME 100
#define MAX_EMAIL 100

// Tamanho máximo para datas
#define MAX_DATA 11

#pragma endregion

#pragma region Estruturas
// Código dentro da região
/*

User
ID,
número,
nome,
e-mail.

Submissão
ID,
ID do estudante, (relacionado com user)
ID da ficha, (relacionado com ficha de exercícios)
ID do exercício, (relacionado com exercício)
data,
nº de linhas,
classificação.


Ficha de Exercícios
ID,
nome,
nº de exercícios,
data de publicação.


Exercício
ID,
ID da ficha, (relacionado com ficha de exercícios)
nome,
grau de dificuldade,
tipo de solução.


   - Criar `structs` para cada tipo de dado:
     - `Estudante`.
     - `FichaDeExercicios`.
     - `Exercicio`.
     - `Submissao`.
*/

// Estrutura User
typedef struct
{
   int id;
   int numero;
   char nome[MAX_NOME];
   char email[MAX_EMAIL];
} User;

// Estrutura Submissão
typedef struct
{
   int id;
   int id_user;
   int id_ficha;
   int id_exercicio;
   char data[11];
   int n_linhas;
   int classificacao;
} Submissao;

// Estrutura Ficha de Exercícios
typedef struct
{
   int id;
   char nome[MAX_NOME];
   int n_exercicios;
   char data[11];
} FichaExercicios;

// Estrutura Exercício
typedef struct
{
   int id;
   int id_ficha;
   char nome[MAX_NOME];
   int grau_dificuldade;
   char tipo_solucao[10];
} Exercicio;

// User *user, int *n_users, FichaExercicios *fichas, int *n_fichas, Exercicio *exercicios, int *n_exercicios, Submissao *submissoes, int *n_submissoes

// Estrutura para armazenar os dados do menu server unica e exclusivamente para passar os dados entre as funções do menu
typedef struct 
{
   User *users;
   int *n_users;
   FichaExercicios *fichas;
   int *n_fichas;
   Exercicio *exercicios;
   int *n_exercicios;
   Submissao *submissoes;
   int *n_submissoes;
} DadosMenu;


#pragma endregion

#pragma region Macros

#define TAMANHO_ARRAY(arr) (sizeof(arr) / sizeof((arr)[0])) // Macro para obter o tamanho de um array tipo qualquer

#pragma endregion

#pragma region Protótipos Funções

// Funções Genéricas ----------------------
int escreverFicheiroBinario(char *nome_ficheiro, void *dados, int tamanho_dados);
int lerFicheiroBinario(char *nome_ficheiro, void *dados, int tamanho_dados);
int receberString(char *mensagem, char *string, int tamanho);
int receberInteiro(char *mensagem);
float receberFloat(char *mensagem);
bool validarEmail(char *email);
bool validarData(char *data);
int tamanhoArrayUsers(User *users);
int tamanhoArraySubmissoes(Submissao *submissoes);
int tamanhoArrayFichas(FichaExercicios *fichas);
int tamanhoArrayExercicios(Exercicio *exercicios);


// Registrar e consultar dados ----------------------
int registarEstudante(User *users, int *n_users);
int consultarEstudante(User *users, int n_users);
int registarFichaExercicios(FichaExercicios *fichas, int *n_fichas);
int consultarFichaExercicios(FichaExercicios *fichas, int n_fichas);
int registarExercicio(Exercicio *exercicios, int *n_exercicios);
int consultarExercicio(Exercicio *exercicios, int n_exercicios);
int registarSubmissao(Submissao *submissoes, int *n_submissoes, DadosMenu *dadosMenu);
int consultarSubmissao(Submissao *submissoes, int n_submissoes);



// Estatísticas ----------------------
int totalSubmissoesEstudante(Submissao *submissoes, int n_submissoes, int id_user);
float mediaClassificacoes(Submissao *submissoes, int n_submissoes);
float percentagemExerciciosResolvidos(Exercicio *exercicios, int n_exercicios, int id_ficha);

// Persistencia de dados ----------------------
// int carregarDados(User *users, int *n_users, FichaExercicios *fichas, int *n_fichas, Exercicio *exercicios, int *n_exercicios, Submissao *submissoes, int *n_submissoes);
// int guardarDados(User *users, int n_users, FichaExercicios *fichas, int n_fichas, Exercicio *exercicios, int n_exercicios, Submissao *submissoes, int n_submissoes);

int guardarFicheiroUsers(User *users, int n_users);
int carregarFicheiroUsers(User *users, int *n_users);
int guardarFicheiroFichas(FichaExercicios *fichas, int n_fichas);
int carregarFicheiroFichas(FichaExercicios *fichas, int *n_fichas);
int guardarFicheiroExercicios(Exercicio *exercicios, int n_exercicios);
int carregarFicheiroExercicios(Exercicio *exercicios, int *n_exercicios);
int guardarFicheiroSubmissoes(Submissao *submissoes, int n_submissoes);
int carregarFicheiroSubmissoes(Submissao *submissoes, int *n_submissoes);
int guardarDados(User *users, int n_users, FichaExercicios *fichas, int n_fichas, Exercicio *exercicios, int n_exercicios, Submissao *submissoes, int n_submissoes);
int carregarDados(User *users, int *n_users, FichaExercicios *fichas, int *n_fichas, Exercicio *exercicios, int *n_exercicios, Submissao *submissoes, int *n_submissoes);
int validarDados(User *users, int n_users, FichaExercicios *fichas, int n_fichas, Exercicio *exercicios, int n_exercicios, Submissao *submissoes, int n_submissoes);
int ficheirosExistentes(int n_users, int n_fichas, int n_exercicios, int n_submissoes);
int criarFicheiros(int n_users, int n_fichas, int n_exercicios, int n_submissoes);



// Interface e menus ----------------------

int logo(int status);

int menuPrincipal(DadosMenu *dadosMenu);
int menuPrincipalSwitch(int opcao, DadosMenu *dadosMenu);

int menuConsultarDados(DadosMenu *dadosMenu);
int menuConsultarDadosSwitch(int opcao, DadosMenu *dadosMenu);

int menuListagemDados(DadosMenu *dadosMenu);
int menuListagemDadosSwitch(int opcao, DadosMenu *dadosMenu);

int menuRegistarDados(DadosMenu *dadosMenu);
int menuRegistarDadosSwitch(int opcao, DadosMenu *dadosMenu);

int menuEstatisticas(DadosMenu *dadosMenu);
int menuEstatisticasSwitch(int opcao, DadosMenu *dadosMenu);


// Testes ----------------------

void popularUsers(User *users, int *n_users);
void popularFichas(FichaExercicios *fichas, int *n_fichas);
void popularExercicios(Exercicio *exercicios, int *n_exercicios);
void popularSubmissao(Submissao *submissoes, int *n_submissoes);
void popularDadosTeste(User *users, int *n_users, FichaExercicios *fichas, int *n_fichas, Exercicio *exercicios, int *n_exercicios, Submissao *submissoes, int *n_submissoes);
int lerFicheiroConfiguracao();


#pragma endregion

#pragma region Main

   int main()
   {
      User users[MAX_USERS];                           // Array de utilizadores
      FichaExercicios fichas[MAX_FICHAS];               // Array de fichas de exercícios
      Exercicio exercicios[MAX_EXERCICIOS];             // Array de exercícios
      Submissao submissoes[MAX_SUBMISSOES];             // Array de submissões
      int n_users = 0, n_fichas = 0, n_exercicios = 0, n_submissoes = 0; // Número de utilizadores, fichas de exercícios, exercícios e submissões

      // Verificar se os ficheiros existem
      if (ficheirosExistentes(n_users, n_fichas, n_exercicios, n_submissoes) == -1)
      { // Verificar se os ficheiros existem
         printf("Não foi possível verificar a existência dos ficheiros, o sistema irá criar novos ficheiros e reiniciar.\n");
         return -1; // Terminar o programa
      }

      // Carregar os dados dos ficheiros binários
      if (carregarDados(users, &n_users, fichas, &n_fichas, exercicios, &n_exercicios, submissoes, &n_submissoes) == -1)
      { // Carregar os dados dos ficheiros binários
         return -1; // Terminar o programa
      }

      logo(0);
      DadosMenu dadosMenu = {users, &n_users, fichas, &n_fichas, exercicios, &n_exercicios, submissoes, &n_submissoes};

      if(lerFicheiroConfiguracao() == 1){
         popularDadosTeste(users, &n_users, fichas, &n_fichas, exercicios, &n_exercicios, submissoes, &n_submissoes);
      }


      int opcao; // Variável para armazenar a opção escolhida pelo utilizador
      do
      {
         opcao = menuPrincipal(&dadosMenu); // Mostrar o menu principal
         if (opcao == -1)
         { // Se ocorrer um erro
            return -1; // Terminar o programa
         }
      } while (opcao != 5);                                           // Repetir o menu principal até o utilizador escolher a opção de sair

      if (guardarDados(users, n_users, fichas, n_fichas, exercicios, n_exercicios, submissoes, n_submissoes) == -1)
      { // Guardar os dados em ficheiros binários
         return -1; // Terminar o programa
      }

      return 0; // Terminar o programa
   }
   
#pragma endregion


#pragma region Funções
/*
Codigos de status:
-1 -> Erro ( usado para informar que algo correu mal, se o menu retornar isto irá terminar o programa)
0 -> Sucesso ( usado para informar que algo correu como esperado)
1 -> Aviso ( usado para informar que algo não correu como esperado, mas não é um erro fatal)

*/
   #pragma region Funções Genéricas

      // Função Generica para escrever ficheiro binário
      /*
      LOGICA:

      1. Abrir o ficheiro para escrita
      2. Verificar se o ficheiro foi aberto corretamente
      3. Escrever os dados no ficheiro
      4. Fechar o ficheiro

      // Passagem de dados genéricos (void *dados) -> pode ser de qualquer tipo (nesse caso, é um ponteiro para os dados que serão escritos)
      // Retorna void -> não retorna nada
      */
      int escreverFicheiroBinario(char *nome_ficheiro, void *dados, int tamanho_dados)
      {                                               // void *dados -> ponteiro genérico (pode ser de qualquer tipo)
         FILE *ficheiro = fopen(nome_ficheiro, "wb"); // wb -> write binary
         if (ficheiro == NULL)
         {
            printf("Erro ao abrir o ficheiro %s para escrita.\n", nome_ficheiro);
            return -1;
         }

         fwrite(dados, tamanho_dados, 1, ficheiro);
         fclose(ficheiro);
         return 0;
      }

      // Função Generica para ler ficheiro binário
      /*
      LOGICA:

      1. Abrir o ficheiro para leitura
      2. Verificar se o ficheiro foi aberto corretamente
      3. Ler os dados do ficheiro
      4. Fechar o ficheiro

      // Passagem de dados genéricos (void *dados) -> pode ser de qualquer tipo (nesse caso, é um ponteiro para os dados para onde serão lidos)
      // Retorna void -> não retorna nada
      */
      int lerFicheiroBinario(char *nome_ficheiro, void *dados, int tamanho_dados)
      {
         FILE *ficheiro = fopen(nome_ficheiro, "rb"); 
         if (ficheiro == NULL)
         {
            printf("Erro ao abrir o ficheiro %s para leitura.\n", nome_ficheiro);
            return -1;
         }

         fread(dados, tamanho_dados, 1, ficheiro);
         fclose(ficheiro);
         return 0;
      }

      /*
      Função para validar ficheiros

      LOGICA:

      1. Se o ficheiro não existir, criar um novo ficheiro
      2. Se o ficheiro existir, retornar 0 (sucesso)
      3. Se houver um erro ao criar o ficheiro, retornar -1 (erro)
      */
      int validarFicheiros(char *nome_ficheiro)
      {
         FILE *ficheiro = fopen(nome_ficheiro, "rb");
         if (ficheiro == NULL)
         {
            ficheiro = fopen(nome_ficheiro, "wb");
            if (ficheiro == NULL)
            {
               printf("Erro ao criar o ficheiro %s.\n", nome_ficheiro);
               return -1;
            }
            fclose(ficheiro);
         }
         return 0;
      }

      // Função generica para receber uma string do utilizador (padrão para validar inputs)
      int receberString(char *mensagem, char *string, int tamanho) {
         printf("%s", mensagem);
         if (fgets(string, tamanho, stdin)) {
            string[strcspn(string, "\n")] = '\0'; // Remover o \n do final da string
            return 0;
         }
         return -1; // Indica erro de leitura
      }

      // Função generica para receber uma string que diz respeito a uma data (deve validar se a data é válida)
      int receberData(char *mensagem, char *data)
      {
         do
         {
            receberString(mensagem, data, MAX_DATA);
         } while (!validarData(data));
         return 0;
      }

      int receberInteiro(char *mensagem) {
         int valor;
         printf("%s", mensagem);
         while (scanf("%d", &valor) != 1) {
            printf("Entrada inválida. Tente novamente: ");
            while (getchar() != '\n'); // Limpar buffer de entrada
         }
         while (getchar() != '\n'); // Limpar buffer de entrada após leitura bem-sucedida
         return valor;
      }

      // Função generica para receber um float do utilizador (padrão para validar inputs)
      float receberFloat(char *mensagem)
      {
         float numero;
         printf("%s", mensagem);
         scanf("%f", &numero);
         getchar(); // Limpar o buffer do teclado
         return numero;
      }

      // Função generica para validar um email
      /*
      LOGICA:

      1. Percorrer a string do email
      2. Contar o número de arrobas (@) e pontos (.)
      3. Se houver 1 arroba e pelo menos 1 ponto, o email é válido (retornar true)

      */

      bool validarEmail(char *email) {
         // Simples validação para o formato de email
         const char *arroba = strchr(email, '@');
         return arroba && strchr(arroba, '.');
      }


      // Função generica para validar uma data
      /*
      LOGICA:

      1. Verificar se a data tem 10 caracteres
      2. Verificar se os caracteres nas posições 2, 5 e 7 são barras (/)
      3. Verificar se os restantes caracteres são dígitos (0-9)

      */

      bool validarData(char *data)
      {
         if (strlen(data) != 10)                         // Verificar se a data tem 10 caracteres
         {
            return false;                                // Retornar falso
         }
         if (data[2] != '/' || data[5] != '/')           // Verificar se os caracteres nas posições 2, 5 e 7 são barras (/)
         {
            return false;                                // Retornar falso 
         }
         for (int i = 0; i < 10; i++)                    // Verificar se os restantes caracteres são dígitos (0-9)
         {
            if (i != 2 && i != 5 && !isdigit(data[i]))   // Se o índice não for 2 nem 5 e o caractere não for um dígito
            {
               return false;                             // Retornar falso
            }
         }
         return true;
      }

      // Tamanho de um array função generica tipos de dados
      /*
         formula sizeof(arr) / sizeof(arr[0]) -> 

         sizeof(arr) -> tamanho total do array
         sizeof(arr[0]) -> tamanho do primeiro elemento do array

      */

      // Users função tamanho do array
      int tamanhoArrayUsers(User *users)
      {
         return sizeof(users) / sizeof(users[0]);
      }

      // Submissões função tamanho do array
      int tamanhoArraySubmissoes(Submissao *submissoes)
      {
         return sizeof(submissoes) / sizeof(submissoes[0]);
      }

      // Fichas de Exercícios função tamanho do array
      int tamanhoArrayFichas(FichaExercicios *fichas)
      {
         return sizeof(fichas) / sizeof(fichas[0]);
      }

      // Exercícios função tamanho do array
      int tamanhoArrayExercicios(Exercicio *exercicios)
      {
         return sizeof(exercicios) / sizeof(exercicios[0]);
      }


   #pragma endregion
   #pragma region Registar Consultar

         // Validar dados que são inseridos	

         /*

         // Estrutura User
         typedef struct
         {
            int id;
            int numero;
            char nome[MAX_NOME];
            char email[MAX_EMAIL];
         } User; 

         // Estrutura Submissão
         typedef struct
         {
            int id;
            int id_user; <- Relacionado com User (logo é necessário validar se o ID do User existe)
            int id_ficha; <- Relacionado com Ficha de Exercícios (logo é necessário validar se o ID da Ficha de Exercícios existe)
            int id_exercicio; <- Relacionado com Exercício (logo é necessário validar se o ID do Exercício existe)
            char data[11];
            int n_linhas;
            int classificacao;
         } Submissao; (relacionado com user, ficha de exercícios e exercício)

         // Estrutura Ficha de Exercícios
         typedef struct
         {
            int id;
            char nome[MAX_NOME];
            int n_exercicios;
            char data[11];
         } FichaExercicios;

         // Estrutura Exercício
         typedef struct
         {
            int id;
            int id_ficha; <- Relacionado com Ficha de Exercícios (logo é necessário validar se o ID da Ficha de Exercícios existe)
            char nome[MAX_NOME];
            int grau_dificuldade;
            char tipo_solucao[10];
         } Exercicio; (relacionado com exercício)

         */

         // Função para validar se os dados são válidos
         /*
         LOGICA:

         1. Percorrer o array de utilizadores
         2. Verificar se o ID do utilizador é igual ao ID recebido
         3. Se o ID do utilizador for igual ao ID recebido, retornar 0 (sucesso)
         4. Se o ID do utilizador não existir, retornar 1 (aviso)

         */

         int userExiste(User *users, int n_users, int id)
         {
            for (int i = 0; i < n_users; i++)
            { // Percorrer o array de utilizadores
               if (users[i].id == id)
               { // Se o ID do utilizador for igual ao ID recebido
                  return 0; // Retornar 0 (sucesso)
               }
            }
            return 1; // Retornar 1 (aviso)
         }

         // Função para validar se os dados são válidos
         /*
         LOGICA:

         1. Percorrer o array de fichas de exercícios
         2. Verificar se o ID da ficha de exercícios é igual ao ID recebido
         3. Se o ID da ficha de exercícios for igual ao ID recebido, retornar 0 (sucesso)
         4. Se o ID da ficha de exercícios não existir, retornar 1 (aviso)

         */

         int fichaExiste(FichaExercicios *fichas, int n_fichas, int id)
         {
            for (int i = 0; i < n_fichas; i++)
            { // Percorrer o array de fichas de exercícios
               if (fichas[i].id == id)
               { // Se o ID da ficha de exercícios for igual ao ID recebido
                  return 0; // Retornar 0 (sucesso)
               }
            }
            return 1; // Retornar 1 (aviso)
         }

         // Função para validar se os dados são válidos
         /*
         LOGICA:

         1. Percorrer o array de exercícios
         2. Verificar se o ID do exercício é igual ao ID recebido
         3. Se o ID do exercício for igual ao ID recebido, retornar 0 (sucesso)
         4. Se o ID do exercício não existir, retornar 1 (aviso)

         */

         int exercicioExiste(Exercicio *exercicios, int n_exercicios, int id)
         {
            for (int i = 0; i < n_exercicios; i++)
            { // Percorrer o array de exercícios
               if (exercicios[i].id == id)
               { // Se o ID do exercício for igual ao ID recebido
                  return 0; // Retornar 0 (sucesso)
               }
            }
            return 1; // Retornar 1 (aviso)
         }

         // Função para validar se os dados da submissão são válidos
         /*
         1. Verificar se o ID do utilizador, ficha de exercícios e exercício existem
         2. Se os IDs existirem, retornar 0 (sucesso)
         3. Se algum dos IDs não existir, retornar 1 (aviso)
         */
         int validarSubmissao(User *users, int n_users, FichaExercicios *fichas, int n_fichas, Exercicio *exercicios, int n_exercicios, Submissao *submissoes, int n_submissoes)
         {
            if (userExiste(users, n_users, submissoes[n_submissoes].id_user) == 0 && fichaExiste(fichas, n_fichas, submissoes[n_submissoes].id_ficha) == 0 && exercicioExiste(exercicios, n_exercicios, submissoes[n_submissoes].id_exercicio) == 0)
            { // Se o utilizador, ficha de exercícios e exercício existirem
               printf("Submissão válida.\n");
               return 0; // Retornar 0 (sucesso)
            }
            return 1; // Retornar 1 (aviso)
         }
         

         // Função para validar se os dados do exercício são válidos (relacionados com a ficha de exercícios ou seja deve existir uma ficha de exercícios com o ID recebido)
         int validarExercicio(Exercicio *exercicios, int n_exercicios, int id_ficha)
         {
            for (int i = 0; i < n_exercicios; i++)
            { // Percorrer o array de exercícios
               if (exercicios[i].id_ficha == id_ficha)
               { // Se o ID da ficha de exercícios for igual ao ID recebido
                  return 0; // Retornar 0 (sucesso)
               }
            }
            return 1; // Retornar 1 (aviso)
         }











      // Registar um novo estudante
      /*
      LOGICA:

      1. Receber o ID do estudante
      2. Verificar se o ID já existe
      3. Receber o número do estudante
      4. Receber o nome do estudante
      5. Receber o email do estudante
      6. Verificar se o email é válido
      7. Adicionar o estudante ao array de utilizadores
      8. Incrementar o número de utilizadores

      */
      
      int registarEstudante(User *users, int *n_users) {
         User user; // Variável para armazenar os dados do novo estudante
         user.id = *n_users + 1; // ID do novo estudante

         user.numero = receberInteiro("Número do estudante: "); // Receber o número do estudante

         receberString("Nome do estudante: ", user.nome, MAX_NOME); // Receber o nome do estudante

         do {
            receberString("Email do estudante: ", user.email, MAX_EMAIL); // Receber o email do estudante
            if (!validarEmail(user.email)) {
                  printf("Email inválido. Tente novamente.\n");
            }
         } while (!validarEmail(user.email)); // Validar o email do estudante

         users[*n_users] = user; // Adicionar o estudante ao array de utilizadores
         (*n_users)++;           // Incrementar o número de utilizadores

         return 0;               // Retornar 0 (sucesso)
      }
      // Consultar um estudante
      /*
      LOGICA:

      1. Receber o número do estudante
      2. Percorrer o array de utilizadores
      3. Se o número do estudante for igual ao número recebido, mostrar os dados do estudante
      4. Se o número do estudante não existir, mostrar uma mensagem de erro

      */

      int consultarEstudante(User *users, int n_users)
      {
         int numero = receberInteiro("Número do estudante: "); // Receber o número do estudante
         for (int i = 0; i < n_users; i++)
         { // Percorrer o array de utilizadores
            if (users[i].numero == numero)
            { // Se o número do estudante for igual ao número recebido
               printf("\n");
               printf("ID: %d\n", users[i].id); // Mostrar o ID do estudante
               printf("Número: %d\n", users[i].numero); // Mostrar o número do estudante
               printf("Nome: %s\n", users[i].nome); // Mostrar o nome do estudante
               printf("Email: %s\n", users[i].email); // Mostrar o email do estudante
               return 0; // Retornar 0 (sucesso)
            }
         }
         printf("Estudante não encontrado.\n"); // Mostrar uma mensagem de erro
         return 1; // Retornar 1 (aviso)
      }

      // Registar uma nova ficha de exercícios
      /*
      LOGICA:

      1. Receber o ID da ficha de exercícios
      2. Verificar se o ID já existe
      3. Receber o nome da ficha de exercícios
      4. Receber o número de exercícios
      5. Receber a data de publicação
      6. Adicionar a ficha de exercícios ao array de fichas
      7. Incrementar o número de fichas

      */

      int registarFichaExercicios(FichaExercicios *fichas, int *n_fichas)
      {
         FichaExercicios ficha; // Variável para armazenar os dados da nova ficha de exercícios
         ficha.id = *n_fichas + 1; // ID da nova ficha de exercícios
         receberString("Nome da ficha de exercícios: ", ficha.nome, MAX_NOME); // Receber o nome da ficha de exercícios
         ficha.n_exercicios = receberInteiro("Número de exercícios: "); // Receber o número de exercícios
         receberData("Data de publicação: ", ficha.data); // Receber a data de publicação

         fichas[*n_fichas] = ficha; // Adicionar a ficha de exercícios ao array de fichas
         (*n_fichas)++;             // Incrementar o número de fichas

         return 0; // Retornar 0 (sucesso)
      }

      // Consultar uma ficha de exercícios
      /*
      LOGICA:

      1. Receber o nome da ficha de exercícios
      2. Percorrer o array de fichas de exercícios
      3. Se o nome da ficha de exercícios for igual ao nome recebido, mostrar os dados da ficha de exercícios
      4. Se o nome da ficha de exercícios não existir, mostrar uma mensagem de erro

      */

      int consultarFichaExercicios(FichaExercicios *fichas, int n_fichas)
      {
         char nome[MAX_NOME]; // Variável para armazenar o nome da ficha de exercícios
         receberString("Nome da ficha de exercícios: ", nome, MAX_NOME); // Receber o nome da ficha de exercícios
         for (int i = 0; i < n_fichas; i++)
         { // Percorrer o array de fichas de exercícios
            if (strcmp(fichas[i].nome, nome) == 0)
            { // Se o nome da ficha de exercícios for igual ao nome recebido
               printf("\n");
               printf("ID: %d\n", fichas[i].id); // Mostrar o ID da ficha de exercícios
               printf("Nome: %s\n", fichas[i].nome); // Mostrar o nome da ficha de exercícios
               printf("Número de exercícios: %d\n", fichas[i].n_exercicios); // Mostrar o número de exercícios
               printf("Data de publicação: %s\n", fichas[i].data); // Mostrar a data de publicação
               return 0; // Retornar 0 (sucesso)
            }
         }
         printf("Ficha de exercícios não encontrada.\n"); // Mostrar uma mensagem de erro
         return 1; // Retornar 1 (aviso)
      }

      // Registar um novo exercício
      /*
      LOGICA:

      1. Receber o ID do exercício
      2. Verificar se o ID já existe
      3. Receber o ID da ficha de exercícios
      4. Verificar se o ID da ficha de exercícios existe
      5. Receber o nome do exercício
      6. Receber o grau de dificuldade
      7. Receber o tipo de solução

      */

      int registarExercicio(Exercicio *exercicios, int *n_exercicios)
      {
         Exercicio exercicio; // Variável para armazenar os dados do novo exercício
         exercicio.id = *n_exercicios + 1; // ID do novo exercício
         exercicio.id_ficha = receberInteiro("ID da ficha de exercícios: "); // Receber o ID da ficha de exercícios
         if (validarExercicio(exercicios, *n_exercicios, exercicio.id_ficha) != 0)
         { // Se o ID da ficha de exercícios não existir
            printf("\nErro: O ID da ficha de exercícios %d não existe.\n", exercicio.id_ficha);
            return 1; // Retornar 1 (aviso)
         }
         for (int i = 0; i < *n_exercicios; i++)
         { // Percorrer o array de exercícios
            if (exercicios[i].id == exercicio.id_ficha)
            { // Se o ID da ficha de exercícios for igual ao ID recebido
               receberString("Nome do exercício: ", exercicio.nome, MAX_NOME); // Receber o nome do exercício
               exercicio.grau_dificuldade = receberInteiro("Grau de dificuldade: "); // Receber o grau de dificuldade
               receberString("Tipo de solução: ", exercicio.tipo_solucao, 10); // Receber o tipo de solução

               exercicios[*n_exercicios] = exercicio; // Adicionar o exercício ao array de exercícios
               (*n_exercicios)++;                     // Incrementar o número de exercícios

               return 0; // Retornar 0 (sucesso)
            }
         }
         return 1; // Retornar 1 (aviso)
      }

      // Consultar um exercício
      /*
      LOGICA:

      1. Receber o ID do exercício
      2. Percorrer o array de exercícios
      3. Se o ID do exercício for igual ao ID recebido, mostrar os dados do exercício
      4. Se o ID do exercício não existir, mostrar uma mensagem de erro

      */

      int consultarExercicio(Exercicio *exercicios, int n_exercicios)
      {
         int id = receberInteiro("ID do exercício: "); // Receber o ID do exercício
         for (int i = 0; i < n_exercicios; i++)
         { // Percorrer o array de exercícios
            if (exercicios[i].id == id)
            { // Se o ID do exercício for igual ao ID recebido
               printf("\n");
               printf("ID: %d\n", exercicios[i].id); // Mostrar o ID do exercício
               printf("ID da ficha de exercícios: %d\n", exercicios[i].id_ficha); // Mostrar o ID da ficha de exercícios
               printf("Nome: %s\n", exercicios[i].nome); // Mostrar o nome do exercício
               printf("Grau de dificuldade: %d\n", exercicios[i].grau_dificuldade); // Mostrar o grau de dificuldade
               printf("Tipo de solução: %s\n", exercicios[i].tipo_solucao); // Mostrar o tipo de solução
               return 0; // Retornar 0 (sucesso)
            }
         }
         printf("Exercício não encontrado.\n"); // Mostrar uma mensagem de erro
         return 1; // Retornar 1 (aviso)
      }

      // Registar uma nova submissão
      /*
      LOGICA:

      1. Receber o ID da submissão
      2. Verificar se o ID já existe
      3. Receber o ID do estudante
      4. Verificar se o ID do estudante existe
      5. Receber o ID da ficha de exercícios
      6. Verificar se o ID da ficha de exercícios existe
      7. Receber o ID do exercício

      */
      int registarSubmissao(Submissao *submissoes, int *n_submissoes, DadosMenu *dadosMenu)
      {
         Submissao submissao; // Variável para armazenar os dados da nova submissão
         submissao.id = *n_submissoes + 1; // ID da nova submissão
         submissao.id_user = receberInteiro("ID do estudante: "); // Receber o ID do estudante
         submissao.id_ficha = receberInteiro("ID da ficha de exercícios: "); // Receber o ID da ficha de exercícios
         submissao.id_exercicio = receberInteiro("ID do exercício: "); // Receber o ID do exercício

         // Validar se os dados da submissão são válidos
         if (validarSubmissao(dadosMenu->users, *dadosMenu->n_users, dadosMenu->fichas, *dadosMenu->n_fichas, dadosMenu->exercicios, *dadosMenu->n_exercicios, submissoes, *n_submissoes) != 0)
         { // Se os dados da submissão não forem válidos
            printf("\nErro: Os dados da submissão não são válidos.\n");
            return 1; // Retornar 1 (aviso)
         }

         receberData("Data da submissão: ", submissao.data); // Receber a data da submissão
         submissao.n_linhas = receberInteiro("Número de linhas: "); // Receber o número de linhas
         submissao.classificacao = receberInteiro("Classificação: "); // Receber a classificação

         submissoes[*n_submissoes] = submissao; // Adicionar a submissão ao array de submissões
         (*n_submissoes)++;                      // Incrementar o número de submissões

         return 0; // Retornar 0 (sucesso)
      }

      // Consultar uma submissão
      /*
      LOGICA:

      1. Receber o ID da submissão
      2. Percorrer o array de submissões
      3. Se o ID da submissão for igual ao ID recebido, mostrar os dados da submissão
      4. Se o ID da submissão não existir, mostrar uma mensagem de erro

      */

      int consultarSubmissao(Submissao *submissoes, int n_submissoes)
      {
         int id = receberInteiro("ID da submissão: "); // Receber o ID da submissão
         for (int i = 0; i < n_submissoes; i++)
         { // Percorrer o array de submissões
            if (submissoes[i].id == id)
            { // Se o ID da submissão for igual ao ID recebido
               printf("\n");
               printf("ID: %d\n", submissoes[i].id); // Mostrar o ID da submissão
               printf("ID do estudante: %d\n", submissoes[i].id_user); // Mostrar o ID do estudante
               printf("ID da ficha de exercícios: %d\n", submissoes[i].id_ficha); // Mostrar o ID da ficha de exercícios
               printf("ID do exercício: %d\n", submissoes[i].id_exercicio); // Mostrar o ID do exercício
               printf("Data: %s\n", submissoes[i].data); // Mostrar a data da submissão
               printf("Número de linhas: %d\n", submissoes[i].n_linhas); // Mostrar o número de linhas
               printf("Classificação: %d\n", submissoes[i].classificacao); // Mostrar a classificação
               return 0; // Retornar 0 (sucesso)
            }
         }
         printf("Submissão não encontrada.\n"); // Mostrar uma mensagem de erro
         return 1; // Retornar 1 (aviso)
      }


      // Listar estudantes

      int listarEstudantes(User *users, int n_users)
      {
         if (n_users == 0)
         {
            printf("Não existem estudantes registados.\n");
            return 1;
         }

         for (int i = 0; i < n_users; i++)
         {
            if (strlen(users[i].nome) > 0)
            {
               printf("\n");
               printf("ID: %d\n", users[i].id);
               printf("Número: %d\n", users[i].numero);
               printf("Nome: %s\n", users[i].nome);
               printf("Email: %s\n", users[i].email);
               printf("\n");
            }
         }

         return 0;
      }

      // Listar fichas de exercícios

      int listarFichas(FichaExercicios *fichas, int n_fichas)
      {
         if (n_fichas == 0)
         {
            printf("Não existem fichas de exercícios registadas.\n");
            return 1;
         }
         for (int i = 0; i < n_fichas; i++)
         {
            if (strlen(fichas[i].nome) > 0)
            {
               printf("\n");
               printf("ID: %d\n", fichas[i].id);
               printf("Nome: %s\n", fichas[i].nome);
               printf("Número de exercícios: %d\n", fichas[i].n_exercicios);
               printf("Data de publicação: %s\n", fichas[i].data);
               printf("\n");
            }
         }

         return 0;
      }

      // Listar exercícios

      int listarExercicios(Exercicio *exercicios, int n_exercicios)
      {
         if (n_exercicios == 0)                                                           // Se não existirem exercícios registados
         {
            printf("Não existem exercícios registados.\n");                               // Mostrar uma mensagem de aviso
            return 1;                                                                     // Retornar 1 (aviso)
         }
         for (int i = 0; i < n_exercicios; i++)                                           // Percorrer o array de exercícios
         {
            if (strlen(exercicios[i].nome) > 0)                                           // Se o nome do exercício não estiver vazio
            {
               printf("\n");
               printf("ID: %d\n", exercicios[i].id);
               printf("ID da ficha de exercícios: %d\n", exercicios[i].id_ficha);
               printf("Nome: %s\n", exercicios[i].nome);
               printf("Grau de dificuldade: %d\n", exercicios[i].grau_dificuldade);
               printf("Tipo de solução: %s\n", exercicios[i].tipo_solucao);
               printf("\n");
            }
         }

         return 0;
      }

      // Listar submissões

      int listarSubmissoes(Submissao *submissoes, int n_submissoes)
      {
         for (int i = 0; i < n_submissoes; i++)                                           // Percorrer o array de submissões
         {
            if (strlen(submissoes[i].data) > 0)                                           // Se a data da submissão não estiver vazia
            {
               printf("\n");
               printf("ID: %d\n", submissoes[i].id);
               printf("ID do estudante: %d\n", submissoes[i].id_user);
               printf("ID da ficha de exercícios: %d\n", submissoes[i].id_ficha);
               printf("ID do exercício: %d\n", submissoes[i].id_exercicio);
               printf("Data: %s\n", submissoes[i].data);
               printf("Número de linhas: %d\n", submissoes[i].n_linhas);
               printf("Classificação: %d\n", submissoes[i].classificacao);
               printf("\n");
            }
         }

         return 0;      
      }


      // Apagar estudante

      int apagarEstudante(User *users, int *n_users)
      {
         int id = receberInteiro("ID do estudante: ");
         // Perguntar ao utilizador se tem a certeza que quer apagar o estudante
         char confirmacao;
         printf("Tem a certeza que deseja apagar o estudante? (s/n): ");
         scanf(" %c", &confirmacao);
         if (confirmacao == 's' || confirmacao == 'S')
         {
            for (int i = 0; i < *n_users; i++)                 // Percorrer o array de utilizadores 
            {                                                  // Procurar o estudante com o ID recebido
               if (users[i].id == id)                          // Se o ID do estudante for igual ao ID recebido
               {                                               // Apagar o estudante
                  users[i].id = -1;                             // Definir o ID do estudante como -1
                  (*n_users)--;                                 // Decrementar o número de utilizadores
                  return 0;                                    // Retornar 0 (sucesso)
               }
            }
         }
         return 1;                                             // Retornar 1 (aviso)
      }

      // Apagar ficha de exercícios

      int apagarFicha(FichaExercicios *fichas, int *n_fichas)
      {
         int id = receberInteiro("ID da ficha de exercícios: ");
         // Perguntar ao utilizador se tem a certeza que quer apagar a ficha de exercícios
         char confirmacao;
         printf("Tem a certeza que deseja apagar a ficha de exercícios? (s/n): ");
         scanf(" %c", &confirmacao);
         if (confirmacao == 's' || confirmacao == 'S')
         {
            for (int i = 0; i < *n_fichas; i++)                 // Percorrer o array de fichas de exercícios
            {                                                   // Procurar a ficha de exercícios com o ID recebido
               if (fichas[i].id == id)                           // Se o ID da ficha de exercícios for igual ao ID recebido
               {                                                // Apagar a ficha de exercícios
                  fichas[i].id = -1;                             // Definir o ID da ficha de exercícios como -1
                  (*n_fichas)--;                                 // Decrementar o número de fichas de exercícios
                  return 0;                                     // Retornar 0 (sucesso)
               }
            }
         }
         return 1;                                               // Retornar 1 (aviso)
      }

      // Apagar exercício

      int apagarExercicio(Exercicio *exercicios, int *n_exercicios)
      {
         int id = receberInteiro("ID do exercício: ");
         // Perguntar ao utilizador se tem a certeza que quer apagar o exercício
         char confirmacao;
         printf("Tem a certeza que deseja apagar o exercício? (s/n): ");
         scanf(" %c", &confirmacao);
         if (confirmacao == 's' || confirmacao == 'S')
         {
            for (int i = 0; i < *n_exercicios; i++)                 // Percorrer o array de exercícios
            {                                                       // Procurar o exercício com o ID recebido
               if (exercicios[i].id == id)                          // Se o ID do exercício for igual ao ID recebido
               {                                                    // Apagar o exercício
                  exercicios[i].id = -1;                            // Definir o ID do exercício como -1
                  (*n_exercicios)--;                                // Decrementar o número de exercícios
                  return 0;                                         // Retornar 0 (sucesso)
               }
            }
         }
         return 1;                                                   // Retornar 1 (aviso)
      }

      // Apagar submissão

      int apagarSubmissao(Submissao *submissoes, int *n_submissoes)
      {
         int id = receberInteiro("ID da submissão: ");
         // Perguntar ao utilizador se tem a certeza que quer apagar a submissão
         char confirmacao;
         printf("Tem a certeza que deseja apagar a submissão? (s/n): ");
         scanf(" %c", &confirmacao);
         if (confirmacao == 's' || confirmacao == 'S')
         {
            for (int i = 0; i < *n_submissoes; i++)                 // Percorrer o array de submissões
            {                                                       // Procurar a submissão com o ID recebido
               if (submissoes[i].id == id)                          // Se o ID da submissão for igual ao ID recebido
               {                                                    // Apagar a submissão
                  submissoes[i].id = -1;                            // Definir o ID da submissão como -1
                  (*n_submissoes)--;                                // Decrementar o número de submissões
                  return 0;                                         // Retornar 0 (sucesso)
               }
            }
         }
         return 1;                                                   // Retornar 1 (aviso)
      }

   #pragma endregion

   #pragma region Estatísticas

      // Estatísticas por estudante
      // Total de submissões realizadas por estudante.
      int totalSubmissoesEstudante(Submissao *submissoes, int n_submissoes, int id_user)
      {
         int total = 0; // Inicializar o total de submissões
         for (int i = 0; i < n_submissoes; i++)
         { // Percorrer o array de submissões
            if (submissoes[i].id_user == id_user)
            { // Se o ID do estudante for igual ao ID recebido
               total++; // Incrementar o total de submissões
            }
         }
         printf("Total de submissões realizadas: %d\n", total); // Mostrar o total de submissões
         return 0; // Retornar 0 (sucesso)
      }

      // Média das classificações das submissões realizadas.
      float mediaClassificacoes(Submissao *submissoes, int n_submissoes)
      {
         int total = 0; // Inicializar o total das classificações
         for (int i = 0; i < n_submissoes; i++)
         {                                        // Percorrer o array de submissões
            total += submissoes[i].classificacao; // Somar a classificação ao total
         }
         printf("Média das classificações: %.2f\n", (float)total / n_submissoes); // Mostrar a média das classificações
         return 0; // Retornar 0 (sucesso)
      }

      // Percentagem de exercícios resolvidos em cada ficha.
      float percentagemExerciciosResolvidos(Exercicio *exercicios, int n_exercicios, int id_ficha)
      {
         int total = 0; // Inicializar o total de exercícios
         for (int i = 0; i < n_exercicios; i++)
         { // Percorrer o array de exercícios
            if (exercicios[i].id_ficha == id_ficha)
            {           // Se o ID da ficha de exercícios for igual ao ID recebido
               total++; // Incrementar o total de exercícios
            }
         }
         printf("Percentagem de exercícios resolvidos: %.2f%%\n", (float)total / n_exercicios * 100); // Mostrar a percentagem de exercícios resolvidos
         return 0; // Retornar 0 (sucesso)
      }



      #pragma endregion

      #pragma region Persistencia de dados

      int validarStatus(int userStatus, int fichaStatus, int exercicioStatus, int submissaoStatus)
      {
         if (userStatus == -1 || fichaStatus == -1 || exercicioStatus == -1 || submissaoStatus == -1)
         {                                          // Se ocorrer um erro ao carregar os dados
            printf("Erro ao carregar os dados.\n"); // Mensagem de erro
            return -1;                              // Retorna -1
         }
         return 0; // Retorna 0
      }

      int guardarFicheiroUsers(User *users, int n_users)
      {
         FILE *ficheiro = fopen("users.dat", "wb"); // wb -> write binary
         if (ficheiro == NULL)
         {
            printf("Erro ao abrir o ficheiro users.dat para escrita.\n");
            return -1;
         }

         fwrite(users, sizeof(User), n_users, ficheiro);
         fclose(ficheiro);
         return 0;
      }

      int carregarFicheiroUsers(User *users, int *n_users)
      {
         FILE *ficheiro = fopen("users.dat", "rb");
         if (ficheiro == NULL)
         {
            printf("Erro ao abrir o ficheiro users.dat para leitura.\n");
            return -1;
         }

         // Determinar o tamanho do ficheiro
         fseek(ficheiro, 0, SEEK_END);    // Coloca o cursor no final do ficheiro
         long tamanho = ftell(ficheiro);  // Obtem o tamanho do ficheiro
         rewind(ficheiro);                // Coloca o cursor no inicio do ficheiro

         *n_users = tamanho / sizeof(User); // Calcula o número de usuários no ficheiro
         fread(users, sizeof(User), *n_users, ficheiro);
         fclose(ficheiro);
         return 0;
      }

      int guardarFicheiroFichas(FichaExercicios *fichas, int n_fichas)
      {
         FILE *ficheiro = fopen("fichas.dat", "wb"); // wb -> write binary
         if (ficheiro == NULL)
         {
            printf("Erro ao abrir o ficheiro fichas.dat para escrita.\n");
            return -1;
         }

         fwrite(fichas, sizeof(FichaExercicios), n_fichas, ficheiro);
         fclose(ficheiro);
         return 0;
      }

      int carregarFicheiroFichas(FichaExercicios *fichas, int *n_fichas)
      {
         FILE *ficheiro = fopen("fichas.dat", "rb"); // rb -> read binary
         if (ficheiro == NULL)
         {
            printf("Erro ao abrir o ficheiro fichas.dat para leitura.\n");
            return -1;
         }
         
         // Determinar o tamanho do ficheiro
         fseek(ficheiro, 0, SEEK_END);    // Coloca o cursor no final do ficheiro
         long tamanho = ftell(ficheiro);  // Obtem o tamanho do ficheiro
         rewind(ficheiro);                // Coloca o cursor no inicio do ficheiro

         *n_fichas = tamanho / sizeof(FichaExercicios); // Calcula o número de fichas no ficheiro
         fread(fichas, sizeof(FichaExercicios), *n_fichas, ficheiro);
         fclose(ficheiro);
         return 0;
      }

      int guardarFicheiroExercicios(Exercicio *exercicios, int n_exercicios)
      {
         FILE *ficheiro = fopen("exercicios.dat", "wb"); // wb -> write binary
         if (ficheiro == NULL)
         {
            printf("Erro ao abrir o ficheiro exercicios.dat para escrita.\n");
            return -1;
         }

         fwrite(exercicios, sizeof(Exercicio), n_exercicios, ficheiro);
         fclose(ficheiro);
         return 0;
      }

      int carregarFicheiroExercicios(Exercicio *exercicios, int *n_exercicios)
      {
         FILE *ficheiro = fopen("exercicios.dat", "rb"); // rb -> read binary
         if (ficheiro == NULL)
         {
            printf("Erro ao abrir o ficheiro exercicios.dat para leitura.\n");
            return -1;
         }

         // Determinar o tamanho do ficheiro
         fseek(ficheiro, 0, SEEK_END);    // Coloca o cursor no final do ficheiro
         long tamanho = ftell(ficheiro);  // Obtem o tamanho do ficheiro
         rewind(ficheiro);                // Coloca o cursor no inicio do ficheiro


         *n_exercicios = tamanho / sizeof(Exercicio); // Calcula o número de exercícios no ficheiro
         fread(exercicios, sizeof(Exercicio), *n_exercicios, ficheiro);
         fclose(ficheiro);
         return 0;
      }

      int guardarFicheiroSubmissoes(Submissao *submissoes, int n_submissoes)
      {
         FILE *ficheiro = fopen("submissoes.dat", "wb"); // wb -> write binary
         if (ficheiro == NULL)
         {
            printf("Erro ao abrir o ficheiro submissoes.dat para escrita.\n");
            return -1;
         }

         fwrite(submissoes, sizeof(Submissao), n_submissoes, ficheiro);
         fclose(ficheiro);
         return 0;
      }

      int carregarFicheiroSubmissoes(Submissao *submissoes, int *n_submissoes)
      {
         FILE *ficheiro = fopen("submissoes.dat", "rb"); // rb -> read binary
         if (ficheiro == NULL)
         {
            printf("Erro ao abrir o ficheiro submissoes.dat para leitura.\n");
            return -1;
         }

         // Determinar o tamanho do ficheiro
         fseek(ficheiro, 0, SEEK_END);    // Coloca o cursor no final do ficheiro
         long tamanho = ftell(ficheiro);  // Obtem o tamanho do ficheiro
         rewind(ficheiro);                // Coloca o cursor no inicio do ficheiro


         *n_submissoes = tamanho / sizeof(Submissao); // Calcula o número de submissões no ficheiro
         fread(submissoes, sizeof(Submissao), *n_submissoes, ficheiro);
         fclose(ficheiro);
         return 0;
      }

      // Guardar dados em ficheiros binários ao encerrar a aplicação.
      int guardarDados(User *users, int n_users, FichaExercicios *fichas, int n_fichas, Exercicio *exercicios, int n_exercicios, Submissao *submissoes, int n_submissoes)
      {
         int userStatus = guardarFicheiroUsers(users, n_users);
         int fichaStatus = guardarFicheiroFichas(fichas, n_fichas);
         int exercicioStatus = guardarFicheiroExercicios(exercicios, n_exercicios);
         int submissaoStatus = guardarFicheiroSubmissoes(submissoes, n_submissoes);

         return validarStatus(userStatus, fichaStatus, exercicioStatus, submissaoStatus);
      }

      // Carregar dados dos ficheiros binários ao iniciar a aplicação.
      int carregarDados(User *users, int *n_users, FichaExercicios *fichas, int *n_fichas, Exercicio *exercicios, int *n_exercicios, Submissao *submissoes, int *n_submissoes)
      {
         int userStatus = carregarFicheiroUsers(users, n_users);
         int fichaStatus = carregarFicheiroFichas(fichas, n_fichas);
         int exercicioStatus = carregarFicheiroExercicios(exercicios, n_exercicios);
         int submissaoStatus = carregarFicheiroSubmissoes(submissoes, n_submissoes);

         return validarStatus(userStatus, fichaStatus, exercicioStatus, submissaoStatus);
      }

      // Validar se os ficheiros foram carregados corretamente
      int validarDados(User *users, int n_users, FichaExercicios *fichas, int n_fichas, Exercicio *exercicios, int n_exercicios, Submissao *submissoes, int n_submissoes)
      {
         if (n_users == 0 || n_fichas == 0 || n_exercicios == 0 || n_submissoes == 0)
         {
            printf("Erro ao carregar os dados.\n");
            return -1;
         }
         return 0;
      }

      // Verificar se os ficheiros existem se não existirem criar ficheiros vazios
      int ficheirosExistentes(int n_users, int n_fichas, int n_exercicios, int n_submissoes)
      {
         FILE *ficheiro_users = fopen("users.dat", "rb");
         FILE *ficheiro_fichas = fopen("fichas.dat", "rb");
         FILE *ficheiro_exercicios = fopen("exercicios.dat", "rb");
         FILE *ficheiro_submissoes = fopen("submissoes.dat", "rb");

         if (ficheiro_users == NULL || ficheiro_fichas == NULL || ficheiro_exercicios == NULL || ficheiro_submissoes == NULL)
         {
            FILE *ficheiro_users = fopen("users.dat", "wb");
            FILE *ficheiro_fichas = fopen("fichas.dat", "wb");
            FILE *ficheiro_exercicios = fopen("exercicios.dat", "wb");
            FILE *ficheiro_submissoes = fopen("submissoes.dat", "wb");

            fclose(ficheiro_users);
            fclose(ficheiro_fichas);
            fclose(ficheiro_exercicios);
            fclose(ficheiro_submissoes);

            return -1;
         }

         return 0;
      }


   #pragma endregion

   #pragma region Validacoes dos Dados

      // Verificar se um email já existe
      bool emailExiste(User *users, int n_users, char *email)
      {
         for (int i = 0; i < n_users; i++) // Percorrer o array de utilizadores
         {
            if (strcmp(users[i].email, email) == 0)
            {               // Se o email do utilizador for igual ao email recebido
               return true; // O email já existe
            }
         }
         return false; // O email não existe
      }

      // Verificar se um número de estudante já existe
      bool numeroEstudanteExiste(User *users, int n_users, int numero)
      {
         for (int i = 0; i < n_users; i++) // Percorrer o array de utilizadores
         {
            if (users[i].numero == numero)
            {               // Se o número do utilizador for igual ao número recebido
               return true; // O número de estudante já existe
            }
         }
         return false; // O número de estudante não existe
      }

      // Verificar se um ID de ficha de exercícios já existe
      bool idFichaExerciciosExiste(FichaExercicios *fichas, int n_fichas, int id)
      {
         for (int i = 0; i < n_fichas; i++) // Percorrer o array de fichas de exercícios
         {
            if (fichas[i].id == id)
            {               // Se o ID da ficha de exercícios for igual ao ID recebido
               return true; // O ID da ficha de exercícios já existe
            }
         }
         return false; // O ID da ficha de exercícios não existe
      }
          
      // Verificar se um ID de exercício já existe
      bool idExercicioExiste(Exercicio *exercicios, int n_exercicios, int id)
      {
         for (int i = 0; i < n_exercicios; i++) // Percorrer o array de exercícios
         {
            if (exercicios[i].id == id)
            {               // Se o ID do exercício for igual ao ID recebido
               return true; // O ID do exercício já existe
            }
         }
         return false; // O ID do exercício não existe
      }
        
      // Verificar se um ID de submissão já existe
      bool idSubmissaoExiste(Submissao *submissoes, int n_submissoes, int id)
      {
         for (int i = 0; i < n_submissoes; i++) // Percorrer o array de submissões
         {
            if (submissoes[i].id == id)
            {               // Se o ID da submissão for igual ao ID recebido
               return true; // O ID da submissão já existe
            }
         }
         return false; // O ID da submissão não existe
      }
      #pragma endregion

      #pragma region Interface e menus

      // LIMITE DE 25 linhas por função
      // Todos os menus e funções de interface recebem os ponteiros para os arrays e dados necessários
      int logoText()
      {
         printf("██ ███    ██ ███████ ████████ ██ ████████ ██    ██ ████████  ██████      ██████   ██████  ██      ██ ████████ ███████  ██████ ███    ██ ██  ██████  ██████ \n");
         printf("██ ████   ██ ██         ██    ██    ██    ██    ██    ██    ██    ██     ██   ██ ██    ██ ██      ██    ██    ██      ██      ████   ██ ██ ██      ██    ██ \n");
         printf("██ ██ ██  ██ ███████    ██    ██    ██    ██    ██    ██    ██    ██     ██████  ██    ██ ██      ██    ██    █████   ██      ██ ██  ██ ██ ██      ██    ██ \n");
         printf("██ ██  ██ ██      ██    ██    ██    ██    ██    ██    ██    ██    ██     ██      ██    ██ ██      ██    ██    ██      ██      ██  ██ ██ ██ ██      ██    ██ \n");
         printf("██ ██   ████ ███████    ██    ██    ██     ██████     ██     ██████      ██       ██████  ███████ ██    ██    ███████  ██████ ██   ████ ██  ██████  ██████  \n\n");

         printf("██████  ███████     ██      ███████ ██ ██████  ██  █████                                                                                                     \n");
         printf("██   ██ ██          ██      ██      ██ ██   ██ ██ ██   ██                                                                                                   \n");
         printf("██   ██ █████       ██      █████   ██ ██████  ██ ███████                                                                                                   \n");
         printf("██   ██ ██          ██      ██      ██ ██   ██ ██ ██   ██                                                                                                   \n");
         printf("██████  ███████     ███████ ███████ ██ ██   ██ ██ ██   ██                                                                                                   \n\n");
      }
      int logo(int status)
      {
         logoText();

         if(status == 0)
         {
            printf("Bem-vindo ao sistema de gestão interna.\n");
         }
         else
         {
            printf("Erro ao carregar os dados.\n");
         }
         printf("\n");
         return status;
      }
      
      // Menu principal (mostrar as opções disponíveis e receber a opção do utilizador)
      // int menuPrincipal(User *user, FichaExercicios *fichas, Exercicio *exercicios, Submissao *submissoes)
      // int menuPrincipal(User *user, int *n_users, FichaExercicios *fichas, int *n_fichas, Exercicio *exercicios, int *n_exercicios, Submissao *submissoes, int *n_submissoes)
      int menuPrincipal(DadosMenu *dadosMenu)
      {
         int opcao; // Variável para armazenar a opção escolhida pelo utilizador
         printf("\n### Menu Principal ###\n");
         printf("1. Consultar Dados\n");
         printf("2. Registar Dados\n");
         printf("3. Estatísticas\n");
         printf("4. Guardar Dados\n");
         printf("5. Sair\n");
         printf("\n");
         opcao = receberInteiro("Escolha uma opção: ");                           // Receber a opção do utilizador
         printf("\n");
         return menuPrincipalSwitch(opcao, dadosMenu); // Chamar a função de switch para o menu principal
      }

      int guardarDadosEncurtado(DadosMenu *dadosMenu)
      {
         int status = guardarDados(dadosMenu->users, *dadosMenu->n_users, dadosMenu->fichas, *dadosMenu->n_fichas, dadosMenu->exercicios, *dadosMenu->n_exercicios, dadosMenu->submissoes, *dadosMenu->n_submissoes);
         if (status == 0)
         {
            printf("Dados guardados com sucesso.\n");
         }
         else
         {
            printf("Erro ao guardar os dados.\n");
         }
         return status;
      }

      // Switch para o menu principal
      int menuPrincipalSwitch(int opcao, DadosMenu *dadosMenu)
      {
         switch (opcao)
         {
         case 1:
            return menuConsultarDados(dadosMenu); // Chamar o menu de consultar dados
         case 2:
            return menuRegistarDados(dadosMenu); // Chamar o menu de registar dados
         case 3:
            return menuEstatisticas(dadosMenu); // Chamar o menu de estatísticas
         case 4:
            return guardarDadosEncurtado(dadosMenu); // Guardar os dados usado para caso queira guardar os dados sem sair
         case 5:
            // Guardar os dados antes e terminar o programa
            return guardarDadosEncurtado(dadosMenu);
         default:
            printf("Opção inválida.\n");
            return 0;
         }
      }

      // Menu de consultar dados
      int menuConsultarDados(DadosMenu *dadosMenu)
      {
         int opcao; // Variável para armazenar a opção escolhida pelo utilizador
         printf("\n### Menu Consultar Dados ###\n");
         printf("1. Consultar Estudante\n");
         printf("2. Consultar Ficha de Exercícios\n");
         printf("3. Consultar Exercício\n");
         printf("4. Consultar Submissão\n");
         printf("5. Listagens \n");
         printf("6. Voltar\n");
         printf("\n");
         opcao = receberInteiro("Escolha uma opção: "); // Receber a opção do utilizador
         printf("\n");
         return menuConsultarDadosSwitch(opcao, dadosMenu); // Chamar a função de switch para o menu de consultar dados
      }

      // Switch para o menu de consultar dados
      int menuConsultarDadosSwitch(int opcao, DadosMenu *dadosMenu)
      {
         switch (opcao)
         {
         case 1:
            return consultarEstudante(dadosMenu->users, *dadosMenu->n_users); // Consultar Estudante
         case 2:
            return consultarFichaExercicios(dadosMenu->fichas, *dadosMenu->n_fichas); // Consultar Ficha de Exercícios
         case 3:
            return consultarExercicio(dadosMenu->exercicios, *dadosMenu->n_exercicios); // Consultar Exercício
         case 4:
            return consultarSubmissao(dadosMenu->submissoes, *dadosMenu->n_submissoes); // Consultar Submissão
         case 5:
            return menuListagemDados(dadosMenu); // Menu de listagens
            return 0; // Voltar
         default:
            printf("Opção inválida.\n");
            return 0;
         }
      }

      int menuListagemDados(DadosMenu *dadosMenu)
      {
         int opcao; // Variável para armazenar a opção escolhida pelo utilizador
         printf("\n### Menu Listagens ###\n");
         printf("1. Listar Estudantes\n");
         printf("2. Listar Fichas de Exercícios\n");
         printf("3. Listar Exercícios\n");
         printf("4. Listar Submissões\n");
         printf("5. Voltar\n");
         printf("\n");
         opcao = receberInteiro("Escolha uma opção: "); // Receber a opção do utilizador
         printf("\n");
         return menuListagemDadosSwitch(opcao, dadosMenu); // Chamar a função de switch para o menu de consultar dados
      }

      int menuListagemDadosSwitch(int opcao, DadosMenu *dadosMenu)
      {
         switch (opcao)
         {
         case 1:
            listarEstudantes(dadosMenu->users, *dadosMenu->n_users);
            printf("\n");
            return 0;
         case 2:
            listarFichas(dadosMenu->fichas, *dadosMenu->n_fichas);
            printf("\n");
            return 0;
         case 3:
            listarExercicios(dadosMenu->exercicios, *dadosMenu->n_exercicios);
            printf("\n");
            return 0;
         case 4:
            listarSubmissoes(dadosMenu->submissoes, *dadosMenu->n_submissoes);
            printf("\n");
            return 0;
         case 5:
            return 0;
         default:
            printf("Opção inválida.\n");
            return 0;
         }
      }

      // Menu de registar dados
      int menuRegistarDados(DadosMenu *dadosMenu)
      {
         int opcao; // Variável para armazenar a opção escolhida pelo utilizador
         printf("\n### Menu Registar Dados ###\n");
         printf("1. Registar Estudante\n");
         printf("2. Registar Ficha de Exercícios\n");
         printf("3. Registar Exercício\n");
         printf("4. Registar Submissão\n");
         printf("5. Voltar\n");
         printf("\n");
         opcao = receberInteiro("Escolha uma opção: "); // Receber a opção do utilizador
         printf("\n");
         return menuRegistarDadosSwitch(opcao, dadosMenu); // Chamar a função de switch para o menu de registar dados
      }

      // Switch para o menu de registar dados
      int menuRegistarDadosSwitch(int opcao, DadosMenu *dadosMenu)
      {
         switch (opcao)
         {
         case 1:
            return registarEstudante(dadosMenu->users, dadosMenu->n_users); // Registar Estudante
         case 2:
            return registarFichaExercicios(dadosMenu->fichas, dadosMenu->n_fichas); // Registar Ficha de Exercícios
         case 3:
            return registarExercicio(dadosMenu->exercicios, dadosMenu->n_exercicios); // Registar Exercício
         case 4:
            return registarSubmissao(dadosMenu->submissoes, dadosMenu->n_submissoes, dadosMenu); // Registar Submissão
         case 5:
            return 0; // Voltar
         default:
            printf("Opção inválida.\n");
            return 0;
         }
      }

      // Menu de estatísticas
      int menuEstatisticas(DadosMenu *dadosMenu)
      {
         int opcao; // Variável para armazenar a opção escolhida pelo utilizador
         printf("\n### Menu Estatísticas ###\n");
         printf("1. Total de submissões realizadas por estudante\n");
         printf("2. Média das classificações das submissões realizadas\n");
         printf("3. Percentagem de exercícios resolvidos em cada ficha\n");
         printf("4. Voltar\n");
         printf("\n");
         opcao = receberInteiro("Escolha uma opção: "); // Receber a opção do utilizador
         printf("\n");
         return menuEstatisticasSwitch(opcao, dadosMenu); // Chamar a função de switch para o menu de estatísticas
      }

      // Switch para o menu de estatísticas
      int menuEstatisticasSwitch(int opcao, DadosMenu *dadosMenu)
      {
         switch (opcao)
         {
         case 1:
            return totalSubmissoesEstudante(dadosMenu->submissoes, *dadosMenu->n_submissoes, receberInteiro("ID do estudante: ")); // Total de submissões realizadas por estudante
         case 2:
            return mediaClassificacoes(dadosMenu->submissoes, *dadosMenu->n_submissoes); // Média das classificações das submissões realizadas
         case 3:
            return percentagemExerciciosResolvidos(dadosMenu->exercicios, *dadosMenu->n_exercicios, receberInteiro("ID da ficha de exercícios: ")); // Percentagem de exercícios resolvidos em cada ficha
         case 4:
            return 0; // Voltar
         default:
            printf("Opção inválida.\n");
            return 0;
         }
      }

   #pragma endregion

#pragma endregion



// ESTE CÓDIGO NÃO FAZ PARTE DO PROGRAMA PRINCIPAL, SERVE APENAS COMO FORMA DE 
// PREPARAR OS DADOS PARA TESTES, E ETC.
#pragma region Testes

   void popularUsers(User *users, int *n_users)
   {
      User user1 = {1, 2210111, "João Silva", "joap.s@ipleiria"};
      User user2 = {2, 2210112, "Maria Santos", "maria.s@ipleiria"};
      User user3 = {3, 2210113, "Pedro Jesus", "pedro.j@ipleiria"};
      User user4 = {4, 2210114, "Ana Costa", "ana.c@ipleiria"};

      users[0] = user1;
      users[1] = user2;
      users[2] = user3;
      users[3] = user4;

      *n_users = 4;
   }

   void popularFichas(FichaExercicios *fichas, int *n_fichas)
   {
      FichaExercicios ficha1 = {1, "Ficha 1", 3, "2021-12-01"};
      FichaExercicios ficha2 = {2, "Ficha 2", 2, "2021-12-02"};
      FichaExercicios ficha3 = {3, "Ficha 3", 4, "2021-12-03"};

      fichas[0] = ficha1;
      fichas[1] = ficha2;
      fichas[2] = ficha3;

      *n_fichas = 3;
   }

   void popularExercicios(Exercicio *exercicios, int *n_exercicios)
   {
      Exercicio exercicio1 = {1, 1, "Exercício 1", 1, "C"};
      Exercicio exercicio2 = {2, 1, "Exercício 2", 2, "C"};
      Exercicio exercicio3 = {3, 1, "Exercício 3", 3, "C"};
      Exercicio exercicio4 = {4, 2, "Exercício 1", 1, "C"};
      Exercicio exercicio5 = {5, 2, "Exercício 2", 2, "C"};
      Exercicio exercicio6 = {6, 3, "Exercício 1", 1, "C"};
      Exercicio exercicio7 = {7, 3, "Exercício 2", 2, "C"};
      Exercicio exercicio8 = {8, 3, "Exercício 3", 3, "C"};
      Exercicio exercicio9 = {9, 3, "Exercício 4", 4, "C"};

      exercicios[0] = exercicio1;
      exercicios[1] = exercicio2;
      exercicios[2] = exercicio3;
      exercicios[3] = exercicio4;
      exercicios[4] = exercicio5;
      exercicios[5] = exercicio6;
      exercicios[6] = exercicio7;
      exercicios[7] = exercicio8;
      exercicios[8] = exercicio9;

      *n_exercicios = 9;
   }

   void popularSubmissao(Submissao *submissoes, int *n_submissoes)
   {
      Submissao submissao1 = {1, 1, 1, 1, "2021-12-01", 100, 10};
      Submissao submissao2 = {2, 1, 1, 2, "2021-12-01", 200, 20};
      Submissao submissao3 = {3, 1, 1, 3, "2021-12-01", 300, 30};
      Submissao submissao4 = {4, 2, 2, 4, "2021-12-02", 400, 40};
      Submissao submissao5 = {5, 2, 2, 5, "2021-12-02", 500, 50};
      Submissao submissao6 = {6, 3, 3, 6, "2021-12-03", 600, 60};
      Submissao submissao7 = {7, 3, 3, 7, "2021-12-03", 700, 70};
      Submissao submissao8 = {8, 3, 3, 8, "2021-12-03", 800, 80};
      Submissao submissao9 = {9, 3, 3, 9, "2021-12-03", 900, 90};

      submissoes[0] = submissao1;
      submissoes[1] = submissao2;
      submissoes[2] = submissao3;
      submissoes[3] = submissao4;
      submissoes[4] = submissao5;
      submissoes[5] = submissao6;
      submissoes[6] = submissao7;
      submissoes[7] = submissao8;
      submissoes[8] = submissao9;

      *n_submissoes = 9;
   }

   // População de dados de teste
   void popularDadosTeste(User *users, int *n_users, FichaExercicios *fichas, int *n_fichas, Exercicio *exercicios, int *n_exercicios, Submissao *submissoes, int *n_submissoes)
   {
      popularUsers(users, n_users);
      popularFichas(fichas, n_fichas);
      popularExercicios(exercicios, n_exercicios);
      popularSubmissao(submissoes, n_submissoes);
   }

   // Usar funções que já existem para ler o ficheiro de configuração, se não existir criar um ficheiro de configuração com valores por defeito	
   // buscar se o ficheiro possui debug=1 ou debug=0 devolve 1 ou 0 respetivamente

   // Ler ficheiro de configuração
   int lerFicheiroConfiguracao()
   {
      FILE *ficheiro = fopen("configuracao.txt", "r");            // Abrir o ficheiro de configuração para leitura
      if (ficheiro == NULL)                                       // Se o ficheiro não existir
      {
         FILE *ficheiro = fopen("configuracao.txt", "w");         // Criar o ficheiro de configuração
         fprintf(ficheiro, "debug=0");                            // Escrever o valor por defeito
         fclose(ficheiro);                                        // Fechar o ficheiro
         return 0;
      }

      char linha[100];                                            // Array para armazenar a linha lida
      while (fgets(linha, 100, ficheiro) != NULL)                 // Enquanto houver linhas para ler
      {
         if (strstr(linha, "debug=") != NULL)                     // Se a linha contiver a palavra debug
         {
            char *valor = strtok(linha, "=");                     // Separar a linha pelo sinal de igual
            valor = strtok(NULL, "=");                            // Obter o valor
            return atoi(valor);                                   // Converter o valor para inteiro e retornar
         }
      }

      fclose(ficheiro);
      return 0;
   }

#pragma endregion