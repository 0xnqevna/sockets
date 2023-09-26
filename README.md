# Ejemplo de Cliente y Servidor en C con Sockets

Este repositorio contiene un ejemplo básico de un cliente y un servidor en lenguaje C que utilizan sockets para comunicarse entre sí. Este código ha sido desarrollado con fines educativos y demuestra cómo crear un servidor que recibe un comando del cliente, lo ejecuta y devuelve los resultados.

## Uso

Este código se proporciona únicamente con fines educativos y de aprendizaje. No se recomienda su uso en un entorno de producción ni en situaciones críticas de seguridad. Antes de utilizarlo, comprenda las implicaciones de seguridad asociadas con la ejecución de comandos remotos.

### Requisitos previos

Asegúrese de tener un entorno de desarrollo C configurado y las siguientes bibliotecas instaladas:

- [stdio.h](https://en.cppreference.com/w/c/header)
- [stdlib.h](https://en.cppreference.com/w/c/header)
- [string.h](https://en.cppreference.com/w/c/header)
- [sys/socket.h](https://pubs.opengroup.org/onlinepubs/009695399/basedefs/sys/socket.h.html)
- [netinet/in.h](https://pubs.opengroup.org/onlinepubs/009695399/basedefs/netinet/in.h.html)
- [arpa/inet.h](https://pubs.opengroup.org/onlinepubs/009695399/basedefs/arpa/inet.h.html)
- [unistd.h](https://pubs.opengroup.org/onlinepubs/009695399/basedefs/unistd.h.html)

### Ejecución

1. Clone el repositorio en su máquina local.

```shell
git clone https://github.com/0xnqevna/sockets.git
cd ejemplo-sockets-c

2. Compile y ejecute el servidor
```shell
gcc servidor.c -o servidor
./servidor

3. Compile y ejecute el cliente
```shell
gcc cliente.c -o cliente
./cliente
