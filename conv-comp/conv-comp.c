#include <stdio.h>

//Conversão de metros
float metroParaCentimetro(float medidaMetro);
float metroParaMilimetro(float medidaMetro);

//Conversão de centimetros
float centimetroParaMetro(float medidaCentimetro);
float centimetroParaMilimetro(float medidaCentimetro);

//Conversão de milimetros
float milimetroParaMetro(float medidaMilimetro);
float milimetroParaCentimetro(float medidaMilimetro);

int main() {
    
    return 0;
}

//Conversão de metros
float metroParaCentimetro(float medidaMetro){
    return medidaMetro*100;
}
float metroParaMilimetro(float medidaMetro){
    return medidaMetro*1000;
}

//Conversão de centimetros
float centimetroParaMetro(float medidaCentimetro){
    return medidaCentimetro/100;
}
float centimetroParaMilimetro(float medidaCentimetro){
    return medidaCentimetro*10;
}

//Conversão de milimetros
float milimetroParaMetro(float medidaMilimetro){
    return medidaMilimetro/1000;
}
float milimetroParaCentimetro(float medidaMilimetro){
    return medidaMilimetro/10;
}