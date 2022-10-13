#include <stdio.h>
#include <Windows.h>
#include <string.h>


void setcolor(int color, int intensity) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color | intensity);
}

void print_monkey(int color, int intensity) {
        setcolor(color, intensity);
        system("cls");
        printf("   Ape, Strong, Together.\n\n");
        
        puts("           .\"`\".");
        puts("       .-./ _=_ \\.-.");
        puts("      {  (,(oYo),) }}");
        puts("      {{ |   \"   |} }");
        puts("      { { \\(---)/  }}");
        puts("      {{  }\'-=-\'{ } }");
        puts("      { { }._:_.{  }}");
        puts("      {{  } -:- { } }");
        puts("      {_{ }`===`{  _}");
        puts("     ((((\\)     (/))))");

}


int main() {
        
        int colors[3] = {FOREGROUND_RED, 5, 6};

        system("cls");

        for(int i = 0; i < 3; i++) {
                print_monkey(colors[i], 8);
                Sleep(900);
        }

        print_monkey(15, 8); 
        setcolor(FOREGROUND_RED, 4);
        puts("\nRIP Harambe -May 28, 2016");
        getchar();
}
