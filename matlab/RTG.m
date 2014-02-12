%% faire le menage
clear all   % ecraser toutes les varaiblres de l'espace de travail
clc         % netttoyer la fen�tre de commande
close all   % fermer toutes les fen�tresmgraphiques
%% param�tre
nbrvisite = 10000;
rushHour = 18;
sigma = 4.5;

temps = 0:1:23;
heureVisite = zeros(1,24);

%% calcul
for i = 1:1:nbrvisite
    rand1 = rand(1);
    rand2 = rand(1);
    heure = (sqrt(-2*log(rand1))*cos(2*pi*rand2)*sigma+rushHour); %g�n�re l'heure al�atoire
    heure=round(heure); %arrondi a l'unit�
    heure = mod(heure,24)+1; %distribution de 0 � 23 heures
    heureVisite(heure)=heureVisite(heure)+1;
end

%% affichage
figure;
plot(temps,heureVisite)
xlabel('Heure'); ylabel('Nombre de visites');
axis([0 23 0 1000])
grid on; % afficher un quadrillage
