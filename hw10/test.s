    .data

    .text
main:
    addi $sp, $sp, -8
    sw $ra, 4($sp)		# return address
    li $t0, 10   
    sw $t0, 0($sp)		# local variable

    add $a0, $t0, $0	# function argument
    jal compute

    add $a0, $v0, $0
    li $v0, 1
    syscall

    li $v0, 11
    li $a0, '\n'
    syscall

    lw $ra, 4($sp)
    addi $sp, $sp, 8

    li $v0, 0			# function return value
    jr $ra

compute:
    addi $sp, $sp, -8
    li $t1, 1   
    sw $t1, 4($sp)		# local variable
    li $t2, 0   
    sw $t2, 0($sp)		# local variable

for:
    bge $t2, $a0, done

    sll $t1, $t1, 2
    sw $t1, 4($sp)

    addi $t2, $t2, 1
    sw $t2, 0($sp)

    j for

done:
    add $v0, $t1, $0 	# function return value
    addi $sp, $sp, 8

    jr $ra