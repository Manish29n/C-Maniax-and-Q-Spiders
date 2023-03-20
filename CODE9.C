#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    struct Term

    {
        int exp[ 3];
        int coef;
        struct Term*link;
    }

    ;
    typedef struct
    Term*Polynomial;

    Polynomial getnode() {
        Polynomial x;
        x = (Polynomial) malloc(sizeof(struct Term));
        return x;
    }

    Polynomial attach(Polynomial head, int exp[3], int coef) {
        int i;
        Polynomial temp, ptr;
        temp = getnode();
        temp -> coef = coef;
        for (i = 0; i < 3; i++)
            temp -> exp[i] = exp[i];
        temp -> link = NULL;
        ptr = head -> link;
        while (ptr -> link != head)
            ptr = ptr -> link;
        ptr -> link = temp;
        temp -> link = head;
        return head;
    }

    Polynomial read_poly(Polynomial head) {
        int nterms, coef, exp[ 3],i;
        printf("\nEnter the number of terms for Polynomial:\n");
        scanf("%d", & nterms);
        for (i = 1; i <= nterms; i++) {
            printf("Enter the co-efficients of %d term:\n", i);
            scanf("%d", & coef);
            printf("Enter the exponents of %d term...\n", i);
            printf("Enter exponent of x:\n");
            scanf("%d", & exp[0]);
            printf("Enter exponent of y:\n");
            scanf("%d", & exp[1]);
            printf("Enter exponent of z:\n");
            scanf("%d", & exp[2]);
            head = attach(head, exp, coef);
        }
        return head;
    }

    void display(Polynomial head) {
        int rev;
        Polynomial ptr;
        if (head -> link == head) {
            printf("Polynomial does not exist\n");
            return;
        }
        ptr = head -> link;
        while (ptr != head) {
            if (ptr -> coef != 0) {
                printf("%d", ptr -> coef);
                if (ptr -> exp[0] != 0)
                    printf("x^%d", ptr -> exp[0]);
                if (ptr -> exp[1] != 0)
                    printf("y^%d", ptr -> exp[1]);
                if (ptr -> exp[2] != 0)
                    printf("z^%d", ptr -> exp[2]);
            }
            ptr = ptr -> link;
            if (ptr != head && ptr -> coef > 0)
                printf("+");
        }
    }

    int compare(int a[3], int b[3]) {
        if (a[0] == b[0]) {
            if (a[1] == b[1]) {
                if (a[2] == b[2])
                    return 0;
                else if (a[2] > b[2])
                    return 1;
                else
                    return -1;
            } else if (a[1] > b[1])
                return 1;
            else
                return -1;
        } else if (a[0] > b[0])
            return 1;
        else
            return -1;
    }

    Polynomial poly_add(Polynomial head1, Polynomial head2, Polynomial head3) {
        Polynomial a, b;
        int sum;
        a = head1 -> link;
        b = head2 -> link;
        while (a != head1 && b != head2) {
            switch (compare(a -> exp, b -> exp)) {
                case 0:
                    sum = a -> coef + b -> coef;
                    if (sum != 0)
                        head3 = attach(head3, a -> exp, sum);
                    a = a -> link;
                    b = b -> link;
                    break;
                case 1:
                    head3 = attach(head3, a -> exp, a -> coef);
                    a = a -> link;
                    break;
                case 2:
                    head3 = attach(head3, b -> exp, b -> coef);
                    b = b -> link;
                    break;
            }
        }
        while (a != head1) {
            head3 = attach(head3, a -> exp, a -> coef);
            a = a -> link;
        }
        while (b != head2) {
            head3 = attach(head3, b -> exp, b -> coef);
            b = b -> link;
        }
        return head3;
    }

    void evalPoly(Polynomial head) {
        long sum = 0;
        int x, y, z;
        Polynomial p;
        printf("\nEnter value of x,y and z\n");
        scanf("%d%d%d", & x,&y,&z);
        p = head -> link;
        while (p != head) {
            sum += (p -> coef * pow(x, p -> exp[0]) * pow(y, p -> exp[1]) * pow(z, p -> exp[2]));
            p = p -> link;
        }
        printf("\nResult of P(x,y,z) is :%ld\n", sum);
    }

    void main() {
        int ch;
        char ele;
        Polynomial polyA, polyB, polyC, poly;
        poly = (Polynomial) malloc(sizeof(struct Term));
        polyA = (Polynomial) malloc(sizeof(struct Term));
        polyB = (Polynomial) malloc(sizeof(struct Term));
        polyC = (Polynomial) malloc(sizeof(struct Term));
        polyA -> link = polyA;
        polyB -> link = polyB;
        polyC -> link = polyC;
        poly -> link = poly;
        while (1) {
            printf("\nSingly Circular Linked List Operation Menu\n");
            printf("1.Represent and Evaluate a Polynomial P(x,y,z)\n2.Sum of 2 Polynomials POLY1(x,y,z) and POLY2(x,y,z)\n3.Exit\n");
            printf("Enter your choice:\n");
            scanf("%d", & ch);
            switch (ch) {
                case 1:
                    printf("\nEnter the Polynomial P(x,y,z) to Represent and Evaluate \n");
                    poly = read_poly(poly);
                    printf("\nPolynomial P(x,y,z) is:");
                    display(poly);
                    evalPoly(poly);
                    break;
                case 2:
                    printf("\nEnter the Polynomial POLY1(x,y,z)\n");
                    polyA = read_poly(polyA);
                    printf("\nEnter the Polynomial POLY2(x,y,z)\n");
                    polyB = read_poly(polyB);
                    printf("\nPolynomial POLY1(x,y,z) is:");
                    display(polyA);
                    printf("\nPolynomial POLY2(x,y,z) is:");
                    display(polyB);
                    polyC = poly_add(polyA, polyB, polyC);
                    printf("\nSum of two polynomial POLY1(x,y,z) and POLY2(x,y,z) is:\n");
                    display(polyC);
                    break;
                case 3:
                    exit(0);
                default:
                    printf("\nEnter a Valid Choice\n");
                    break;
            }
        }
    }