#include <stdio.h>
#include <stdlib.h>

struct Term {
    int coeff;
    int exp;
};

void addPolynomials(struct Term* poly1, int size1, struct Term* poly2, int size2, struct Term** result, int* resSize) {
    int maxSize = size1 + size2;
    *result = (struct Term*)malloc(maxSize * sizeof(struct Term));

    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (poly1[i].exp > poly2[j].exp) {
            (*result)[k] = poly1[i];
            i++;
            k++;
        } else if (poly1[i].exp < poly2[j].exp) {
            (*result)[k] = poly2[j];
            j++;
            k++;
        } else {
            int sumCoeff = poly1[i].coeff + poly2[j].coeff;
            if (sumCoeff != 0) {
                (*result)[k].coeff = sumCoeff;
                (*result)[k].exp = poly1[i].exp;
                k++;
            }
            i++;
            j++;
        }
    }

    while (i < size1) {
        (*result)[k] = poly1[i];
        i++;
        k++;
    }

    while (j < size2) {
        (*result)[k] = poly2[j];
        j++;
        k++;
    }

    *resSize = k;
    *result = (struct Term*)realloc(*result, (*resSize) * sizeof(struct Term));
}

void displayPolynomial(struct Term* poly, int size) {
    if (size == 0) {
        printf("0\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        if (poly[i].coeff == 0) {
            continue; // Skip terms with zero coefficient
        } else if (poly[i].coeff == 1) {
            if (poly[i].exp == 0) {
                printf("1");
            } else {
                printf("x^%d", poly[i].exp);
            }
        } else {
            if (poly[i].exp == 0) {
                printf("(%d)", poly[i].coeff);
            } else if (poly[i].exp == 1) {
                printf("(%d)x", poly[i].coeff);
            } else {
                printf("(%d)x^%d", poly[i].coeff, poly[i].exp);
            }
        }

        if (i < size - 1) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    struct Term* poly1 = NULL;
    struct Term* poly2 = NULL;
    struct Term* sumPoly = NULL;
    int size1 = 0, size2 = 0, sizeSum = 0;
    int n, coeff, exp;

    printf("Enter the number of terms for Polynomial 1: ");
    scanf("%d", &n);
    printf("Enter the coefficients and exponents for Polynomial 1:\n");
    poly1 = (struct Term*)malloc(n * sizeof(struct Term));
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &exp);
        poly1[i].coeff = coeff;
        poly1[i].exp = exp;
        size1++;
    }

    printf("Enter the number of terms for Polynomial 2: ");
    scanf("%d", &n);
    printf("Enter the coefficients and exponents for Polynomial 2:\n");
    poly2 = (struct Term*)malloc(n * sizeof(struct Term));
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &exp);
        poly2[i].coeff = coeff;
        poly2[i].exp = exp;
        size2++;
    }

    printf("Polynomial 1: ");
    displayPolynomial(poly1, size1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2, size2);

    addPolynomials(poly1, size1, poly2, size2, &sumPoly, &sizeSum);

    printf("Sum of Polynomials: ");
    displayPolynomial(sumPoly, sizeSum);

    free(poly1);
    free(poly2);
    free(sumPoly);

    return 0;
}
