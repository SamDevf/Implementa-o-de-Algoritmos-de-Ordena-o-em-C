# Algoritmos de Ordenação em C

Este repositório contém a implementação de diversos algoritmos de ordenação desenvolvidos em linguagem C.  
O objetivo é demonstrar o funcionamento, a lógica e a eficiência de diferentes métodos para organizar conjuntos de dados.

---

##  Algoritmos Implementados

Os seguintes métodos foram desenvolvidos e testados:

- **Bubble Sort**: Algoritmo simples baseado em trocas adjacentes.
- **Selection Sort**: Seleciona o menor elemento e o coloca na posição correta.
- **Insertion Sort**: Constrói a ordenação final um item por vez, como organizar cartas na mão.
- **Shell Sort**: Extensão do Insertion Sort que permite a troca de itens distantes.
- **Quick Sort**: Estratégia de "dividir para conquistar" utilizando um pivô.
- **Merge Sort**: Divide o array recursivamente e os combina de forma ordenada.

---

##  Funcionamento

As implementações contam com:

1. **Lógica Principal**: Cada algoritmo implementado em sua respectiva função.
2. **Função Auxiliar**: Rotina para exibir os elementos do array, permitindo visualizar o estado antes e depois da ordenação.

---

##  O que cada algoritmo faz

### 🔹 Bubble Sort
Percorre o array diversas vezes, comparando elementos adjacentes e trocando-os de posição quando estão fora de ordem.  
A cada passagem, o maior elemento "borbulha" para o final do vetor.

- Complexidade média: O(n²)
- Simples, mas pouco eficiente para grandes conjuntos de dados.

---

### 🔹 Selection Sort
Percorre o array procurando o menor elemento da parte não ordenada e o coloca na posição correta.  
Repete o processo até que todo o vetor esteja ordenado.

- Complexidade: O(n²)
- Realiza menos trocas que o Bubble Sort.

---

### 🔹 Insertion Sort
Constrói o array ordenado gradualmente.  
A cada iteração, insere o elemento atual na posição correta dentro da parte já ordenada do vetor.

- Complexidade média: O(n²)
- Muito eficiente para vetores pequenos ou quase ordenados.

---

### 🔹 Shell Sort
Melhoria do Insertion Sort.  
Permite comparações e trocas entre elementos distantes, reduzindo gradualmente o intervalo entre eles até chegar a 1.

- Complexidade variável (depende do gap)
- Mais eficiente que Insertion Sort em vetores médios.

---

### 🔹 Quick Sort
Utiliza a estratégia de "dividir para conquistar".  
Escolhe um pivô, reorganiza o vetor colocando menores à esquerda e maiores à direita, e aplica o processo recursivamente.

- Complexidade média: O(n log n)
- Muito eficiente e amplamente utilizado.

---

### 🔹 Merge Sort
Divide o vetor em partes menores até restar apenas elementos individuais.  
Depois, combina essas partes de forma ordenada até reconstruir o vetor completo.

- Complexidade: O(n log n)
- Estável e eficiente para grandes volumes de dados.
