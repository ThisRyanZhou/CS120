# Homework-08
	.data
q:	.word 0x13579bdf	#3
str:.asciiz "Fall25-CS120"
x:	.word 0x00000000	#1
y:	.word 0xfeedc0de	#2
z:	.half 0xD			#4

	.text
main:
    la $t0, q
	lw $s0, 0($t0)      #5

	la $t1, str     	#6
	lb $s0, 0($t1)
	lb $s1, 1($t1)
	lb $s2, 2($t1)
	lb $s3, 3($t1)
	add $t2, $s0, $s1   #7

	la $t0, y           #8
	sw $s0, -16($t0)    #9
	sw $s1, 4($t0)      #10

	jr $ra
