#ifndef DOG_H_
#define DOG_H_

/**
  * struct dog - struct dog
  * @name: name of dog
  * @owner: owner of dog
  * @age: age of dog
  */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
  * struct dog_t - struct another name
  * @name: name
  * @owner: owner
  * @age: age
  */
typedef struct
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
