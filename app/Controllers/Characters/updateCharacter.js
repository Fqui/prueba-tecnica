const db = require("../../Models/index");

module.exports = async (req, res) => {
  const id = req.params.id;
  const { imagen, nombre, edad, peso, historia, peliculas_series } = req.body;

  try {
    const response = await db.Personaje.findOne({ where: { id } });
    await response.update({
      imagen,
      nombre,
      edad,
      peso,
      historia,
      peliculas_series,
    });
    if (!response) {
      res
        .status(404)
        .json({ msg: "Ningun personaje coincide con la busqueda" });
    } else {
      res.json({ response: response });
    }
  } catch (error) {
    res.json({ error: error });
  }
};
