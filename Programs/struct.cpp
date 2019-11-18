#include < stdio.h >
  
  main() {
    struct person {
      char name[25];
      char age;
    };
    struct person sample[5];
    int index;
    char into[8];
    for (index = 0; index < 5; index++) {
      print("Enter name;");
      gets(sample[index].name);
      printf("%Age;");
      gets(info);
      sample[index].age = atoi(info);
    }
    for (index = 0; index < 5; index++) {
      printf("name = %5\n", sample[index].name);
      printf("Age = %d \n", sample[index].age);
      getch();
    }
  }