clear; clc;
X=load('pacientes.txt');
Y=load('patologias.txt');
% Embaralha dados
I=randperm(358);
X=X(:,I);
Y=Y(:,I);
% Separa os 300 primeiros pacientes para construcao do modelo
Xmodel=X(:,1:50);


Ymodel=Y(:,1:50);
% Os 58 restantes serao usados para testar a qualidade do modelo
Xtest=X(:,51:358);
Ytest=Y(:,51:358);
% Construcao do modelo (Determinacao da matriz A)

A=Ymodel*Xmodel'*inv(Xmodel*Xmodel');

% Teste do modelo
Ypred=A*Xtest;  % Diagnosticos preditos
% Encontra os elementos de maior valor em cada coluna de Ypred
[dummy Imax_pred]=max(Ypred);
% Encontra os elementos de maior valor em cada coluna de Ypred
[dummy Imax_test]=max(Ytest);

% Calcula porcentagem de acerto
Perro=100*pdist2(Imax_pred,Imax_test,'hamming'),  % No matlab

Pacerto=100-Perro




