const express = require('express');
const Router = express.Router();

Router.get("/", (req, res) => {
   res.status(200).json({message: 'OK'})
})

module.exports = Router;