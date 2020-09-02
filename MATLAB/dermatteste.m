clear; clc;

X=load('pacientes.txt');
Y=load('patologias.txt');



% Separa os 300 primeiros pacientes para construcao do modelo
Xmodel=X;
Ymodel=Y;

tx = Xmodel';
xTx = Xmodel*Xmodel';
xTxInv= inv(Xmodel*Xmodel');
yTx = Ymodel*Xmodel';

% Construcao do modelo (Determinacao da matriz A)
A=Ymodel*Xmodel'*inv(Xmodel*Xmodel');





 