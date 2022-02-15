const express = require('express');
const Router = express.Router();

const user = require("./User");
const character = require("./Character");

//Rutas
user(Router);
// character(Router);

module.exports = Router;