const db = require("../../Models/index");

module.exports = async (req, res) => {
  let url = req.url;
  include = url.includes("?");

  try {
    if (include) {
      const { nombre, edad, idMovie } = req.query;

      if (nombre) {
        const response = await db.Personaje.findOne({ where: { nombre } });
        if (!response) {
          res
            .status(404)
            .json({ msg: "Ningun personaje coincide con la busqueda" });
        } else {
          res.json({ response: response });
        }
      } else if (edad) {
        const response = await db.Personaje.findOne({
          where: { edad },
        });
        if (!response) {
          res
            .status(404)
            .json({ msg: "Ningun personaje coincide con la busqueda" });
        } else {
          res.json({ response: response });
        }
      } else if (idMovie) {
        const response = await db.Personaje.findOne({ idMovie });
        if (!response) {
          res
            .status(404)
            .json({ msg: "Ningun personaje coincide con la busqueda" });
        } else {
          res.json({ response: response });
        }
      } else {
        res.json({ msg: "query invalida" });
      }
    } else {
      const response = await db.Personaje.findAll({
        attributes: ["id", "imagen", "nombre"],
      });
      res.status(200).json({ response: response });
    }
  } catch (error) {
    res.json({ error: error });
  }
};
