"use strict";

module.exports = {
  async up(queryInterface, Sequelize) {
    await queryInterface.bulkInsert(
      "Peliculas_Series",
      [
        {
          imagen: "https://static.wikia.nocookie.net/disney/images/d/de/Aladdin_ver2_xlg.jpg/revision/latest/scale-to-width-down/336?cb=20160923054445&path-prefix=es",
          titulo: "Aladdin",
          creacion: "25/11/1992",
          calificacion: 4,
          personajes_asociados: "ejemplo",
          createdAt: new Date(),
          updatedAt: new Date(),
        },
        {
          imagen: "https://static.wikia.nocookie.net/disney/images/0/0d/FindingNemo.png/revision/latest/scale-to-width-down/342?cb=20150504060157&path-prefix=es",
          titulo: "Buscando a Nemo",
          creacion: "30/05/2003",
          calificacion: 5,
          personajes_asociados: "ejemplo",
          createdAt: new Date(),
          updatedAt: new Date(),
        },
        {
          imagen: "https://static.wikia.nocookie.net/disney/images/d/d3/Snow_white_and_the_seven_dwarfs_xlg.jpg/revision/latest/scale-to-width-down/334?cb=20160923153029&path-prefix=es",
          titulo: "Blancanieves y los 7 enanos",
          creacion: "08/02/1938",
          calificacion: 3,
          personajes_asociados: "ejemplo",
          createdAt: new Date(),
          updatedAt: new Date(),
        },
      ],
      {}
    );
  },

  async down(queryInterface, Sequelize) {
    await queryInterface.bulkDelete("Peliculas_Series", null, {});
  },
};
