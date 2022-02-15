const authcontroller = require('../Controllers/Auth/index');

const User = (Router) => {
   Router.post("/auth/register", authcontroller.register);
   Router.post("/auth/login", authcontroller.login);
}

module.exports = User;