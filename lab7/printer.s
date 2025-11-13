	#hello world for MIPS
	#Qianjun Ryan Zhou
    
	.data
hello:	.asciiz "Qianjun Ryan Zhou\n"
	.text

main:	li $v0, 4
	la $a0, hello
	syscall

    li $a0, 18
	li $a1, 27
	add $a2, $a0, $a1
    li $a1, -11
    add $a0, $a1, $a2
    li $v0, 1
    syscall
    li $v0, 10
	syscall
