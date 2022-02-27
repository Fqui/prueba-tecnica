const db = require("../../Models/index");

module.exports = async (req, res) => {
  let url = req.url
  include = url.includes("?")
  console.log(include);
  try {
    if (include) {
      const { nombre, edad, idMovie } = req.query;
      if (nombre) {
        const result = await db.Personaje.findOne({where: {nombre: req.query.nombre} });
        res.json({ result: result });
      } else if (edad) {
        const result = await db.Personaje.findOne({ where: {edad: req.query.edad} });
        res.json({ result: result });
      } else if (idMovie) {
        const result = await db.Personaje.findOne({ idMovie });
        res.json({ result: result });
      } else {
        res.json({message: "query invalida"})
      }
    } else {
      const response = await db.Personaje.findAll({
        attributes: ["id", "imagen", "nombre"],
      });
      res.send(response);
    }
  } catch (error) {
    res.json({ error: error})
  }

};
