const db = require('../../Models/index');

module.exports = async (req, res) => {

   const id = req.params.id
   const {imagen, nombre, edad, peso, historia, peliculas_series} = req.body

   try {
      const response = await db.Personaje.findOne({where: {id}})
      await response.update({imagen, nombre, edad, peso, historia, peliculas_series})
      res.json(response)
   } catch (error) {
      console.error(error)
   }


}