## Operadores logicos

*Estos operadores nos ayudan a generar diferente flujos, simulando un circuito dentro de nuestro programa.*

**Operador AND &&**

Este operador es binario y es infijo (que va en medio), devuelve un verdadero si y sólo si ambas expresiones son verdaderas, en caso contrario devuelve falso.

*Tabla de verdad:*
```
    x  y  x&&y
    V  V   V
    V  F   F
    F  V   F
    F  F   F
```

**Operador OR ||**

Este operador es binario y es infijo, devuelve verdadero si por lo menos alguna de sus dos expresiones es verdadera.

*Tabla de verdad:*
```
    x  y  x||y
    V  V   V   
    V  F   V   
    F  V   V   
    F  F   F
```

**Operador NOT !**

Este operador es unario y es prefijo (que va antes), devuelve verdadero cuando al expresión es falsa y viceversa.

*Tabla de verdad:*
```
    x    !x
    V     F
    F     V
```
