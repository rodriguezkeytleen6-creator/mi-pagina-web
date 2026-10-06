<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Mi Página Web</title>

    <style>
        body {
            margin: 0;
            font-family: Arial, sans-serif;
            background-color: #f2f2f2;
        }

        header {
            background-color: #6c63ff;
            color: white;
            text-align: center;
            padding: 25px;
        }

        nav {
            background-color: #333;
            text-align: center;
            padding: 15px;
        }

        nav a {
            color: white;
            text-decoration: none;
            margin: 20px;
        }

        main {
            display: flex;
            padding: 20px;
            gap: 20px;
        }

        section {
            background-color: white;
            padding: 20px;
            flex: 3;
            border-radius: 10px;
        }

        aside {
            background-color: #ddd;
            padding: 20px;
            flex: 1;
            border-radius: 10px;
        }

        footer {
            background-color: #333;
            color: white;
            text-align: center;
            padding: 20px;
            margin-top: 20px;
        }
    </style>
</head>

<body>

    <!-- Encabezado -->
    <header>
        <h1>Mi Página Web</h1>
        <p>Ejemplo de estructura y maquetación utilizando HTML</p>
    </header>

    <!-- Menú de navegación -->
    <nav>
        <a href="#">Inicio</a>
        <a href="#">Nosotros</a>
        <a href="#">Servicios</a>
        <a href="#">Contacto</a>
    </nav>

    <!-- Contenido principal -->
    <main>

        <!-- Sección principal -->
        <section>
            <h2>Bienvenidos</h2>
            <p>
                Esta es una página web creada utilizando el lenguaje HTML.
                La estructura está organizada mediante diferentes elementos
                para facilitar la presentación del contenido.
            </p>

            <h2>Contenido</h2>
            <p>
                HTML permite crear la estructura de una página web utilizando
                títulos, párrafos, imágenes, enlaces, listas y otros elementos.
            </p>
        </section>

        <!-- Barra lateral -->
        <aside>
            <h3>Información</h3>
            <p>
                Aquí se puede colocar información adicional,
                enlaces importantes o anuncios.
            </p>
        </aside>

    </main>

    <!-- Pie de página -->
    <footer>
        <p>© 2026 Mi Página Web | Todos los derechos reservados</p>
    </footer>

</body>
</html>
