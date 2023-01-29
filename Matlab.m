%% Leonardo Rodriguez Baeza
%% Practica del ADC Micro

clear all;
close all;
clc; 

s = serialport ('COM6', 115200, 'timeout', 10);
muestras = 10000; 
i = 1;
figure;
title('Grafica voltaje 6 ADC');
xlabel('numero de muestras');
ylabel('voltaje (V)');
grid on;
hold on;
ylim([0 4]);
xlim([0 100]);

while i<= muestras
   if mod(i,100) == 0
       xlim([i i+100])
   end
   str_1 = readline(s);
   str_2 = readline(s);
   str_3 = readline(s);
   str_4 = readline(s);
   str_5 = readline(s);
   str_6 = readline(s);
   ADC1 = str2double(str_1);
   ADC2 = str2double(str_2);
   ADC3 = str2double(str_3);
   ADC4 = str2double(str_4);
   ADC5 = str2double(str_5);
   ADC6 = str2double(str_6);
   voltaje_1(i) = (ADC1*3.3)/4095;
   voltaje_2(i) = (ADC2*3.3)/4095;
   voltaje_3(i) = (ADC3*3.3)/4095;
   voltaje_4(i) = (ADC4*3.3)/4095;
   voltaje_5(i) = (ADC5*3.3)/4095;
   voltaje_6(i) = (ADC6*3.3)/4095;
   plot(voltaje_1,'r');
   drawnow
   plot(voltaje_2,'b');
   drawnow
   plot(voltaje_3,'g');
   drawnow
   plot(voltaje_4,'p');
   drawnow
   plot(voltaje_5,'r');
   drawnow
   plot(voltaje_6,'b');
   drawnow
   i = i+1;
end