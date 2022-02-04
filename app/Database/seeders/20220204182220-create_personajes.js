"use strict";

module.exports = {
  async up(queryInterface, Sequelize) {
    await queryInterface.bulkInsert(
      "Personajes",
      [
        {
          imagen: "https://static.wikia.nocookie.net/disney/images/8/85/Aladdin_%28personaje%29.png/revision/latest/scale-to-width-down/280?cb=20160318010334&path-prefix=es",
          nombre: "Aladdin",
          edad: 27,
          peso: 75,
          historia: "Historia(?)",
          peliculas_series: "ejemplo"
        },
        {
          imagen: "https://static.wikia.nocookie.net/disney/images/9/96/Blancanieve1.jpg/revision/latest/scale-to-width-down/218?cb=20200501040907&path-prefix=es",
          nombre: "Blancanieves",
          edad: 25,
          peso: 65,
          historia: "Historia(?)",
          peliculas_series: "ejemplo"
        },
        {
          imagen: "https://static.wikia.nocookie.net/disney/images/3/3d/Dory.png/revision/latest/scale-to-width-down/332?cb=20120223085358&path-prefix=es",
          nombre: "Dori",
          edad: 3,
          peso: 0.100,
          historia: "Historia(?)",
          peliculas_series: "ejemplo"
        },
      ],
      {}
    );
  },

  async down(queryInterface, Sequelize) {
    await queryInterface.bulkDelete("Personajes", null, {});
  },
};
