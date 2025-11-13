	.text
main:
    li $t0, 52
    li $t1, 0x32
    li $t2, 0x1234abcd
    add $s0, $t0, $t1
    add $s0, $s0, $t2
    la $t0, 0x10000008
    sw $s0, 0($t0)
    li $v0, 10
    syscall
