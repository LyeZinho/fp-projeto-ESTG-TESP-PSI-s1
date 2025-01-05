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

### **2. Desenvolvimento de Funcionalidades Básicas** (fei
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

### **3. Implementação das Estatísticas** 
1. **Estatísticas por Estudante:**
   - Criar funções para:
     - Total de submissões realizadas.
     - Média das classificações nas submissões.
     - Percentual de exercícios resolvidos por ficha.

---

### **4. Persistência de Dados**
1. **Leitura de Arquivos Binários:**
   - Criar função para carregar dados salvos ao iniciar a aplicação.
   - Validar integridade dos dados lidos.

2. **Gravação em Arquivos Binários:**
   - Criar função para salvar dados em arquivo ao encerrar a aplicação ou sob demanda.

---

### **5. Validações e Boas Práticas**
1. **Validação de Dados:**
   - Criar funções auxiliares para validar:
     - Emails, datas e valores únicos.
     - Limites de cada estrutura (100 estudantes, etc.).

2. **Boas Práticas:**
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

#pragma endregion


#pragma region Macros

#define TAMANHO_ARRAY(arr) (sizeof(arr) / sizeof((arr)[0])) // Macro para obter o tamanho de um array tipo qualquer

#pragma endregion

#pragma region Protótipos de Funções

// Funções para registar e consultar dados
void registarEstudante(User *users, int *n_users);
void consultarEstudante(User *users, int n_users);

// Funções para registar e consultar fichas de exercícios
void registarFichaExercicios(FichaExercicios *fichas, int *n_fichas);
void consultarFichaExercicios(FichaExercicios *fichas, int n_fichas);

// Funções para registar e consultar exercícios
void registarExercicio(Exercicio *exercicios, int *n_exercicios);
void consultarExercicio(Exercicio *exercicios, int n_exercicios);

// Funções para registar e consultar submissões
void registarSubmissao(Submissao *submissoes, int *n_submissoes);
void consultarSubmissao(Submissao *submissoes, int n_submissoes);

#pragma endregion

int main(int argc, char **argv)
{
   return 0;
}

#pragma region Funções

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
   void escreverFicheiroBinario(char *nome_ficheiro, void *dados, int tamanho_dados)
   {                                               // void *dados -> ponteiro genérico (pode ser de qualquer tipo)
      FILE *ficheiro = fopen(nome_ficheiro, "wb"); // wb -> write binary
      if (ficheiro == NULL)
      {
         printf("Erro ao abrir o ficheiro %s para escrita.\n", nome_ficheiro);
         return;
      }

      fwrite(dados, tamanho_dados, 1, ficheiro);
      fclose(ficheiro);
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
   void lerFicheiroBinario(char *nome_ficheiro, void *dados, int tamanho_dados)
   {
      FILE *ficheiro = fopen(nome_ficheiro, "rb");
      if (ficheiro == NULL)
      {
         printf("Erro ao abrir o ficheiro %s para leitura.\n", nome_ficheiro);
         return;
      }

      fread(dados, tamanho_dados, 1, ficheiro);
      fclose(ficheiro);
   }

   // Função generica para receber uma string do utilizador (padrão para validar inputs)
   void receberString(char *mensagem, char *string, int tamanho)
   {
      printf("%s", mensagem);
      fgets(string, tamanho, stdin);
      string[strcspn(string, "\n")] = '\0'; // Remover o \n do final da string
   }

   // Função generica para receber um inteiro do utilizador (padrão para validar inputs)
   int receberInteiro(char *mensagem)
   {
      int numero;
      printf("%s", mensagem);
      scanf("%d", &numero);
      getchar(); // Limpar o buffer do teclado
      return numero;
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
   bool validarEmail(char *email)
   {
      int i, arrobas = 0, pontos = 0;
      for (i = 0; email[i] != '\0'; i++)
      {
         if (email[i] == '@')
         {
            arrobas++;
         }
         if (email[i] == '.')
         {
            pontos++;
         }
      }
      if (arrobas == 1 && pontos >= 1)
      {
         return true;
      }
      return false;
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
      if (strlen(data) != 10)
      {
         return false;
      }
      if (data[2] != '/' || data[5] != '/')
      {
         return false;
      }
      for (int i = 0; i < 10; i++)
      {
         if (i != 2 && i != 5 && !isdigit(data[i]))
         {
            return false;
         }
      }
      return true;
   }

   // Função generica para ordenar um array de tipo qualquer
   /*
   logica: (swap sort)

   1. Percorrer o array
   2. Percorrer o array novamente
   3. Se o elemento atual for maior que o próximo, trocar os elementos de posição

   */
   // Função genérica para ordenar um array
   void ordenarArray(void *array, int tamanho, int tamanho_elemento, int (*comparar)(const void *, const void *)) {
      char *temp = (char *)malloc(tamanho_elemento); // Aloca memória temporária para troca de elementos
      char *base = (char *)array; // Base do array como ponteiro de char para facilitar manipulação de bytes

      for (int i = 0; i < tamanho - 1; i++) {
         for (int j = i + 1; j < tamanho; j++) {
            if (comparar(base + i * tamanho_elemento, base + j * tamanho_elemento) > 0) {
                  // Troca os elementos
                  memcpy(temp, base + i * tamanho_elemento, tamanho_elemento);
                  memcpy(base + i * tamanho_elemento, base + j * tamanho_elemento, tamanho_elemento);
                  memcpy(base + j * tamanho_elemento, temp, tamanho_elemento);
            }
         }
      }
      free(temp); // Libera a memória temporária
   }

   #pragma endregion
   
   /*
      - Registar e consultar dados de estudantes.
      - Registar e consultar fichas de exercícios.
      - Registar e consultar exercícios.
      - Registar e consultar submissões.
   */

   /*
   1. **Gerenciamento de Estudantes:**
      - **Registrar estudante:**
      - Criar função para adicionar um novo estudante.
      - Validar dados (e.g., email único).
      - **Consultar estudante:**
      - Buscar pelo número do estudante.

   */

   #pragma region Registar e Consultar Estudantes

   // Registar e consultar dados de estudantes.
   void registarEstudante(User *users, int *n_users) // users -> array de utilizadores, n_users -> número de utilizadores
   {
      // Registar um novo estudante
      User user;                                                     // Criar um novo utilizador
      user.id = *n_users + 1;                                        // ID do utilizador
      user.numero = receberInteiro("Número do estudante: ");         // Receber o número do utilizador
      receberString("Nome do estudante: ", user.nome, MAX_NOME);     // Receber o nome do utilizador
      receberString("E-mail do estudante: ", user.email, MAX_EMAIL); // Receber o email do utilizador
      while (!validarEmail(user.email))
      {                                                                    // Validar o email
         printf("E-mail inválido. Por favor, insira um e-mail válido.\n"); // Mensagem de erro
         receberString("E-mail do estudante: ", user.email, MAX_EMAIL);    // Receber o email do utilizador novamente
      }
      users[*n_users] = user; // Adicionar o utilizador ao array de utilizadores
      (*n_users)++;           // Incrementar o número de utilizadores
   }

   void consultarEstudante(User *users, int n_users) // users -> array de utilizadores, n_users -> número de utilizadores
   {
      // Consultar dados de um estudante
      int numero = receberInteiro("Número do estudante: "); // Receber o número do estudante
      for (int i = 0; i < n_users; i++)
      { // Percorrer o array de utilizadores
         if (users[i].numero == numero)
         {                                           // Se o número do utilizador for igual ao número recebido
            printf("ID: %d\n", users[i].id);         // Mostrar o ID do utilizador
            printf("Número: %d\n", users[i].numero); // Mostrar o número do utilizador
            printf("Nome: %s\n", users[i].nome);     // Mostrar o nome do utilizador
            printf("E-mail: %s\n", users[i].email);  // Mostrar o email do utilizador
            return;                                  // Sair da função
         }
      }
      printf("Estudante não encontrado.\n"); // Mensagem de erro
   }

   // Registar e consultar fichas de exercícios.
   void registarFichaExercicios(FichaExercicios *fichas, int *n_fichas) // fichas -> array de fichas de exercícios, n_fichas -> número de fichas de exercícios
   {
      // Registar uma nova ficha de exercícios
      FichaExercicios ficha;                                                    // Criar uma nova ficha de exercícios
      ficha.id = *n_fichas + 1;                                                 // ID da ficha de exercícios (incrementar o número de fichas)
      receberString("Nome da ficha de exercícios: ", ficha.nome, MAX_NOME);     // Receber o nome da ficha de exercícios
      ficha.n_exercicios = receberInteiro("Número de exercícios: ");            // Receber o número de exercícios
      receberString("Data de publicação (dd/mm/aaaa): ", ficha.data, MAX_DATA); // Receber a data de publicação
      while (!validarData(ficha.data))
      {                                                                            // Validar a data
         printf("Data inválida. Por favor, insira uma data válida.\n");            // Mensagem de erro
         receberString("Data de publicação (dd/mm/aaaa): ", ficha.data, MAX_DATA); // Receber a data de publicação novamente
      }
      fichas[*n_fichas] = ficha; // Adicionar a ficha de exercícios ao array de fichas de exercícios
      (*n_fichas)++;             // Incrementar o número de fichas de exercícios
   }

   void consultarFichaExercicios(FichaExercicios *fichas, int n_fichas)
   {
      // Consultar dados de uma ficha de exercícios
      int id = receberInteiro("ID da ficha de exercícios: "); // Receber o ID da ficha de exercícios
      for (int i = 0; i < n_fichas; i++)
      { // Percorrer o array de fichas de exercícios
         if (fichas[i].id == id)
         { // Se o ID da ficha de exercícios for igual ao ID recebido
            printf("ID: %d\n", fichas[i].id);                 // Mostrar o ID da ficha de exercícios
            printf("Nome: %s\n", fichas[i].nome);              // Mostrar o nome da ficha de exercícios
            printf("Número de exercícios: %d\n", fichas[i].n_exercicios); // Mostrar o número de exercícios
            printf("Data de publicação: %s\n", fichas[i].data); // Mostrar a data de publicação
            return;                                              // Sair da função
         }
      }
      printf("Ficha de exercícios não encontrada.\n"); // Mensagem de erro
   }

   // Registar e consultar exercícios.
   void registarExercicio(Exercicio *exercicios, int *n_exercicios)
   {
      // Registar um novo exercício
      Exercicio exercicio; // Criar um novo exercício
      exercicio.id = *n_exercicios + 1; // ID do exercício (incrementar o número de exercícios)
      exercicio.id_ficha = receberInteiro("ID da ficha de exercícios: "); // Receber o ID da ficha de exercícios
      receberString("Nome do exercício: ", exercicio.nome, MAX_NOME);    // Receber o nome do exercício
      exercicio.grau_dificuldade = receberInteiro("Grau de dificuldade: "); // Receber o grau de dificuldade
      receberString("Tipo de solução: ", exercicio.tipo_solucao, 10);      // Receber o tipo de solução
      exercicios[*n_exercicios] = exercicio; // Adicionar o exercício ao array de exercícios
      (*n_exercicios)++;                      // Incrementar o número de exercícios
   }

   void consultarExercicio(Exercicio *exercicios, int n_exercicios)
   {
      // Consultar dados de um exercício
      int id = receberInteiro("ID do exercício: "); // Receber o ID do exercício
      for (int i = 0; i < n_exercicios; i++)
      { // Percorrer o array de exercícios
         if (exercicios[i].id == id)
         { // Se o ID do exercício for igual ao ID recebido
            printf("ID: %d\n", exercicios[i].id);                 // Mostrar o ID do exercício
            printf("ID da ficha de exercícios: %d\n", exercicios[i].id_ficha); // Mostrar o ID da ficha de exercícios
            printf("Nome: %s\n", exercicios[i].nome);              // Mostrar o nome do exercício
            printf("Grau de dificuldade: %d\n", exercicios[i].grau_dificuldade); // Mostrar o grau de dificuldade
            printf("Tipo de solução: %s\n", exercicios[i].tipo_solucao); // Mostrar o tipo de solução
            return;                                              // Sair da função
         }
      }
      printf("Exercício não encontrado.\n"); // Mensagem de erro
   }

   // Registar e consultar submissões.
   void registarSubmissao(Submissao *submissoes, int *n_submissoes)
   {
      // Registar uma nova submissão
      Submissao submissao; // Criar uma nova submissão
      submissao.id = *n_submissoes + 1; // ID da submissão (incrementar o número de submissões)
      submissao.id_user = receberInteiro("ID do estudante: "); // Receber o ID do estudante
      submissao.id_ficha = receberInteiro("ID da ficha de exercícios: "); // Receber o ID da ficha de exercícios
      submissao.id_exercicio = receberInteiro("ID do exercício: "); // Receber o ID do exercício
      receberString("Data da submissão (dd/mm/aaaa): ", submissao.data, MAX_DATA); // Receber a data da submissão
      while (!validarData(submissao.data))
      { // Validar a data
         printf("Data inválida. Por favor, insira uma data válida.\n"); // Mensagem de erro
         receberString("Data da submissão (dd/mm/aaaa): ", submissao.data, MAX_DATA); // Receber a data da submissão novamente
      }
      submissao.n_linhas = receberInteiro("Número de linhas: "); // Receber o número de linhas
      submissao.classificacao = receberInteiro("Classificação: "); // Receber a classificação
      submissoes[*n_submissoes] = submissao; // Adicionar a submissão ao array de submissões
      (*n_submissoes)++; // Incrementar o número de submissões
   }

   void consultarSubmissao(Submissao *submissoes, int n_submissoes)
   {
      // Consultar dados de uma submissão
      int id = receberInteiro("ID da submissão: "); // Receber o ID da submissão
      for (int i = 0; i < n_submissoes; i++)
      { // Percorrer o array de submissões
         if (submissoes[i].id == id)
         { // Se o ID da submissão for igual ao ID recebido
            printf("ID: %d\n", submissoes[i].id); // Mostrar o ID da submissão
            printf("ID do estudante: %d\n", submissoes[i].id_user); // Mostrar o ID do estudante
            printf("ID da ficha de exercícios: %d\n", submissoes[i].id_ficha); // Mostrar o ID da ficha de exercícios
            printf("ID do exercício: %d\n", submissoes[i].id_exercicio); // Mostrar o ID do exercício
            printf("Data da submissão: %s\n", submissoes[i].data); // Mostrar a data da submissão
            printf("Número de linhas: %d\n", submissoes[i].n_linhas); // Mostrar o número de linhas
            printf("Classificação: %d\n", submissoes[i].classificacao); // Mostrar a classificação
            return; // Sair da função
         }
      }
      printf("Submissão não encontrada.\n"); // Mensagem de erro
   }

   #pragma endregion


#pragma endregion