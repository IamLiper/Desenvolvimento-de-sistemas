programa {
  funcao inicio() {
    //Exibindo vari�vel
    inteiro a, b, c, operacao, resultado
    
    //solicitando dados do usu�rio
    escreva("Digite o primeiro valor: ")
    leia(a)
    escreva("Digite o segundo valor: ")
    leia(b)

    //calculando
    se(a == b) {
      c = (a + b)
    }senao{
      c = (a * b)
    }
    //Exibindo resultado
    escreva("\n=== Exibindo resultado === ")
    escreva("\nTa a�: ", c)
  }
}
