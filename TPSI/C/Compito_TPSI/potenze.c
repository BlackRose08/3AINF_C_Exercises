int potenze(int base, int esponente){

int ris = 1;
    for (int i = 0; i < esponente; i++){
        ris = ris * base;
    }

    return ris;
}
