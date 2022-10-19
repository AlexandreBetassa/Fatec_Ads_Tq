document.getElementById("btnCalcular").addEventListener("click", function () {
    var valor = document.getElementById("valor").value;
    var qtdParcelas = document.getElementById("qtdParcelas").value;
    valor = parseFloat(valor);
    qtdParcelas = parseFloat(qtdParcelas);

    if (qtdParcelas <= 12) {
        imprimir(valor, qtdParcelas, 1.01);
    } else if (qtdParcelas > 12 && qtdParcelas <= 24) {
        imprimir(valor, qtdParcelas, 1.015);
    } else if (qtdParcelas > 24 && qtdParcelas <= 36) {
        imprimir(valor, qtdParcelas, 1.02);
    } else {
        imprimir(valor, qtdParcelas, 1.025);
    }
});

function imprimir(montante, qtdParcelas, juros) {
    let valorParc = (montante / qtdParcelas);
    let valor = valorParc;
    let html = "";
    for (let i = 0; i < qtdParcelas; i++) {
        valorParc *=juros;
        html += "<tr><td>" + (i + 1) + "</td><td>R$ " + valorParc.toFixed(2) + "</td><td>R$ " + valor.toFixed(2) + "</td></tr>"
        valor += parseFloat(valorParc);
    }
    document.getElementById("tbody").innerHTML = html;
}