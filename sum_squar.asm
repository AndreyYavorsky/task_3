global sum_squar

section .text

sum_squar:
    push ebp
    mov ebp, esp

    mov esi, [ebp + 8]		; Взятие из стека адреса массива
    mov ecx, [ebp + 12]		; Взятие из стека кол-во элементов									
    xor edi, edi			; edi - хранится сумма 

for:
	mov eax, [esi]			; Записываем значение элемента в eax
	imul eax				; Умножение eax на eax
	add edi, eax			; Суммируем младшую часть от произведения(32 бит)
	add esi, 4				; Переходим к следующему элементу 
	loop for 

end:
	mov eax, edi

	mov esp, ebp
    pop ebp
    ret