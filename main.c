#include "assert.h"

#include <stdio.h>

#define EXECUTE_ASSERTIONS

int main()
{
#ifdef EXECUTE_ASSERTIONS
    suite("Checking if assertions are working fine")
    {
        suite("bool")
        {
            test("Should pass if true == true")
            {
                expect_bool(true) to be equal(true);
            } end
            test("Should pass if true != false")
            {
                expect_bool(false) to not be equal(true);
            } end
        } end
        suite("char")
        {
            test("Should pass if 'c' == 'c'")
            {
                expect_char('c') to be equal('c');
            } end
            test("Should pass if 'c' != 'd'")
            {
                expect_char('c') to not be equal('d');
            } end
        }end

        suite("short")
        {
            test("Should pass if 5 == 5")
            {
                expect_short(5) to be equal(5);
            } end
            test("Should pass if 5 != 6")
            {
                expect_short(5) to be equal(6);
            } end
        } end

        suite("int")
        {
            test("Should pass if 10 == 10")
            {
                expect_int(10) to be equal(10);
            } end
            test("Should pass if 10 != 11")
            {
                expect_int(10) to not be equal(11);
            } end
        } end

        suite("long")
        {
            test("Should pass if 100L == 100L")
            {
                expect_long(100L) to be equal(100L);
            } end
            test("Should pass if 100L != 101L")
            {
                expect_long(100L) to not be equal(101L);
            } end
        } end

        suite("float")
        {
            test("Should pass if 10.02 == 10.02")
            {
                expect_float(10.02) to be equal(10.02);
            } end
            test("Should pass if 10.02 != 10.03")
            {
                expect_float(10.02) to not be equal(10.03);
            } end
        } end

        suite("double")
        {
            test("Should pass if 10.25 == 10.25")
            {
                expect_double(10.25) to be equal(10.25);
            } end
            test("Should pass if 10.25 != 10.20")
            {
                expect_double(10.25) to not be equal(10.20);
            } end
        } end

        suite("string (char *)")
        {
            test("Should pass if \"Hello\" == \"Hello\"")
            {
                expect_string("Hello") to be equal("Hello");
            } end
            test("Should pass if \"Hello\" != \"World\"")
            {
                expect_string("Hello") to be equal("World");
            } end

            pending("Test case to compare pointers");
        } end
    } end
#endif
    return 0;
}
