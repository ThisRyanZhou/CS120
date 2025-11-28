#Qianjun Ryan Zhou
    .data
arr: .byte 'E', 'L', 'V', 'I', 'S'
arrayLength: .word 5
newline: .byte '\n'
    .text

main:
    la $t0, arr
    li $t1, 0
loop:
    li $t2, 5
    bge $t1, $t2, done

    lb $t3, 0($t0)
    li $t4, 'G'
    ble $t3, $t4, convert

    li $t4, 'M'
    bge $t3, $t4, convert

    j print
convert:
    addi $t3, $t3, 32
    sb $t3, 0($t0)
print:
    move $a0, $t3
    li $v0, 11
    syscall

    addi $t1, $t1, 1
    addi $t0, $t0, 1
    j loop
done:
    la $a0, newline
    li $v0, 4
    syscall

    li $v0, 10
    syscall