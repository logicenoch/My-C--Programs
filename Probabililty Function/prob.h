

#define INITIAL_SEED 17
#define MULTIPLIER 25173
#define INCREMENT 13849
#define MODULUS 65535
#define FLOATING_MODULUS 65535.0

static unsigned seed = INITIAL_SEED;

unsigned random(void) {
    seed = (MULTIPLIER * seed + INCREMENT) % MODULUS;
    return seed;
}

double probability() {
    seed = (MULTIPLIER * seed + INCREMENT) % MODULUS;
    return (seed / FLOATING_MODULUS);
}

double hundred(void);
double Thousand(void);


