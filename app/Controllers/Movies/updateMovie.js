const db = require("../../Models/index");

module.exports = async (req, res) => {
  const id = req.params.id;
  const { imagen, titulo, creacion, calificacion, personajes_asociados } =
    req.body;

  try {
    const response = await db.Pelicula_Serie.findOne({ where: { id } });
    await response.update({
      imagen,
      titulo,
      creacion,
      calificacion,
      personajes_asociados,
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
