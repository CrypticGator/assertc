#include "assert.h"

#include <stdio.h>

module(array)
{
    suite("Array")
    {
        test("Array equality check")
        {
            int arr1[] = {1, 2, 3, 4, 5};
            int arr2[] = {1, 2, 3, 4, 5};
            expect_array_int(arr1, 5) to be equal(arr2);
        } end
        test("Array above or equal check")
        {
            int arr1[] = {2, 3, 4, 5, 6};
            int arr2[] = {1, 3, 3, 5, 5};
            expect_array_int(arr1, 5) to be above_or_equal(arr2);
        } end
        /* » */
        test("Array int » below or equal check")
        {
            int arr1[] = {2, 3, 4, 5, 6};
            int arr2[] = {1, 3, 3, 5, 5};
            expect_array_int(arr2, 5) to be below_or_equal(arr1);
        } end
    } end
}

int main()
{
    run(array);
    return 0;
}
