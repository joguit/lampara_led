<p align="center">
 

  <h3 align="center">Lampara_led</h3>

  <p align="center">
    Lampara led rgb con control bluetooth y boton para luz nocturna
    <br>
   
  </p>
</p>


## Table of contents

- [Quick start](#quick-start)
- [Instructions for use](#instructions-for-use)
- [Status](#status)
- [What's included](#whats-included)
- [Bugs and feature requests](#bugs-and-feature-requests)
- [Contributing](#contributing)
- [Creators](#creators)
- [Thanks](#thanks)
- [Copyright and license](#copyright-and-license)


## Quick start

Esta lampara funciona con un Arduino mini pro a 5V, un anillo neopixel,un modulo bluetooth con puerto serie, una bateria lipo y un modulo conversor ajustable TP4056 y un pulsador.
Lista de materiales:
- Arduino mini pro 5v.
- modulo bluetooth hc-06.
- modulo TP4056.
- bateria 2 X LGBD11865 (puede funcionar con una solo)
- anillo led ws2812 o 12 leds o similar.
- boton pulsador.

## Instructions for use

- Busca el nombre del dispositivo Bluettoth en la lista de tu telefono y vinculalo con el codigo.
- Descarga la aplicacion android Bluetooth RGB Controller (NEXT PROTOTYPES)
- Conecta la aplicacion al dispositivo.
- configura :Send RGB Data(FFFFFF) as String \[v\]
- Configura diez colores. Puedes añadir 5 más.
- La aplicacion envia un código como rgb (RED,BLUE,GREEN):
   -  0      Negro, apagado
   -  ff0000 rojo
   -  00ff00 verde
   -  0000ff azul  
   -  ffff00 amarillo
   -  ...etc

- Tambien puedes enviar un codigo RGB directamente a traves de una aplicacion Serial -Bluetooth
    
## Status

Here goes all the budgets

## What's included

Some text

```text
folder1/
└── folder2/
    ├── folder3/
    │   ├── file1
    │   └── file2
    └── folder4/
        ├── file3
        └── file4
```

## Bugs and feature requests

Have a bug or a feature request? Please first read the [issue guidelines](https://reponame/blob/master/CONTRIBUTING.md) and search for existing and closed issues. If your problem or idea is not addressed yet, [please open a new issue](https://reponame/issues/new).

## Contributing

Please read through our [contributing guidelines](https://reponame/blob/master/CONTRIBUTING.md). Included are directions for opening issues, coding standards, and notes on development.

Moreover, all HTML and CSS should conform to the [Code Guide](https://github.com/mdo/code-guide), maintained by [Main author](https://github.com/usernamemainauthor).

Editor preferences are available in the [editor config](https://reponame/blob/master/.editorconfig) for easy use in common text editors. Read more and download plugins at <https://editorconfig.org/>.

## Creators

**Creator 1**

- <https://github.com/usernamecreator1>

## Thanks

Some Text

## Copyright and license

Code and documentation copyright 2011-2018 the authors. Code released under the [MIT License](https://reponame/blob/master/LICENSE).

Enjoy :metal:
