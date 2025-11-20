# Qianjun Ryan Zhou
	.data
x:	.word 3
	.word 370
	.word 201
	.word 7
	.word 41
	.word 0
prompt:	.asciiz "The sum of numbers more than 5 and less than 210 is "

	.text
main:	
    la $s0, x
	li $s1, 0
    li $t1, 5
    li $t2, 210

while:	
    lw $s2, 0($s0)
	beq $s2, $0, done

	ble $s2, $t1, skip
    bge $s2, $t2, skip
	add $s1, $s1, $s2

skip:
	# Move the pointer
	addi $s0, $s0, 4

	j while

done:
	# SPIM can print ASCII strings..
	li $v0, 4
	la $a0, prompt
	syscall

	# SPIM has code to print numbers as
	# part of the operating system.  
	li $v0, 1
	move $a0, $s1
	syscall

    # return 0
    li $v0, 0
    jr $ra
