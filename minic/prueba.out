	.data
_a:
	.word 0
_b:
	.word 0
_c:
	.word 0
$str0:
	.asciiz "Inicio del programa\n"
$str1:
	.asciiz "a"
$str2:
	.asciiz "\n"
$str3:
	.asciiz "No a y b\n"
$str4:
	.asciiz "c = "
$str5:
	.asciiz "\n"
$str6:
	.asciiz "Final"
$str7:
	.asciiz "\n"
	.text
	.globl main
main:
	li $t0, 0
	sw $t0, _a
	li $t0, 0
	sw $t0, _b
	li $v0, 4
	la $a0, $str0
	syscall
	li $t0, 5
	li $t1, 2
	add $t2, $t0, $t1
	li $t0, 2
	sub $t1, $t2, $t0
	sw $t1, _c
	lw $t0, _a
	beqz $t0, if1else
	li $v0, 4
	la $a0, $str1
	syscall
	li $v0, 4
	la $a0, $str2
	syscall
	j if1end
if1else:
	lw $t1, _b
	beqz $t1, if0else
	li $v0, 4
	la $a0, $str3
	syscall
	j if0end
if0else:
while0:
	lw $t2, _c
	beqz $t2, while0end
	li $v0, 4
	la $a0, $str4
	syscall
	lw $t3, _c
	li $v0, 1
	move $a0, $t3
	syscall
	li $v0, 4
	la $a0, $str5
	syscall
	lw $t3, _c
	li $t4, 2
	sub $t5, $t3, $t4
	li $t3, 1
	add $t5, $t5, $t3
	sw $t5, _c
	j while0
while0end:
if0end:
if1end:
	li $v0, 4
	la $a0, $str6
	syscall
	li $v0, 4
	la $a0, $str7
	syscall
# program end
	li $v0, 10
	syscall

