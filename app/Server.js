const express = require("express");
const Router = require("./Routes/Router");
const {sequelize} = require("./Models/index");

//inicializar la app
const App = express();

//Configuraciones
const PORT = process.env.PORT || 3000;

//middlewares
App.use(express.json());
App.use(express.urlencoded({extended: true}));

//Rutas
App.use("/api/v1/", Router);

//Arrancamos el Servidor
App.listen(PORT, async function () {
   console.log("Servidor funcionando en el puerto " + PORT);
   try {
      await sequelize.authenticate();
      console.log('Conexion a la DB: OK');
    } catch (error) {
      console.error('Hubo un error al conectarse a la DB: ', error);
    }
})