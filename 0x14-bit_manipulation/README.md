 C - Bit manipulation



Bit manipulation refers to the process of performing operations on individual bits or groups of bits within a binary number. This technique is often used in low-level programming languages like C to optimize code and reduce memory usage.

Here are some common bitwise operators in C:

1. & (Bitwise AND): Performs a bitwise AND operation between two operands, resulting in a value that has a 1 in each bit position where both operands have a 1.
For example, `0b1010 & 0b1100` would result in `0b1000`.

2. | (Bitwise OR): Performs a bitwise OR operation between two operands, resulting in a value that has a 1 in each bit position where at least one of the operands has a 1.
For example, `0b1010 | 0b1100` would result in `0b1110`.

3. ^ (Bitwise XOR): Performs a bitwise exclusive OR operation between two operands, resulting in a value that has a 1 in each bit position where the operands have different values.
For example, `0b1010 ^ 0b1100` would result in `0b0110`.

4. ~ (Bitwise NOT): Flips the bits of a single operand, resulting in a value that has a 0 in each bit position where the operand has a 1, and vice versa.
For example, `~0b1010` would result in `0b0101`.

5. << (Left shift): Shifts the bits of a single operand to the left by a specified number of positions, filling the shifted-in positions with 0s.
For example, `0b1010 << 2` would result in `0b101000`.

6. >> (Right shift): Shifts the bits of a single operand to the right by a specified number of positions, filling the shifted-in positions with 0s or 1s, depending on the sign of the operand (0s for unsigned types and the sign bit for signed types).
For example, `0b1010 >> 1` would result in `0b0101`.

Bit manipulation can be used in various ways, such as:

1. Setting a bit to 1: Use the bitwise OR operator with a mask that has a 1 in the desired bit position and 0s elsewhere. For example, to set bit 3 of a variable `x` to 1, use `x |= (1 << 3);`.

2. Clearing a bit to 0: Use the bitwise AND operator with a mask that has a 0 in the desired bit position and 1s elsewhere. For example, to clear bit 3 of a variable `x` to 0, use `x &= ~(1 << 3);`.

3. Toggling a bit: Use the bitwise XOR operator with a mask that has a 1 in the desired bit position and 0s elsewhere. For example, to toggle bit 3 of a variable `x`, use `x ^= (1 << 3);`.

4. Checking if a bit is set: Use the bitwise AND operator with a mask that has a 1 in the desired bit position and 0s elsewhere. If the result is non-zero, the bit is set. For example, to check if bit 3 of a variable `x` is set, use `(x & (1 << 3)) != 0`.

5. Checking if a bit is clear: Use the bitwise AND operator with a mask that has a 0 in the desired bit position and 1s elsewhere. If the result is zero, the bit is clear. For example, to check if bit 3 of a variable `x
