const db = require('../../Models/index');

module.exports = async (req, res) => {
   const {imagen, nombre, edad, peso, historia, peliculas_series} = req.body;

   try {
      const result = await db.Personaje.create({
         imagen, nombre, edad, peso, historia, peliculas_series
      })
      res.json(result);
   } catch (error) {
      res.send(error)
   }
}