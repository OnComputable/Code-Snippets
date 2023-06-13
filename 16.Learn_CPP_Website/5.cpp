/* Section - 1.4 Variable assignment and initialization
   CopyTyper - Swiss
   Here’s an example where we use assignment twice
   The following program should generate no warnings/errors, even though x is unused:
*/

#include <iostream>

int main()
{
    [[maybe_unused]] int x { 5 };

    // since x is [[maybe_unused]], no warning generated

    return 0;
}