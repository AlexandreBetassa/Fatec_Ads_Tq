let valor1 = prompt("Informe o valor 1:");
let valor2 = prompt("Informe o valor 2:");
let op = prompt("Informe a operação:\n( + ) Soma\n( - ) Subtração\n( / ) Divisão\n( * ) Multipliacação");

valor1 = parseFloat(valor1);
valor2 = parseFloat(valor2);
if (isNaN(valor1) || isNaN(valor2)) window.alert("Algum dos valores não é um numero");
else Calcular(op, valor1, valor2);

function Calcular(op, valor1, valor2) {
    switch (op) {
        case "+":
            window.alert("SOMA\nO resultado é: " + (valor1 + valor2));
            break;
        case "-":
            window.alert("SUBTRAÇÃO\nO resultado é: " + (valor1 - valor2));
            break;
        case "/":
            if (valor1 != 0 && valor2 != 0) window.alert("DIVISÃO\nO resultado é: " + (valor1 / valor2));
            else window.alert("Impossivel divisão por 0");
            break;
        case "*":
            window.alert("MULTIPLICAÇÃO\nO resultado é: " + (valor1 * valor2));
            break;
        default:
            window.alert("Operação inválida");
            break;
    }
}
