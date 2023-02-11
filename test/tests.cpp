#include "ctest.h"
#include <string>

#include "alphabet_generation.hpp"

CTEST(ALPHABET_GENERATION, ALPHABET_FLAG)
{
    string alphabet = "";
    int len_alphabet = 0;

    ASSERT_EQUAL(1, generation_alphabet(&alphabet, &len_alphabet, false, false, false, false));
}
