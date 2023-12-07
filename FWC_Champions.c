#include <stdio.h>
#include <locale.h>

int main()
{
    // Establecer el idioma a español
    setlocale(LC_ALL, "spanish");

    FILE *fwc = fopen("fwc.txt", "wb");
    int opcion, fwc_year, continuar, resumen;

    printf("Bienvenido ! al buscador de los campeones de la copa mundial de la FIFA. \nPara saber la sede del mundial, cantidad de equipos participantes, finalistas entre otros, \nindique 1 para continuar o 2 para salir del programa: ");
    scanf("%d", &opcion);

    while (opcion != 2)
    {
        if (opcion == 1)
        {
            printf("Ingrese el año del mundial: \n");
            scanf("%d", &fwc_year);

            switch (fwc_year)
            {          // Mundiales de La FWC
            case 1930: // Uruguay 1930
                fprintf(fwc, "Uruguay 1930\n");
                printf("Uruguay 1930\n");
                fprintf(fwc, "El mundial fue celebrado en Uruguay.\n");
                printf("\nEl mundial fue celebrado en Uruguay.\n");
                fprintf(fwc, "El campeón fue el anfitrión, Uruguay.\n");
                printf("El campeón fue el anfitrión, Uruguay.\n");
                printf("deseas conocer el resumen de esta copa 1 para si 2 para no ");
                scanf("%d", &resumen);

                break;
            case 1934: // Italia 1934
                printf("Italia 1934\n");
                fprintf(fwc, "Italia 1934");
                fprintf(fwc, "\nLa Copa Mundial de la FIFA Italia 1934 fue la segunda edición del Campeonato Mundial de Fútbol masculino organizado por la FIFA. Tuvo lugar en Italia entre el 27 de mayo y el 10 de junio de 1934.\n");
                printf("\nLa Copa Mundial de la FIFA Italia 1934 fue la segunda edición del Campeonato Mundial de Fútbol masculino organizado por la FIFA. Tuvo lugar en Italia entre el 27 de mayo y el 10 de junio de 1934.\n");
                printf("deseas conocer el resumen de esta copa 1 para si 2 para no ");
                scanf("%d", &resumen);
                
                break;
            case 1938: // Francia 1938
                printf("Francia 1938\n");
                fprintf(fwc, "Francias 1938\n");
                fprintf(fwc, "La Copa Mundial de la FIFA Francia 1938 fue la tercera edición del campeonato mundial de fútbol masculino organizado por la FIFA. Se celebró en Francia entre el 4 de junio y el 19 de junio de 1938\n");
                fprintf(fwc, "el campeon fue Italia");
                break;
            case 1950: // Brasil 1950
                fprintf(fwc, "Brasil 1950 fue la cuarta edición del campeonato mundial de fútbol masculino organizado por la FIFA. Tuvo lugar en Brasil desde el 24 de junio hasta el 16 de julio de 1950\n");
                fprintf(fwc, "\nconocido a nivel futbolero como el mundial del maracanaso \n");
                fprintf(fwc, "\nel campeon fue Uruguay\n");
                fprintf(fwc, "\nla final fue Brasil vs Uruguay\n");
                break;
            case 1954: // Suiza 1950
                fprintf(fwc, "La Copa Mundial de la FIFA Suiza 1954 fue la quinta edición de la Copa Mundial de Fútbol, realizada en Suiza, entre el 16 de junio y el 4 de julio de 1954.\n");
                break;
            case 1958: // suecia 1958
                fprintf(fwc, " Suecia 1958 fue la sexta edición de la Copa Mundial de Fútbol. Fue realizada en la primavera de Suecia, entre el 8 y el 28 de junio de 1958. Participaron en la fase final dieciséis selecciones nacionales\n");
                fprintf(fwc, "el campeon fue Brasil\n");
                break;
            case 1962: // chile 1962
                fprintf(fwc, "La Copa Mundial de la FIFA Chile 1962 fue la séptima edición de la Copa Mundial de Fútbol, realizada en Chile, entre el 30 de mayo y el 17 de junio de 1962. ​ Tras Brasil 1950\n");
                fprintf(fwc, "campeon Brasil \n");
                break;
            case 1966: // England 1966
                fprintf(fwc, "Inglaterra 1966 fue la octava edición de la Copa Mundial de Fútbol. Fue realizada en Inglaterra —país donde nació el fútbol en 1863—, entre el 11 y el 30 de julio de 1966. Dieciséis selecciones participaron en la ronda final\nsiendo divididas en cuatro grupos de 4");
                fprintf(fwc, "campeon Inglaterra");
                break;
            case 1970: // Mexico 1970
                fprintf(fwc, "México 1970 fue la novena edición de la Copa Mundial de Fútbol. Se celebró en México, entre el 31 de mayo y el 21 de junio.\nUn total de 16 selecciones nacionales participaron en la ronda final\nreunidas en cuatro grupos de 4 equipos");
                fprintf(fwc, "El Campeon fue Brasil\n");
                fprintf(fwc, "Pele Jugo este Mundial\n");
                fprintf(fwc, "La final fue entre Brasil vs Italia");
                break;
            case 1974: // Alemania Federal 1974
                printf("Alemania Federal 1974 \n");
                fprintf(fwc, "Alemania Federal 1974 \n");
                fprintf(fwc, "Campeon Alemania\n");
                fprintf(fwc, "Alemania Federal 1974 fue la décima edición de la Copa Mundial de Fútbol. Fue realizada en la Alemania Occidental (RFA) y en Berlín Occidental, entre el 13 de junio y el 7 de julio de 1974.\nDieciséis selecciones nacionales participaron en el torneo\n");
                fprintf(fwc, "La Final Fue Alemania Federal vs Paises Bajoas\n");
                break;
            case 1978: // Argentina 1978
                fprintf(fwc, "Campeon Argentina\n");
                fprintf(fwc, "Argentina 1978 fue la undécima edición de la Copa Mundial de Fútbol y se desarrolló en Argentina, entre el 1 de junio y el 25 de junio de 1978.\nLa Copa del Mundo volvía así a Sudamérica por primera vez desde Chile en 1962.");
                fprintf(fwc, "La Final fue Argentina vs Paises Bajos");
                break;
            case 1982: // España 1982
                fprintf(fwc, "España 1982");
                printf("España 1982\n");
                fprintf(fwc, "Campeon italia\n");
                fprintf(fwc, "La Copa Mundial de la FIFA España 1982 fue la duodécima edición del campeonato mundial de fútbol masculino organizado por la FIFA.\nSe celebró en España desde el 13 de junio hasta el 11 de julio de 1982 \n");
                fprintf(fwc, "La Final fue Italia vs Alemania Federal\n");
                break;
            case 1986: // Mexico 1986
                printf("Mexico  1986");
                fprintf(fwc, "Mexico 186 \n");
                printf("La Copa Mundial de la FIFA México 1986 fue la decimotercera edición de la Copa Mundial de Fútbol, que se desarrolló entre el 31 de mayo y el 29 de junio1. México se convirtió en el primer país en celebrar dos veces una Copa del Mundo.\nFueron 24 selecciones las que acudieron al torneo y 52 partidos celebrados\n");
                fprintf(fwc,"La Copa Mundial de la FIFA México 1986 fue la decimotercera edición de la Copa Mundial de Fútbol, que se desarrolló entre el 31 de mayo y el 29 de junio1. México se convirtió en el primer país en celebrar dos veces una Copa del Mundo.\nFueron 24 selecciones las que acudieron al torneo y 52 partidos celebrados\n");
                break;
            case 1990 : // Italia 1990
                printf("Italia 1990\n");
                fprintf(fwc,"Italia 1990\n");
                break;
            case 1994 : // USA 1994 
                printf("Estados Unidos 1994\n");
                fprintf(fwc,"Estados Unidos 1994 \n");
                break;
            default:
                printf("El año ingresado no corresponde a un mundial, puede ser una Euro o Copa America, intenta de nuevo.\n");
                break;
            }
        }

      
       while(resumen !=2){
    switch (fwc_year)
    {
    case 1930: // Uruguay 1930
        printf("Desde la fundación de la FIFA en 1904, se planteó la posibilidad de realizar un torneo a nivel mundial. Sin embargo, la recién formada organización no contaba con los recursos y la infraestructura necesaria para semejante torneo \n");
        fprintf(fwc, "Desde la fundación de la FIFA en 1904, se planteó la posibilidad de realizar un torneo a nivel mundial. Sin embargo, la recién formada organización no contaba con los recursos y la infraestructura necesaria para semejante torneo \n");
        break;
    case 1934: // Italia 1934
        printf("El éxito de la Copa Mundial de Fútbol de 1930 motivó a la FIFA para celebrar una segunda edición cuatro años después, tal y como se acordó en los diferentes congresos del organismo. Dado que Uruguay albergó el campeonato inaugural, se aceptó que un Estado europeo acogiese la de 1934\n");
        fprintf(fwc,"El éxito de la Copa Mundial de Fútbol de 1930 motivó a la FIFA para celebrar una segunda edición cuatro años después, tal y como se acordó en los diferentes congresos del organismo. Dado que Uruguay albergó el campeonato inaugural, se aceptó que un Estado europeo acogiese la de 1934\n");
        break;
    case 1938 :// Francia 1938
         printf("\n");
         break;

    default:
        printf("no hay resumen");
        break;
    }
    printf("Indique 1 para continuar o 2 para salir del programa: ");
    scanf("%d", &resumen);
};
    

    printf("\n¿Desea continuar? Indique 1 para continuar o 2 para salir: ");
    scanf("%d", &opcion);
   resumen = opcion;
}

       
    
    if (fwc == NULL)
    {
        perror("error en la apertura del Archivo");
        return 1;
    };

    fclose(fwc);

    printf("\n\n Se ha leido el archivo Correctamente ...");

    return 0;
}
