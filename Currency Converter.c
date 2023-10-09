#include <stdio.h>
#include <stdlib.h>
int main( ) {
start:
    system("cls");
    printf("\n                                        *************************************\n");
    printf("                                        *    ***welcome to our project***   *\n");
    printf("                                        *                                   *\n");
    printf("                                        *                                   *\n");
    printf("                                        *************************************\n");
    printf("\n\n");
    printf("\nPress Enter Any Key To Continue!\n");
    getch( );
    system("cls");
    printf("\nCountry List:\n\n");
    printf("\n\n");

    printf("\n1.  BD Taka to USD and vice versa\n");
    printf("2.  BD Taka to Indian Rupee and vice versa\n");
    printf("3.  BD Taka to Turkish Lira and vice versa\n");
    printf("4.  BD Taka to Bahrain Dinar and vice versa\n");
    printf("5.  BD Taka to Malaysian Ringgit and vice versa\n");
    printf("6.  BD Taka to UK Pound and vice versa\n");
    printf("7.  BD Taka to Europian Euro and vice versa\n");
    printf("8.  BD Taka to Australian Dollar and vice versa\n");
    printf("9.  BD Taka to New Zealand Dollar and vice versa\n");
    printf("10. BD Taka to Canadian Dollar and vice versa\n");
    printf("11. BD Taka to Japanese Yen and vice versa\n");
    printf("12. BD Taka to Swiss Franc and vice versa\n");
    printf("13. BD Taka to Dirham and vice versa\n");
    printf("14. BD Taka to South African Rand and vice versa\n");
    printf("15. BD Taka to Russian Rouble and vice versa\n");
    printf("16. BD Taka to Argentina Reso and vice versa\n");
    printf("17. BD Taka to Brazilian Real and vice versa\n");
    printf("18. BD Taka to Canadian Dollar and vice versa\n");
    printf("19. BD Taka to Colombian peso and vice versa\n");
    printf("20. BD Taka to Afgan Afgani and vice versa\n");
    printf("21. BD Taka to Bhutunese Ngultrum and vice versa\n");
    printf("22. BD Taka to Bahraini Dinar and vice versa\n");
    printf("23. BD Taka to chinese Yuan and vice versa\n");
    printf("24. BD Taka to Greek Drachmae and vice versa\n");
    printf("25. BD Taka to Croatian Kuna and vice versa\n");
    printf("26. BD Taka to Danish Knore and vice versa\n");
    printf("27. BD Taka to Ghanaian Cedi and vice versa\n");
    printf("28. BD Taka to Italian Lire and vice versa\n");
    printf("29. BD Taka to Moroccan Dirham and vice versa\n");
    printf("30. BD Taka to Nepalese Rupee and vice versa\n");
    printf("31. BD Taka to Maldivian Rufiyaa and vice versa\n");
    printf("32. BD Taka to Polish Zolty and vice versa\n");
    printf("33. BD Taka to Portugues Escudos and vice versa\n");
    printf("34. BD Taka to Qatari Riyal and vice versa\n");
    printf("35. BD Taka to Saudi Riyal and vice versa\n");
    printf("36. BD Taka to Singapore Dollar and vice versa\n");
    printf("37. BD Taka to Srilankan Rupee and vice versa\n");
    printf("38. BD Taka to Thai Bant and vice versa\n");
    printf("39. Exit\n");
    printf("\n\nEnter Your Choice:");

    int choice;
    scanf("%d", &choice);
    switch( choice ){
    case 1:
        system("cls");
        printf("\n1. Taka to USD\n");
        printf("2. USD to Taka\n");
        printf("\n\nEnter Your Choice:");
        int a;
        scanf("%d", &a);
        if(a == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted USD = %0.3f\n", Taka / 106.393);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of USD: ");
          float USD;
          scanf("%f", &USD);
          printf("\nConverted Taka = %0.3f\n", USD * 106.393);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 2:
        system("cls");
        printf("\n1. TK to INR\n");
        printf("2. INR to TK\n");
        printf("\n\nEnter Your Choice:");
        int b;
        scanf("%d", &b);
        if(b == 1) {
         system("cls");
         printf("\nEnter the amount of TK: ");
         float TK;
         scanf("%f", &TK);
         printf("\nConverted INR = %f\n", TK / 1.296);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of INR: ");
          float INR;
          scanf("%f", &INR);
          printf("\nConverted TK = %f\n", INR * 1.296);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 3:
        system("cls");
        printf("\n1. TK to LIRA\n");
        printf("2. LIRA to TK\n");
        printf("\n\nEnter Your Choice:");
        int c;
        scanf("%d", &c);
        if(c == 1) {
         system("cls");
         printf("\nEnter the amount of taka: ");
         float TK;
         scanf("%0.4f", &TK);
         printf("\nConverted LIRA = %f\n", TK / 5.5159);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of LIRA: ");
          float LIRA;
          scanf("%0.2f", &LIRA);
          printf("\nConverted taka = %f\n", LIRA * 5.5159);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 4:
        system("cls");
        printf("\n1. Taka to DINAR\n");
        printf("2. DINAR to Taka\n");
        printf("\n\nEnter Your Choice:");
        int d;
        scanf("%d", &d);
        if(d == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted DINAR = %0.2f\n", Taka / 282.16);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of DINAR: ");
          float DINAR;
          scanf("%f", &DINAR);
          printf("\nConverted Taka = %0.2f\n", DINAR * 282.16);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 5:
        system("cls");
        printf("\n1. Taka to RINGGIT\n");
        printf("2. RINGGIT to Taka\n");
        printf("\n\nEnter Your Choice:");
        int e;
        scanf("%d", &e);
        if(e == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted USD = %0.2f\n", Taka / 24.11);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of RINGGIT: ");
          float RINGGIT;
          scanf("%f", &RINGGIT);
          printf("\nConverted Taka = %0.3f\n", RINGGIT * 106.393);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 6:
        system("cls");
        printf("\n1. Taka to POUND\n");
        printf("2. POUND to Taka\n");
        printf("\n\nEnter Your Choice:");
        int f;
        scanf("%d", &f);
        if(f == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted POUND = %0.2f\n", Taka / 132.89);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of POUND: ");
          float POUND;
          scanf("%f", &POUND);
          printf("\nConverted Taka = %0.2f\n", POUND * 132.89);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 7:
        system("cls");
        printf("\n1. Taka to EURO\n");
        printf("2. EURO to Taka\n");
        printf("\n\nEnter Your Choice:");
        int g;
        scanf("%d", &g);
        if(g == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka; scanf("%f", &Taka);
         printf("\nConverted EURO = %0.2f\n", Taka / 116.95);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of POUND: ");
          float EURO; scanf("%f", &EURO);
          printf("\nConverted Taka = %0.2f\n", EURO * 116.95);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 8:
         system("cls");
        printf("\n1. Taka to AUD\n");
        printf("2. AUD to Taka\n");
        printf("\n\nEnter Your Choice:");
        int h; scanf("%d", &h);
        if(h == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka; scanf("%f", &Taka);
         printf("\nConverted AUD = %0.2f\n", Taka / 132.89);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of AUD: ");
          float AUD; scanf("%f", &AUD);
          printf("\nConverted Taka = %0.2f\n", AUD * 132.89);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 9: system("cls");
        printf("\n1. Taka to NZD\n");
        printf("2. NZD to Taka\n");
        printf("\n\nEnter Your Choice:");
        int i; scanf("%d", &i);
        if(i == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka; scanf("%f", &Taka);
         printf("\nConverted NZD = %0.2f\n", Taka / 132.89);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of NZD: ");
          float NZD; scanf("%f", &NZD);
          printf("\nConverted Taka = %0.2f\n", NZD * 132.89);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 10:
         system("cls");
        printf("\n1. Taka to    CAD\n");
        printf("2. CAD to Taka\n");
        printf("\n\nEnter Your Choice:");
        int j; scanf("%d", &j);
        if(j == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka; scanf("%f", &Taka);
         printf("\nConverted CAD = %0.2f\n", Taka / 79.17);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of CAD: ");
          float CAD; scanf("%f", &CAD);
          printf("\nConverted Taka = %0.2f\n", CAD * 79.17);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 11:
         system("cls");
        printf("\n1. Taka to JPY\n");
        printf("2. JPY to Taka\n");
        printf("\n\nEnter Your Choice:");
        int k; scanf("%d", &k);
        if(k == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka; scanf("%f", &Taka);
         printf("\nConverted JPY = %0.2f\n", Taka / 0.80);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of JPY: ");
          float JPY; scanf("%f", &JPY);
          printf("\nConverted Taka = %0.2f\n", JPY * 0.80);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 12:
         system("cls");
        printf("\n1. Taka to CHF\n");
        printf("2. CHF to Taka\n");
        printf("\n\nEnter Your Choice:");
        int l; scanf("%d", &l);
        if(l == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka; scanf("%f", &Taka);
         printf("\nConverted CHF = %0.2f\n", Taka / 118.84);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of CHF: ");
          float CHF; scanf("%f", &CHF);
          printf("\nConverted Taka = %0.2f\n", CHF * 118.84);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 13:
         system("cls");
        printf("\n1. Taka to AED\n");
        printf("2. AED to Taka\n");
        printf("\n\nEnter Your Choice:");
        int m; scanf("%d", &m);
        if(m == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka; scanf("%f", &Taka);
         printf("\nConverted AED = %0.2f\n", Taka / 28.99);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of AED: ");
          float AED;
          scanf("%f", &AED);
          printf("\nConverted Taka = %0.2f\n", AED * 28.99);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 14:
         system("cls");
        printf("\n1. Taka to ZAR\n");
        printf("2. ZAR to Taka\n");
        printf("\n\nEnter Your Choice:");
        int n;
        scanf("%d", &n);
        if(n == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted ZAR = %0.3f\n", Taka / 5.792);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of ZAR: ");
          float ZAR;
          scanf("%f", &ZAR);
          printf("\nConverted Taka = %0.3f\n", ZAR * 5.792);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 15:
         system("cls");
        printf("\n1. Taka to RUB\n");
        printf("2. RUB to Taka\n");
        printf("\n\nEnter Your Choice:");
        int o;
        scanf("%d", &o);
        if(o == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted RUB = %0.2f\n", Taka / 1.301);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of RUB: ");
          float RUB;
          scanf("%f", &RUB);
          printf("\nConverted Taka = %0.2f\n", RUB * 1.301);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 16:
         system("cls");
        printf("\n1. Taka to AWG\n");
        printf("2. AWG to Taka\n");
        printf("\n\nEnter Your Choice:");
        int p;
        scanf("%d", &p);
        if(p == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted AWG = %0.2f\n", Taka / 1.301);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of AWG: ");
          float AWG;
          scanf("%f", &AWG);
          printf("\nConverted Taka = %0.2f\n", AWG * 1.301);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 17:
         system("cls");
        printf("\n1. Taka to BRL\n");
        printf("2. BRL to Taka\n");
        printf("\n\nEnter Your Choice:");
        int q;
        scanf("%d", &q);
        if(q == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted BRL = %0.3f\n", Taka / 1.301);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of BRL: ");
          float BRL;
          scanf("%f", &BRL);
          printf("\nConverted Taka = %0.3f\n", BRL * 1.301);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 18:
        system("cls");
        printf("\n1. Taka to CAD\n");
        printf("2. CAD to Taka\n");
        printf("\n\nEnter Your Choice:");
        int r;
        scanf("%d", &r);
        if(r == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted CAD = %0.2f\n", Taka / 1.302);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of CAD: ");
          float CAD;
          scanf("%f", &CAD);
          printf("\nConverted Taka = %0.2f\n", CAD * 1.302);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 19:
        system("cls");
        printf("\n1. Taka to COP\n");
        printf("2. COP to Taka\n");
        printf("\n\nEnter Your Choice:");
        int s;
        scanf("%d", &s);
        if(s == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted COP = %0.2f\n", Taka / 1.301);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of COP: ");
          float COP;
          scanf("%f", &COP);
          printf("\nConverted Taka = %0.2f\n", COP * 1.301);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 20:
        system("cls");
        printf("\n1. Taka to AFN\n");
        printf("2. AFN to Taka\n");
        printf("\n\nEnter Your Choice:");
        int t;
        scanf("%d", &t);
        if(t == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted AFN = %0.3f\n", Taka / 1.23);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of AFN: ");
          float AFN;
          scanf("%f", &AFN);
          printf("\nConverted Taka = %0.3f\n", AFN * 1.23);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 21:
        system("cls");
        printf("\n1. Taka to BTN\n");
        printf("2. BTN to Taka\n");
        printf("\n\nEnter Your Choice:");
        int u;
        scanf("%d", &u);
        if(u == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted BTN = %0.2f\n", Taka / 1.30);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of BTN: ");
          float BTN;
          scanf("%f", &BTN);
          printf("\nConverted Taka = %0.2f\n", BTN * 1.30);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

        case 22:
        system("cls");
        printf("\n1. Taka to BHD\n");
        printf("2. BHD to Taka\n");
        printf("\n\nEnter Your Choice:");
        int v;
        scanf("%d", &v);
        if(v == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted BHD = %0.3f\n", Taka / 282.53);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of BHD: ");
          float BHD;
          scanf("%f", &BHD);
          printf("\nConverted Taka = %0.3f\n", BHD * 282.53);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 23:
        system("cls");
        printf("\n1. Taka to CNY\n");
        printf("2. CNY to Taka\n");
        printf("\n\nEnter Your Choice:");
        int w;
        scanf("%d", &w);
        if(w == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted CNY = %0.3f\n", Taka / 15.53);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of CNY: ");
          float CNY;
          scanf("%f", &CNY);
          printf("\nConverted Taka = %0.3f\n", CNY * 15.53);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

          break;

    case 24:
        system("cls");
        printf("\n1. Taka to GRD\n");
        printf("2. GRD to Taka\n");
        printf("\n\nEnter Your Choice:");
        int x;
        scanf("%d", &x);
        if(x == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted GRD = %0.2f\n", Taka / 117.43);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of GRD: ");
          float GRD;
          scanf("%f", &GRD);
          printf("\nConverted Taka = %0.2f\n", GRD * 117.43);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 25:
        system("cls");
        printf("\n1. Taka to HRK\n");
        printf("2. HRK to Taka\n");
        printf("\n\nEnter Your Choice:");
        int y;
        scanf("%d", &y);
        if(y == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted HRK = %0.4f\n", Taka / 15.617916);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of HRK: ");
          float HRK;
          scanf("%f", &HRK);
          printf("\nConverted Taka = %0.4f\n", HRK * 15.617916);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 26:
        system("cls");
        printf("\n1. Taka to DKK\n");
        printf("2. DKK to Taka\n");
        printf("\n\nEnter Your Choice:");
        int z;
        scanf("%d", &z);
        if(z == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted DKK = %0.2f\n", Taka / 15.76);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of DKK: ");
          float DKK;
          scanf("%f", &DKK);
          printf("\nConverted Taka = %0.2f\n", DKK * 15.76);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 27:
        system("cls");
        printf("\n1. Taka to GHS\n");
        printf("2. GHS to Taka\n");
        printf("\n\nEnter Your Choice:");
        int a1;
        scanf("%d", &a1);
        if(a1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted GHS = %0.4f\n", Taka / 9.18);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of GHS: ");
          float GHS;
          scanf("%f", &GHS);
          printf("\nConverted Taka = %0.4f\n", GHS * 9.18);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 28:
        system("cls");
        printf("\n1. Taka to ITL\n");
        printf("2. ITL to Taka\n");
        printf("\n\nEnter Your Choice:");
        int b1;
        scanf("%d", &b1);
        if(b1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted ITL = %0.2f\n", Taka / 117.41);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of ITL: ");
          float ITL;
          scanf("%f", &ITL);
          printf("\nConverted Taka = %0.2f\n", ITL * 117.41);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 29:
        system("cls");
        printf("\n1. Taka to MAD\n");
        printf("2. MAD to Taka\n");
        printf("\n\nEnter Your Choice:");
        int c1;
        scanf("%d", &c1);
        if(c1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted MAD = %0.2f\n", Taka / 10.53);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of MAD: ");
          float MAD;
          scanf("%f", &MAD);
          printf("\nConverted Taka = %0.2f\n", MAD * 10.53);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 30:
        system("cls");
        printf("\n1. Taka to NPR\n");
        printf("2. NPR to Taka\n");
        printf("\n\nEnter Your Choice:");
        int d1;
        scanf("%d", &d1);
        if(d1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted NPR = %0.2f\n", Taka / 0.81);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of NPR: ");
          float NPR;
          scanf("%f", &NPR);
          printf("\nConverted Taka = %0.2f\n", NPR * 0.81);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 31:
        system("cls");
        printf("\n1. Taka to MVR\n");
        printf("2. MVR to Taka\n");
        printf("\n\nEnter Your Choice:");
        int e1;
        scanf("%d", &e1);
        if(e1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted MVR = %0.2f\n", Taka / 6.93);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of MVR: ");
          float MVR;
          scanf("%f", &MVR);
          printf("\nConverted Taka = %0.2f\n", MVR * 6.93);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 32:
        system("cls");
        printf("\n1. Taka to PLN\n");
        printf("2. PLN to Taka\n");
        printf("\n\nEnter Your Choice:");
        int f1;
        scanf("%d", &f1);
        if(f1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted PLN = %0.2f\n", Taka / 25.27);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of PLN: ");
          float PLN;
          scanf("%f", &PLN);
          printf("\nConverted Taka = %0.2f\n", PLN * 25.27);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 33:
        system("cls");
        printf("\n1. Taka to PTE\n");
        printf("2. PTE to Taka\n");
        printf("\n\nEnter Your Choice:");
        int g1;
        scanf("%d", &g1);
        if(g1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted PTE = %0.2f\n", Taka / 117.24);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of PTE: ");
          float PTE;
          scanf("%f", &PTE);
          printf("\nConverted Taka = %0.2f\n", PTE * 117.24);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 34:
        system("cls");
        printf("\n1. Taka to QAR\n");
        printf("2. QAR to Taka\n");
        printf("\n\nEnter Your Choice:");
        int h1;
        scanf("%d", &h1);
        if(h1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted QAR = %0.3f\n", Taka / 29.25);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of QAR: ");
          float QAR;
          scanf("%f", &QAR);
          printf("\nConverted Taka = %0.3f\n", QAR * 29.25);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 35:
        system("cls");
        printf("\n1. Taka to SAR\n");
        printf("2. SAR to Taka\n");
        printf("\n\nEnter Your Choice:");
        int i1;
        scanf("%d", &i1);
        if(i1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted HRK = %0.2f\n", Taka / 29.50);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of SAR: ");
          float SAR;
          scanf("%f", &SAR);
          printf("\nConverted Taka = %0.2f\n", SAR * 29.50);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 36:
        system("cls");
        printf("\n1. Taka to SGD\n");
        printf("2. SGD to Taka\n");
        printf("\n\nEnter Your Choice:");
        int j1;
        scanf("%d", j1);
        if(j1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted SGD = %0.2f\n", Taka / 80.12);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of SGD: ");
          float SGD;
          scanf("%f", &SGD);
          printf("\nConverted Taka = %0.2f\n", SGD * 80.12);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 37:
        system("cls");
        printf("\n1. Taka to LKR\n");
        printf("2. LKR to Taka\n");
        printf("\n\nEnter Your Choice:");
        int k1;
        scanf("%d", &k1);
        if(k1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted LKR = %0.2f\n", Taka / 0.33);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of LKR: ");
          float LKR;
          scanf("%f", &LKR);
          printf("\nConverted Taka = %0.2f\n", LKR * 0.33);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    case 38:
        system("cls");
        printf("\n1. Taka to THB\n");
        printf("2. THB to Taka\n");
        printf("\n\nEnter Your Choice:");
        int l1;
        scanf("%d", &l1);
        if(l1 == 1) {
         system("cls");
         printf("\nEnter the amount of Taka: ");
         float Taka;
         scanf("%f", &Taka);
         printf("\nConverted THB = %0.2f\n", Taka / 3.11);
         printf("\nPress Enter Any Key To Continue!\n");
         getch( );
         goto start;
        }
        else {
          system("cls");
          printf("\nEnter the amount of THB: ");
          float THB;
          scanf("%f", &THB);
          printf("\nConverted Taka = %0.2f\n", THB * 3.11);
          printf("\nPress Enter Any Key To Continue!\n");
          getch( );
          goto start;
        }

        break;

    default:///else
        exit(0);
    }
    return 0;
}

