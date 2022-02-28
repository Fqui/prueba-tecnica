const db = require('../../Models/index')

module.exports = async (req, res) => {
   try {
      const response = await db.Pelicula_Serie.findAll({
         attributes: ["id", "imagen", "titulo", "creacion"]
      })
      res.json({response: response})
   } catch (error) {
      res.json({ error: error })
   }
}