;x86 assembly

; register instructions
mov eax, 0x12345678 ; This instruction moves the value 0x12345678 into the eax register
mov ebx, eax ; This instruction moves the value of eax into the ebx register

; memory instructions
mov [0x12345678], eax ; This instruction moves the value of eax into the memory address 0x12345678
mov eax, [0x12345678] ; This instruction moves the value of the memory address 0x12345678 into the eax register

; arithmetic instructions
add eax, ebx ; This instruction adds the value of ebx to the value of eax and stores the result in eax
sub eax, ebx ; This instruction subtracts the value of ebx from the value of eax and stores the result in eax
mul ebx ; This instruction multiplies the value of eax by the value of ebx and stores the result in eax
div ebx ; This instruction divides the value of eax by the value of ebx and stores the result in eax

; math
add eax, 0x12345678 ; This instruction adds 0x12345678 to the value of eax and stores the result in eax
sub eax, 0x12345678 ; This instruction subtracts 0x12345678 from the value of eax and stores the result in eax
mul eax, 0x12345678 ; This instruction multiplies the value of eax by 0x12345678 and stores the result in eax
div eax, 0x12345678 ; This instruction divides the value of eax by 0x12345678 and stores the result in eax

; logical instructions
and eax, ebx ; This instruction performs a bitwise AND operation on the value of eax and the value of ebx and stores the result in eax
or eax, ebx ; This instruction performs a bitwise OR operation on the value of eax and the value of ebx and stores the result in eax
xor eax, ebx ; This instruction performs a bitwise XOR operation on the value of eax and the value of ebx and stores the result in eax
not eax ; This instruction performs a bitwise NOT operation on the value of eax and stores the result in eax
jmp 0x12345678 ; This instruction jumps to the memory address 0x12345678
jz 0x12345678 ; This instruction jumps to the memory address 0x12345678 if the value of eax is zero
jnz 0x12345678 ; This instruction jumps to the memory address 0x12345678 if the value of eax is not zero
jg 0x12345678 ; This instruction jumps to the memory address 0x12345678 if the value of eax is greater than zero
jge 0x12345678 ; This instruction jumps to the memory address 0x12345678 if the value of eax is greater than or equal to zero
jl 0x12345678 ; This instruction jumps to the memory address 0x12345678 if the value of eax is less than zero
jle 0x12345678 ; This instruction jumps to the memory address 0x12345678 if the value of eax is less than or equal to zero

; stack instructions
push eax ; This instruction pushes the value of eax onto the stack
pop eax ; This instruction pops the value from the top of the stack into the eax register
call 0x12345678 ; This instruction calls the function at the memory address 0x12345678
ret ; This instruction returns from a function

; string instructions
mov eax, "Hello World" ; This instruction moves the string "Hello World" into the eax register
mov [0x12345678], "Hello World" ; This instruction moves the string "Hello World" into the memory address 0x12345678
mov eax, [0x12345678] ; This instruction moves the string at the memory address 0x12345678 into the eax register
mov eax, [0x12345678 + ebx] ; This instruction moves the string at the memory address 0x12345678 + the value of ebx into the eax register



; x86 assembly instructions to bytecode. (deassembler)

; registers instructions
mov eax, 0x12345678 ; 0xb8 0x78 0x56 0x34 0x12. 0xb8 = mov, 0x78 0x56 0x34 0x12 = 0x12345678
mov eax, 212 ; 0xb8 0xd4 0x00 0x00 0x00. 0xb8 = mov, 0xd4 = 212
mov ebx, eax ; 0x8b 0xc3. 0x8b = mov, 0xc3 = ebx, eax

; 0xb8 = Load immediate value into register
; 0x8b = Load register into register

; memory instructions
mov [0x12345678], eax ; 0xa3 0x78 0x56 0x34 0x12. 0xa3 = mov, 0x78 0x56 0x34 0x12 = 0x12345678
mov eax, [0x12345678] ; 0xa1 0x78 0x56 0x34 0x12. 0xa1 = mov, 0x78 0x56 0x34 0x12 = 0x12345678

; 0xa3 = Load register into memory
; 0xa1 = Load memory into register

; arithmetic instructions
add eax, ebx ; 0x01 0xd8. 0x01 = add, 0xd8 = eax, ebx
sub eax, ebx ; 0x29 0xd8. 0x29 = sub, 0xd8 = eax, ebx
mul ebx ; 0xf7 0xe3. 0xf7 = mul, 0xe3 = ebx
div ebx ; 0xf7 0xfb. 0xf7 = div, 0xfb = ebx

; 0x01 = Add register to register
; 0x29 = Subtract register from register

