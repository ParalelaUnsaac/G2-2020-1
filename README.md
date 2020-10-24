# G2-2020-1
Datos Academicos 📖
Institucion: Universidad Nacional de San Antonio Abad del Cusco
Facultad: Facultad de ingenieria electrica, electronica, informatica y mecanica
Escuela Prof: Ingenieria Informatica y de Sistemas
Docente:
Quintanilla Portugal Roxana Lisette - Docente - Concytec.
Trabajo:
Documentar y entender un programa paralelizable.
Elegimos un programa y lo ejecutamos en google colaboratory
Autores:✒️
Calderon Tintaya Fallcha Xiomara - GitHub Account - Fallcha
Deza Condori Rosmel Uriel - GitHub Account - RosmelGDeza
Guevara Ferro Cristian - GitHub Account - Cristian1938
Holguin Josh - GitHub Account - Josh
Ore Gamarra Abraham Benjamin - GitHub Account -
Rojas Garay Jafet Caleb - GitHub Account - JafetCaleb
Sullca Peralta Melanie Indira - GitHub Account - Melanie279
Empezamos... 🚀
.Programa que cuenta los numeros impares generados dentro de un arreglo

Construido con... 🛠️
Lenguaje: Dev-C++
Servicio Cloud: Google Colaboratory
Diagrama de flujo: Visual Paradigm
Editor: Visual Studio Code
Codificacion del programa 📄
Despliegue 📦
_Para poder programar en cuda primero tenemos que ejecutar una serie de instrucciones en nuestro mismo colab haciendo un copia y pega .

!apt-get --purge remove cuda nvidia* libnvidia-*
!dpkg -l | grep cuda- | awk '{print $2}' | xargs -n1 dpkg --purge
!apt-get remove cuda-*
!apt autoremove
!apt-get update

!wget https://developer.nvidia.com/compute/cuda/9.2/Prod/local_installers/cuda-repo-ubuntu1604-9-2-local_9.2.88-1_amd64 -O cuda-repo-ubuntu1604-9-2-local_9.2.88-1_amd64.deb
!dpkg -i cuda-repo-ubuntu1604-9-2-local_9.2.88-1_amd64.deb
!apt-key add /var/cuda-repo-9-2-local/7fa2af80.pub
!apt-get update
!apt-get install cuda-9.2
!pip install git+git://github.com/andreinechaev/nvcc4jupyter.git
%load_ext nvcc_plugin
