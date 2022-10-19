
listaTarefa = [];
document.getElementById("btnInserir").addEventListener("click", function () {

    let tarefa = document.getElementById("tarefa").value;
    if (!Verify(tarefa)) alert("Não é possível inserir duas vezes a mesma tarefa");
    else listaTarefa.push(tarefa);
    
    document.getElementById("tarefa").value = "";
});

function Verify(tarefa) {
    for (let i=0; i < listaTarefa.length; i++) {
        if (listaTarefa[i] == tarefa) return false;
    }
    return true;
}

document.getElementById("btnImprimir").addEventListener("click", function () {
    let tarefa = "";
    for (let i = 0; i < listaTarefa.length; i++) {
        tarefa += "<tr><th><b>"+(i + 1)+"</th>"+"<td>"+listaTarefa[i]+"</td></tr>";
    }
    document.getElementById("tbody").innerHTML = tarefa;
});

document.getElementById("btnLimpar").addEventListener("click", function () {
    tarefa = "";
    listaTarefa=[];
    document.getElementById("tbody").innerHTML = tarefa;
});
