#include <iostream>
using namespace std;
float salario, sv, sm, gf, csi1, csi2;
int p;
int main()
{
    cout << "Sea bienvenido a nuestra aseguradora, por favor ingrese su salario" << "\n";
    cin >> salario;
    cout << "Escoja uno de nuestros productos: \n 1.Seguro de vida \n 2.Seguro por muerte \n 3.Gastos funerarios \n 4.Seguro por invalidez" << "\n";
    cin>> p;
    switch (p)
    {
    case 1:
        if (salario >= 400.00 && salario <= 910.00)
        {
            cout << "Su monto de seguro de vida es de 10,000.00 dolares" << "\n";
        }
        else if (salario >= 910.01 && salario <= 1255.00)
        {
            cout << "SU seguro de vida es de 14,000.00 dolares" << "\n";
        }
        else if (salario >= 1255.01 && salario <= 1630.00)
        {
            cout << "Su seguro de vida es de 18,000.00" << "\n";
        }
        else if (salario >= 1630.00)
        {
            cout << "Su seguro de vida es de 22,000.00 dolares " << "\n";
        }
        else
        {
            cout << "Ingrese un salario valido" << "\n";
        }
        break;
    case 2:
        if (salario >= 400.00 && salario <= 910.00)
        {
            cout << "Su monto de seguro de muerte es de 10,000.00 dolares" << "\n";
        }
        else if (salario >= 910.01 && salario <= 1255.00)
        {
            cout << "SU seguro de muerte es de 14,000.00 dolares" << "\n";
        }
        else if (salario >= 1255.01 && salario <= 1630.00)
        {
            cout << "Su seguro de muerte es de 18,000.00" << "\n";
        }
        else if (salario >= 1630.00)
        {
            cout << "Su seguro de muerte es de 22,000.00 dolares " << "\n";
        }
        else
        {
            cout << "Ingrese un salario valido" << "\n";
        }
        break;
    case 3:
        cout << "Al fallecer recibira el 15 porciento del monto basico de su seguro de vida, ccon un maxiomo de 1750,00 dolares";
        if (salario >= 400.00 && salario <= 910.00)
        {
            cout << "Su monto de seguro de vida es de 10,000.00 dolares" << "\n";
            gf = 10000.00 * 0.15;
            cout << "Usted va a recibir :" << gf << "dolares" << "\n";
        }
        else if (salario >= 910.01 && salario <= 1255.00)
        {
            cout << "SU seguro de vida es de 14,000.00 dolares" << "\n";
            gf = 14000.00 * 0.15;
            cout << "Usted va a recibir :" << gf << "dolares" << "\n";
        }
        else if (salario >= 1255.01 && salario <= 1630.00)
        {
            cout << "Su seguro de vida es de 18,000.00" << "\n";
            gf = 18000.00 * 0.15;
            cout << "Usted va a recibir :" << gf << "dolares" << "\n";
        }
        else if (salario >= 1630.00)
        {
            cout << "Su seguro de vida es de 22,000.00 dolares " << "\n";
            gf = 22000.00 * 0.15;
            cout << "Usted va a recibir :" << gf << "dolares" << "\n";
        }
        else
        {
            cout << "Ingrese un salario valido" << "\n";
        }
    case 4:
        cout << "Si usted sufre de invalidez total o permanente su dinero sera entregado de la siguiente manera:un primer pago que consta del 50 porciento del valor asegurado y el otro 50 por ciento sera entregado en 12 cuotas mensuales sucecivas" << "\n";
        if (salario >= 400.00 && salario <= 910.00)
        {
            cout << "Su monto de seguro de vida es de 10,000.00 dolares" << "\n";
            csi1 = 10000 / 2;
            cout << "Su primera cuota sera de:" << csi1 << "\n";
            csi2 = (csi1 / 2) / 12;
            cout << "Cada cuota sera de:" << csi2 << "\n";
        }
        else if (salario >= 910.01 && salario <= 1255.00)
        {
            cout << "SU seguro de vida es de 14,000.00 dolares" << "\n";
            csi1 = 14000 / 2;
            cout << "Su primera cuota sera de:" << csi1 << "\n";
            csi2 = (csi1 / 2) / 12;
            cout << "Cada cuota sera de:" << csi2 << "\n";
        }
        else if (salario >= 1255.01 && salario <= 1630.00)
        {
            cout << "Su seguro de vida es de 18,000.00" << "\n";
            csi1 = 18000 / 2;
            cout << "Su primera cuota sera de:" << csi1 << "\n";
            csi2 = (csi1 / 2) / 12;
            cout << "Cada cuota sera de:" << csi2 << "\n";
        }
        else if (salario >= 1630.00)
        {
            cout << "Su seguro de vida es de 22,000.00 dolares " << "\n";
            csi1 = 22000 / 2;
            cout << "Su primera cuota sera de:" << csi1 << "\n";
            csi2 = (csi1 / 2) / 12;
            cout << "Cada cuota sera de:" << csi2 << "\n";
        }
        else
        {
            cout << "Ingrese un salario valido" << "\n";
        }

    default :
        cout << "Ingrese un salario valido" << "\n";
        break;
    }
    return 0;
}
