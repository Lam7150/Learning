module adder4(c, a, b);
    output [3:0] c;
    input  [3:0] a, b;

    // DECLARING CONSTANTS  
    'define BINARY_CONSTANT 5'b11001    // first number is the size, followed by '
    'define HEXADECIMAL_CONSTANT 8'hd7  // the letters after specify the type of number (b = binary, hd = hexadecimal, d = decimal)
    'define DECIMAL_CONSTANT 10'd978    // the last number is the value
                                        // NOTE: the size is the number of bits NEEDED to store the value. ex. d978 is NOT 3, it's 10 binary bits


    xor lsb_xor(c[0], a[0], b[0]);  // use array notation to specify which bit you want to use
                                    // 0 is the least significant bit (2^0)
    
    wire x;                         // you can directly assign numbers to variables/wires
    assign x = b[3];
    assign c[3] = a[1];
    assign c[2:0] = b[3:1];         // even multiple bits at once

    // EQUALITY OPERATORS || really just a bunch of XNORS -- checking if all bits are equal
    (A[1:0] == 2'b10)               // returns 1 if true, 0 if false
    
endmodule