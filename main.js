
const arreglo = [1, 224, 61, 7, 22, 89, 54, 9, 120, 44];

function mostrarArreglo(arreglo) {
    out = "";
    arreglo.forEach(elemento => out += `[${elemento}]`);
    console.log(out)
}

function main() {

    console.log("\nArreglo sin ORDEN:");
    mostrarArreglo(arreglo);

    for (i = 0; i < arreglo.length; i++) {
        for (j = 0; j < arreglo.length; j++)
            if (arreglo[j] > arreglo[j + 1]) {
                aux = arreglo[j]
                arreglo[j] = arreglo[j + 1]
                arreglo[j + 1] = aux
            }
    }
    console.log("\nArreglo ordenado:")
    mostrarArreglo(arreglo);
}

main();