#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include "fixedpoint.h"

// You can remove this once all of the functions are fully implemented
static Fixedpoint DUMMY;

Fixedpoint fixedpoint_create(uint64_t whole)
{
    Fixedpoint fixedPoint;

    fixedPoint.whole = whole;
    fixedPoint.frac = 0;

    // Determine if the value is non-negative or negative by checking most significant bit
    if (whole & (1 << (8 * sizeof(whole) - 1)))
    {
        fixedPoint.tag = VALID_NEGATIVE;
    }
    else
    {
        fixedPoint.tag = VALID_NONNEGATIVE;
    }

    return fixedPoint;
}

Fixedpoint fixedpoint_create2(uint64_t whole, uint64_t frac)
{
    Fixedpoint fixedPoint;

    fixedPoint.whole = whole;
    fixedPoint.frac = frac;

    // Check most significant bit for sign
    if (whole & (1 << (8 * sizeof(whole) - 1)))
    {
        fixedPoint.tag = VALID_NEGATIVE;
    }
    else
    {
        fixedPoint.tag = VALID_NONNEGATIVE;
    }

    return fixedPoint;
}

Fixedpoint fixedpoint_create_from_hex(const char *hex)
{
    // TODO: implement
    assert(0);
    return DUMMY;
}

uint64_t fixedpoint_whole_part(Fixedpoint val)
{
    return val.whole;
}

uint64_t fixedpoint_frac_part(Fixedpoint val)
{
    return val.frac;
}

Fixedpoint fixedpoint_add(Fixedpoint left, Fixedpoint right)
{
    // TODO: implement
    assert(0);
    return DUMMY;
}

Fixedpoint fixedpoint_sub(Fixedpoint left, Fixedpoint right)
{
    // TODO: implement
    assert(0);
    return DUMMY;
}

Fixedpoint fixedpoint_negate(Fixedpoint val)
{
    // TODO: implement
    assert(0);
    return DUMMY;
}

Fixedpoint fixedpoint_halve(Fixedpoint val)
{
    // TODO: implement
    assert(0);
    return DUMMY;
}

Fixedpoint fixedpoint_double(Fixedpoint val)
{
    // TODO: implement
    assert(0);
    return DUMMY;
}

int fixedpoint_compare(Fixedpoint left, Fixedpoint right)
{
    // TODO: implement
    assert(0);
    return 0;
}

int fixedpoint_is_zero(Fixedpoint val)
{
    return val.whole == 0 && val.frac == 0;
}

int fixedpoint_is_err(Fixedpoint val)
{
    // TODO: implement
    assert(0);
    return 0;
}

int fixedpoint_is_neg(Fixedpoint val)
{
    // TODO: implement
    assert(0);
    return 0;
}

int fixedpoint_is_overflow_neg(Fixedpoint val)
{
    // TODO: implement
    assert(0);
    return 0;
}

int fixedpoint_is_overflow_pos(Fixedpoint val)
{
    // TODO: implement
    assert(0);
    return 0;
}

int fixedpoint_is_underflow_neg(Fixedpoint val)
{
    // TODO: implement
    assert(0);
    return 0;
}

int fixedpoint_is_underflow_pos(Fixedpoint val)
{
    // TODO: implement
    assert(0);
    return 0;
}

int fixedpoint_is_valid(Fixedpoint val)
{
    // TODO: implement
    assert(0);
    return 0;
}

char *fixedpoint_format_as_hex(Fixedpoint val)
{
    // TODO: implement
    assert(0);
    char *s = malloc(20);
    strcpy(s, "<invalid>");
    return s;
}
