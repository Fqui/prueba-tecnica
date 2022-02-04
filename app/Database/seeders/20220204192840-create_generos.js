"use strict";

module.exports = {
  async up(queryInterface, Sequelize) {
    await queryInterface.bulkInsert(
      "Generos",
      [
        {
          nombre: "drama",
          imagen: "https://thumbs.dreamstime.com/b/m%C3%A1scaras-del-drama-38191460.jpg",
          peliculas_series_asociadas: "ejemplo"
        },
        {
          nombre: "infantiles",
          imagen: "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRTBatf2aFTdx0YoMhY3_8HTXS-w0bwDgCpJS0N01i0AG0m8NzzBMJ_Y1U9Kh6kVBLxHQ&usqp=CAU",
          peliculas_series_asociadas: "ejemplo"
        },
        {
          nombre: "aventuras",
          imagen: "https://thumbs.dreamstime.com/b/icono-del-libro-concepto-de-aventura-g%C3%A9nero-de-la-ficci%C3%B3n-81644130.jpg",
          peliculas_series_asociadas: "ejemplo"
        },
      ],
      {}
    );
  },

  async down(queryInterface, Sequelize) {
    await queryInterface.bulkDelete("Generos", null, {});
  },
};
