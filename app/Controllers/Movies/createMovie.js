const db = require("../../Models/index");

module.exports = async (req, res) => {
  const { imagen, titulo, creacion, calificacion, personajes_asociados } =
    req.body;

  try {
    const response = await db.Pelicula_Serie.create({
      imagen,
      titulo,
      creacion,
      calificacion,
      personajes_asociados,
    });
    res.status(200).json({ response: response });
  } catch (error) {
    res.json({ error: error.message });
  }
};
