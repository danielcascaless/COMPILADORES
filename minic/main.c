#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

extern FILE* yyin;
extern int yyparse();
extern FILE* out;
extern int debug;



void
usage()
{
    printf("usage: minicc [--help|--debug] [input] [output]\n"
           "  --help:     display this\n"
           "  --debug:    enable debugging output\n");
    exit(0);
    
}



int
main(int argc, char **argv)
{

    FILE *file = NULL;

    for (int i = 1; i < argc; i++) {
    
        if (argv[i][0] == '-') {
            if (strcmp(argv[i], "--help") == 0)
                usage();
                
            else if (strcmp(argv[i], "--debug") == 0)
                debug = 1;
                
        } else {
            if (file == NULL) {
                if (argv[i][0] == '-' && argv[i][1] == '\0')
                    file = stdin;
                    
                else if ((file = fopen(argv[i], "r")) == NULL) {
                    printf("Error opening input file: %s\n", strerror(errno));
                    return 1;
                }
                
            } else {
                if (argv[i][0] == '-' && argv[i][1] == '\0')
                    out = stdout;
                    
                else if ((out = fopen(argv[i], "w")) == NULL) {
                    printf("Error opening output file: %s\n", strerror(errno));
                    return 1;
                }
            }
        }
    }

    if (file == NULL)
        file = stdin;
    
    if (out == NULL)
        out = stdout;
        
    yyin = file;

    yyparse();

    fclose(file);
    return 0;
}

