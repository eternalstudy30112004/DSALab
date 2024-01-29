	.file	"Q11.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Enter string : \0"
LC1:
	.ascii "%[^\12]\0"
LC2:
	.ascii "%c : %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	andl	$-16, %esp
	subl	$144, %esp
	.cfi_offset 7, -12
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	leal	116(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	leal	16(%esp), %edx
	movl	$0, %eax
	movl	$25, %ecx
	movl	%edx, %edi
	rep stosl
	movl	$0, 140(%esp)
	jmp	L2
L3:
	leal	116(%esp), %edx
	movl	140(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	$65, %eax
	leal	116(%esp), %ecx
	movl	140(%esp), %edx
	addl	%ecx, %edx
	movzbl	(%edx), %edx
	movsbl	%dl, %edx
	subl	$65, %edx
	movzbl	16(%esp,%edx), %edx
	addl	$1, %edx
	movb	%dl, 16(%esp,%eax)
	addl	$1, 140(%esp)
L2:
	leal	116(%esp), %edx
	movl	140(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	testb	%al, %al
	jne	L3
	movl	$0, 136(%esp)
	jmp	L4
L6:
	leal	16(%esp), %edx
	movl	136(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	testb	%al, %al
	je	L5
	leal	16(%esp), %edx
	movl	136(%esp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	movl	136(%esp), %edx
	addl	$65, %edx
	movl	%eax, 8(%esp)
	movl	%edx, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
L5:
	addl	$1, 136(%esp)
L4:
	cmpl	$99, 136(%esp)
	jle	L6
	movl	$0, %eax
	movl	-4(%ebp), %edi
	leave
	.cfi_restore 5
	.cfi_restore 7
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
