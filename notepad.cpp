#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    FILE *fp;
    char in, fn[35], cho;
    cout << "\n\t\t\t\tNOTEPAD\n";
    cout << "\n\t\t\tEnter the file Name :";
    cin >> fn;
    cout << "\n\nWhat can You do Write:w/read:r/add:a ";
    cin >> cho;
    if (cho == 'r')
    {
        fp = fopen(fn, "r");

        cout << "\n\n\n\t\t\tRead Mode\n\n";
        while (in = getc(fp) != EOF)
        {
            cout << in;
        }
        fclose(fp);
    }
    else if (cho == 'w')
    {
        fp = fopen(fn, "w");
        cout << "\n\n\n\t\t\tWrite Mode\n\n";
        cout << "\n\n\t\t\tFor Save File Press ctrl + Z";
        while ((in = getchar()) != EOF)
        {
            putc(in, fp);
        }
        fclose(fp);
    }
    else if (cho == 'a')
    {
        fp = fopen(fn, "a");
        cout << "\n\n\n\t\t\tAdd Mode\n\n";
        cout << "\n\n\t\t\tFor Save File Press ctrl + Z";
        while ((in = getchar()) != EOF)
        {
            putc(in, fp);
        }
        fclose(fp);
    }

    return 0;
}