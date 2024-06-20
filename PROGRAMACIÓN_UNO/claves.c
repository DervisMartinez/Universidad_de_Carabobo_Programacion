/*Dervis Martinez V -31456326 PROGRAMACION 1 */
#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_RULES 1000
#define MAX_RULE_LENGTH 256

char dictionary[MAX_WORDS][2]; // Almaceno las palabras del diccionario
char rules[MAX_RULES][MAX_RULE_LENGTH]; // Almacena las reglas



// Función para generar las claves
void generateKeys(int ruleIndex, char key[], int digit) {
    int m ;
    int n ;

    if (ruleIndex == m) {
        printf("%s\n", key); // Imprime la clave
        return;
    }

    char rule[MAX_RULE_LENGTH];
    strcpy(rule, rules[ruleIndex]);

    for (int i = 0; i < strlen(rule); i++) {
        if (rule[i] == '#') {
            for (int j = 0; j < n; j++) {
                //key[digit] == dictionary[j];
                generateKeys(ruleIndex + 1, key, digit + 1);
            }
        } else if (rule[i] == '0') {
            for (char d = '0'; d <= '9'; d++) {
                key[digit] = d;
                generateKeys(ruleIndex + 1, key, digit + 1);
            }
        }
    }
}

int main() {
    int n, m;
  
  

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c", dictionary[i]);
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%s", rules[i]);
    }

    char key[MAX_RULE_LENGTH];
    generateKeys(0, key, 0);

    return 0;
}
