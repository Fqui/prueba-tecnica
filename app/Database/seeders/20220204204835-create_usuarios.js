"use strict";

module.exports = {
  async up(queryInterface, Sequelize) {
    await queryInterface.bulkInsert(
      "Usuarios",
      [
        {
          usuario: "fquintero",
          email: "fquintero@gmail.com",
          contraseña: "asdf54asdf1asdfasdfasdf321",
          createdAt: new Date(),
          updatedAt: new Date()
        },
        {
          usuario: "ecabrera",
          email: "ecabrera@gmail.com",
          contraseña: "asdf54asdf1asdfasdfasdf321",
          createdAt: new Date(),
          updatedAt: new Date()
        },
        {
          usuario: "imiranda",
          email: "imiranda@gmail.com",
          contraseña: "asdf54asdf1asdfasdfasdf321",
          createdAt: new Date(),
          updatedAt: new Date()
        },
      ],
      {}
    );
  },

  async down(queryInterface, Sequelize) {
    await queryInterface.bulkDelete("Usuarios", null, {});
  },
};
