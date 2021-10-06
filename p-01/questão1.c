#include <stdio.h>

int main()
{   
    char letra;
    
    printf("Digite uma letra:\n");
    scanf("%c", &letra);
    
    if (letra == 'a' || letra == 'e' || letra == 'o' || letra == 'i' || letra == 'u' 
    || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
        printf("E uma vogal\n");
    }
    if (letra ==  'b' || letra == 'B' || letra == 'c' || letra == 'C' || letra == 'd' || letra == 'D' 
    || letra == 'f' || letra == 'F' || letra == 'g' || letra == 'G' || letra ==  'j' || letra == 'J' 
    || letra == 'h' || letra == 'H' || letra == 'k' || letra == 'K' || letra == 'l' || letra == 'L' 
    || letra == 'm' || letra == 'M' || letra ==  'n' || letra == 'N' || letra == 'p' || letra == 'P' 
    || letra == 'q' || letra == 'Q' || letra == 'r' || letra == 'R' || letra == 's' || letra == 'S' 
    || letra ==  't' || letra == 'T' || letra == 'v' || letra == 'V' || letra == 'w' || letra == 'W' 
    || letra == 'x' || letra == 'X' || letra == 'Y' || letra == 'y' || letra == 'z' || letra == 'Z')   
    {
        printf("E uma consoante\n");
    }
    return 0;
}
