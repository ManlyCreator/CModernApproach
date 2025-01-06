#include <stdio.h>

typedef struct {
  char *country;
  int code;
} dialingCode;

int main(void) {
  int countryCode;
  const dialingCode countryCodes[] = {
    { "Argentina", 54 }, { "Brazil", 55 }, { "China", 86 },
    { "Congo", 243 }, { "Ethiopia", 251 }, { "Germany", 49 },
    { "Bangladesh", 880 }, { "Burma", 95 }, { "Colombia", 57 },
    { "Egypt", 20}, { "France", 33 }, { "India", 91 }
  };

  printf("Enter a country code: ");
  scanf("%d", &countryCode);

  for (int i = 0; i < sizeof(countryCodes) / sizeof(countryCodes[0]); i++) {
    if (countryCodes[i].code == countryCode) {
      printf("%s\n", countryCodes[i].country);
      return 0;
    }
  }

  printf("Country not found\n");

  return -1;
}
