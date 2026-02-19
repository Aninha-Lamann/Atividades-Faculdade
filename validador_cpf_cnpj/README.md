# 📂 Validador de CPF e CNPJ em Excel

![Excel](https://img.shields.io/badge/Microsoft_Excel-217346?style=for-the-badge&logo=microsoft-excel&logoColor=white)
![Status](https://img.shields.io/badge/Status-Conclu%C3%ADdo-success)

## 📝 Descrição
Este projeto apresenta uma solução robusta em **Microsoft Excel** para a validação lógica de **CPF** (Cadastro de Pessoas Físicas) e **CNPJ** (Cadastro Nacional da Pessoa Jurídica). 

Diferente de uma simples máscara de formatação, esta planilha aplica os algoritmos oficiais da Receita Federal para verificar se os **dígitos verificadores (DV)** correspondem à sequência numérica informada, identificando erros de digitação ou documentos inválidos.

---

## 🚀 Funcionalidades Principais

* **Cálculo Automático de DV:** Processamento dos 9 primeiros dígitos (CPF) ou 12 primeiros (CNPJ).
* **Tratamento de Strings:** Fórmulas que ignoram caracteres especiais como `.`, `-` e `/`.
* **Validação em Tempo Real:** Retorno imediato de "Válido" ou "Inválido" através de fórmulas lógicas.
* **Escalabilidade:** Estrutura preparada para validar grandes listas de dados simultaneamente.

---

## 🛠️ Conceitos e Fórmulas Utilizadas

A lógica foi construída utilizando funções nativas do Excel, sem a necessidade de plugins externos:

1.  **Separação de Caracteres:** Uso da função `EXT.TEXTO` (ou `MID`) para isolar cada algarismo.
2.  **Cálculo de Pesos:** Aplicação da função `SOMARPRODUTO` (`SUMPRODUCT`) para multiplicar os dígitos pelos pesos decrescentes (ex: 10 a 2 para CPF).
3.  **Algoritmo de Módulo 11:** Uso da função `RESTO` (`MOD`) para determinar o dígito verificador oficial.
4.  **Lógica Condicional:** Função `SE` (`IF`) para comparar o dígito calculado com o digitado pelo usuário.

### Exemplo da Lógica de CPF:
O primeiro dígito verificador ($d_1$) é calculado como:
$$d_1 = 11 - (\sum_{i=1}^{9} (digit_i \times weight_i) \pmod{11})$$
*(Se o resultado for > 9, o dígito é 0).*

---

## 📊 Estrutura do Arquivo

O projeto está dividido em duas frentes principais conforme os arquivos fornecidos:

* **Planilha 1 (Validação de CPF):** Focada na estrutura de 11 dígitos.
* **Planilha 2 (Validação de CNPJ):** Focada na estrutura de 14 dígitos com pesos diferenciados.

---

## 📖 Como Usar

1.  **Abra o arquivo** `.xlsx` no Excel ou Google Sheets.
2.  **Cole os números** na coluna destinada aos documentos (ex: Coluna A).
3.  **Verifique o Status:** A coluna de validação exibirá automaticamente o resultado.
4.  **Dica:** Se os números estiverem com pontos e traços, as fórmulas de tratamento interno cuidarão da limpeza para o cálculo.

---

## ⚖️ Licença
Projeto desenvolvido para fins de estudo e automação de processos de cadastro. Sinta-se à vontade para clonar e adaptar.

---
**Desenvolvido por [Ana Carolina Lamann]** 🚀