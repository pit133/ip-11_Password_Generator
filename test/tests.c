#include "ctest.h"
#include <string.h>

#include "alphabet_generation.h"

CTEST(ALPHABET_GENERATION, ALPHABET_FLAG)
{
    string alphabet = "";
    int len_alphabet = 0;

    ASSERT_EQUAL(generation_alphabet(alphabet, len_alphabet, false, false, false, false),1);
}
