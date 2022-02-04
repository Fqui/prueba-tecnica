const express = require("express");

//inicializar la app
const App = express();

//Configuraciones
const PORT = process.env.PORT || 3000;

//middlewares
App.use(express.json());
App.use(express.urlencoded({extended: true}));

//Arrancamos el Servidor
App.listen(PORT, async function () {
   console.log("Servidor funcionando en el puerto " + PORT);
})