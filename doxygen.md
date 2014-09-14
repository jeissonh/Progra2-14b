# Documentación con Doxygen

Doxygen es un software que toma archivos fuente en varios lenguajes de programación, extrae ciertos comentarios, y los estructura de tal forma que sea fácil para un programador conocer la interfaz del software sin tener que analizar su código fuente. Generalmente Doxygen se utiliza para generar sitios web, documentos o archivos de ayuda, a partir del código fuente. Por eso se dice es un generador de documentación. Pasos para trabajar con Doxygen.

1. Instalarlo. Descargue y ejecute el instalador del [sitio web oficial](www.doxygen.org). En Linux puede alternativamente instalarlo de los repositorios oficiales de la distribución. Por ejemplo en Debian/Ubuntu/Mint:

		sudo apt-get install doxygen
	
2. Ir a la carpeta del proyecto, normalmente la raíz del proyecto. Crear un archivo de configuración de Doxygen. Este archivo le indica a Doxygen cómo generar documentación para dicho proyecto. El comando `doxygen -g` instruye a Doxygen a generar un archivo de configuración con valores por defecto. Seguidamente se puede especificar el nombre del archivo. Si se omite, Doxygen asume `Doxyfile`. El nombre del archivo puede ser cualquiera, por ejemplo, el nombre del proyecto, seguido por una extensión opcional arbitraria, algo como `doxygen -g miproyecto.dxg`. En este ejemplo se usará el nombre por defecto `Doxyfile`:

		$ cd /ruta/hacia/miproyecto
		$ doxygen -g

3. Editar el archivo de configuración. Puede hacerlo con cualquier editor de texto, gráfico o en línea de comandos.

		$ nano Doxyfile
		
4. El archivo Doxyfile tiene notación de Makefile, con parejas `ATRIBUTO = valor` y comentarios que inician con #. Es probable que tenga que modificar el valor de algunos atributos. Ejemplo:

		PROJECT_NAME           = "Mi proyecto"
		OUTPUT_DIRECTORY       = doc/
		BUILTIN_STL_SUPPORT    = YES
		EXTRACT_ALL            = YES
		FILE_PATTERNS          = *.h
		RECURSIVE              = YES
		GENERATE_LATEX         = NO

5. Guarde los cambios. Genere documentación

		$ doxygen Doxyfile
		
6. Explore la carpeta `/ruta/hacia/miproyecto/doc/html` y abra el archivo `índex.html`. Verá la documentación de su código fuente.

7. Agregue el archivo de configuración de Doxygen a control de versiones, y excluya la carpeta de salida `doc/`:

		$ git add Doxyfile
		$ echo 'doc/' >> .gitignore
		$ git add .gitignore
		$ git commit -m 'Archivo de configuración de Doxygen'
		$ git push


## Opciones avanzadas

Generar un archivo de ayuda que puede ser usado desde QtCreator:
	
	GENERATE_QHP           = YES
	QHP_NAMESPACE          = com.github.MiProyecto
	QHG_LOCATION           = /path/to/qhelpgenerator

Para agregarlo, abra QtCreator. En las preferencias, seleccione `Help` a la izquierda. Luego la pestaña `Documentation`. Presione el botón `Add`. Localice el archivo `.qch` generado y agréguelo. Cuando en QtCreator presione F1 sobre una clase o función que esté documentado, QtCreator presentará su documentación al lado del código o en la sección de Ayuda.

