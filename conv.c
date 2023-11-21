#include <stdio.h>

int distanceCM(int a);
int distanceKM(int a);
int distanceM(int a);
int weightGM(int Weight);
int weightKG(int weight);
int currD(int mn);
int currY(int mn);
int currR(int mn);
int currRY(int mn);

int main() {

  int types;
  int b, weight, mn, result;

  printf("---------------------------------------------------------------------"
         "----------------------------\n");
  printf("This is a converter program\n");
  printf("---------------------------------------------------------------------"
         "----------------------------\n");

  printf("please select an option");
  printf("1.Weight\t 2.Currency\t 3.Distance\t 4.Temprature\t");
  scanf("%d", &types);

  switch (types) {

  case 1:
    printf("Please enter your conversion\n");
    printf("1.KG to GM\t 2.GM to KG\t");
    scanf("%d", &b);
    if (b == 1) {
      printf("Enter the KG you want to conver to grams\n");
      scanf("%i", &weight);
      result = weightGM(weight);
      printf("The result = %i\n", result);
    } else if (b == 2) {
      printf("Enter the GM you want to convert to Kgs\n");
      scanf("%i", &weight);
      result = weightKG(weight);
      printf("The result = %i\n", result);
      break;

    case 2:
      printf("Please enter your conversion\n");
      printf("1.$ to Rupee\t 2.Rupee to $\t 3.Rupee to Yen\t 4.Yen to Rupee\t");
      scanf("%i", &b);
      if (b == 1) {
        printf("Enter dollar you want in rupee\n");
        scanf("%d", &mn);
        result = currR(mn);
        printf("The result = %i\n", result);

      } else if (b == 2) {
        printf("Enter Rupee you want in dollars\n");
        scanf("%d", &mn);
        result = currD(mn);
        printf("The result = %d", result);

      } else if (b == 3) {
        printf("The rupee you want in Yen\n");
        scanf("%d", &mn);
        result = currY(mn);
        printf("The result = %d", result);

      } else if (b == 4) {
        printf("The Yen you want in Rupee\n");
        scanf("%d", &mn);
        result = currY(mn);
        printf("The result = %d", result);
      }
      break;
    case 3:

    }
  }
}

int weightKG(int weight) {
  int kg = 1000;
  int conversion;
  conversion = weight / kg;
  return conversion;
}

int weightGM(int weight) {
  int gm = 1000;
  int conversion;
  conversion = weight * gm;
  return conversion;
}

int currR(int mn) {
  int rupee = 78;
  int conversion = rupee * mn;
  return conversion;
}

int currD(int mn) {
  int dollar = 78;
  int conversion = mn / dollar;
  return conversion;
}

int currY(int mn) {
  int yen = 0.56;
  int conversion = mn * yen;
  return conversion;
}

int currRY(int mn){
  int yen = 0.56;
  int conversion = mn / yen;
  return conversion;
}
