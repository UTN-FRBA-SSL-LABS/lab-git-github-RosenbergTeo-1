#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/*multiplico int a por int c*/
int multiplicar(int a, int c) { 
    return a * c; 
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n & 1) == 0; /* version conflicto */
}
