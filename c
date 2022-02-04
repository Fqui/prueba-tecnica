[33mcommit ed180f9e87986a7c60c02b7771dbb029c4cbab9f[m[33m ([m[1;36mHEAD -> [m[1;32mdevelopment[m[33m, [m[1;31morigin/main[m[33m, [m[1;32mmain[m[33m)[m
Author: Fernando Quintero <82988579+Fqui@users.noreply.github.com>
Date:   Fri Feb 4 13:21:02 2022 -0300

    primer commit

[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..b512c09[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mnode_modules[m
\ No newline at end of file[m
[1mdiff --git a/app/Server.js b/app/Server.js[m
[1mnew file mode 100644[m
[1mindex 0000000..bbd8f95[m
[1m--- /dev/null[m
[1m+++ b/app/Server.js[m
[36m@@ -0,0 +1,16 @@[m
[32m+[m[32mconst express = require("express");[m
[32m+[m
[32m+[m[32m//inicializar la app[m
[32m+[m[32mconst App = express();[m
[32m+[m
[32m+[m[32m//Configuraciones[m
[32m+[m[32mconst PORT = process.env.PORT || 3000;[m
[32m+[m
[32m+[m[32m//middlewares[m
[32m+[m[32mApp.use(express.json());[m
[32m+[m[32mApp.use(express.urlencoded({extended: true}));[m
[32m+[m
[32m+[m[32m//Arrancamos el Servidor[m
[32m+[m[32mApp.listen(PORT, async function () {[m
[32m+[m[32m   console.log("Servidor funcionando en el puerto " + PORT);[m
[32m+[m[32m})[m
\ No newline at end of file[m
[1mdiff --git a/package-lock.json b/package-lock.json[m
[1mnew file mode 100644[m
[1mindex 0000000..e8893e8[m
[1m--- /dev/null[m
[1m+++ b/package-lock.json[m
[36m@@ -0,0 +1,4590 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "name": "prueba-tecnica",[m
[32m+[m[32m  "version": "1.0.0",[m
[32m+[m[32m  "lockfileVersion": 2,[m
[32m+[m[32m  "requires": true,[m
[32m+[m[32m  "packages": {[m
[32m+[m[32m    "": {[m
[32m+[m[32m      "name": "prueba-tecnica",[m
[32m+[m[32m      "version": "1.0.0",[m
[32m+[m[32m      "license": "ISC",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "bcrypt": "^5.0.1",[m
[32m+[m[32m        "cors": "^2.8.5",[m
[32m+[m[32m        "dotenv": "^16.0.0",[m
[32m+[m[32m        "express": "^4.17.2",[m
[32m+[m[32m        "jsonwebtoken": "^8.5.1",[m
[32m+[m[32m        "pg": "^8.7.1",[m
[32m+[m[32m        "pg-hstore": "^2.3.4",[m
[32m+[m[32m        "sequelize": "^6.15.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "devDependencies": {[m
[32m+[m[32m        "nodemon": "^2.0.15"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@mapbox/node-pre-gyp": {[m
[32m+[m[32m      "version": "1.0.8",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@mapbox/node-pre-gyp/-/node-pre-gyp-1.0.8.tgz",[m
[32m+[m[32m      "integrity": "sha512-CMGKi28CF+qlbXh26hDe6NxCd7amqeAzEqnS6IHeO6LoaKyM/n+Xw3HT1COdq8cuioOdlKdqn/hCmqPUOMOywg==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "detect-libc": "^1.0.3",[m
[32m+[m[32m        "https-proxy-agent": "^5.0.0",[m
[32m+[m[32m        "make-dir": "^3.1.0",[m
[32m+[m[32m        "node-fetch": "^2.6.5",[m
[32m+[m[32m        "nopt": "^5.0.0",[m
[32m+[m[32m        "npmlog": "^5.0.1",[m
[32m+[m[32m        "rimraf": "^3.0.2",[m
[32m+[m[32m        "semver": "^7.3.5",[m
[32m+[m[32m        "tar": "^6.1.11"[m
[32m+[m[32m      },[m
[32m+[m[32m      "bin": {[m
[32m+[m[32m        "node-pre-gyp": "bin/node-pre-gyp"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@sindresorhus/is": {[m
[32m+[m[32m      "version": "0.14.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@sindresorhus/is/-/is-0.14.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-9NET910DNaIPngYnLLPeg+Ogzqsi9uM4mSboU5y6p8S5DzMTVEsJZrawi+BoDNUVBa2DhJqQYUFvMDfgU062LQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@szmarczak/http-timer": {[m
[32m+[m[32m      "version": "1.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@szmarczak/http-timer/-/http-timer-1.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-XIB2XbzHTN6ieIjfIMV9hlVcfPU26s2vafYWQcZHWXHOxiaRZYEDKEwdl129Zyg50+foYV2jCgtrqSA6qNuNSA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "defer-to-connect": "^1.0.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@types/debug": {[m
[32m+[m[32m      "version": "4.1.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/debug/-/debug-4.1.7.tgz",[m
[32m+[m[32m      "integrity": "sha512-9AonUzyTjXXhEOa0DnqpzZi6VHlqKMswga9EXjpXnnqxwLtdvPPtlO8evrI5D9S6asFRCQ6v+wpiUKbw+vKqyg==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@types/ms": "*"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@types/ms": {[m
[32m+[m[32m      "version": "0.7.31",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/ms/-/ms-0.7.31.tgz",[m
[32m+[m[32m      "integrity": "sha512-iiUgKzV9AuaEkZqkOLDIvlQiL6ltuZd9tGcW3gwpnX8JbuiuhFlEGmmFXEXkN50Cvq7Os88IY2v0dkDqXYWVgA=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@types/node": {[m
[32m+[m[32m      "version": "17.0.14",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/node/-/node-17.0.14.tgz",[m
[32m+[m[32m      "integrity": "sha512-SbjLmERksKOGzWzPNuW7fJM7fk3YXVTFiZWB/Hs99gwhk+/dnrQRPBQjPW9aO+fi1tAffi9PrwFvsmOKmDTyng=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/abbrev": {[m
[32m+[m[32m      "version": "1.1.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/abbrev/-/abbrev-1.1.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-nne9/IiQ/hzIhY6pdDnbBtz7DjPTKrY00P/zvPSm5pOFkl6xuGrGnXn/VtTNNfNtAfZ9/1RtehkszU9qcTii0Q=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/accepts": {[m
[32m+[m[32m      "version": "1.3.8",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/accepts/-/accepts-1.3.8.tgz",[m
[32m+[m[32m      "integrity": "sha512-PYAthTa2m2VKxuvSD3DPC/Gy+U+sOA1LAuT8mkmRuvw+NACSaeXEQ+NHcVF7rONl6qcaxV3Uuemwawk+7+SJLw==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "mime-types": "~2.1.34",[m
[32m+[m[32m        "negotiator": "0.6.3"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 0.6"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/agent-base": {[m
[32m+[m[32m      "version": "6.0.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/agent-base/-/agent-base-6.0.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-RZNwNclF7+MS/8bDg70amg32dyeZGZxiDuQmZxKLAlQjr3jGyLx+4Kkk58UO7D2QdgFIQCovuSuZESne6RG6XQ==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "debug": "4"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 6.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/agent-base/node_modules/debug": {[m
[32m+[m[32m      "version": "4.3.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/debug/-/debug-4.3.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-/zxw5+vh1Tfv+4Qn7a5nsbcJKPaSvCDhojn6FEl9vupwK2VCSDtEiEtqr8DFtzYFOdz63LBkxec7DYuc2jon6Q==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "ms": "2.1.2"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "peerDependenciesMeta": {[m
[32m+[m[32m        "supports-color": {[m
[32m+[m[32m          "optional": true[m
[32m+[m[32m        }[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/agent-base/node_modules/ms": {[m
[32m+[m[32m      "version": "2.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/ms/-/ms-2.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-sGkPx+VjMtmA6MX27oA4FBFELFCZZ4S4XqeGOXCv68tT+jb3vk/RyaKWP0PTKyWtmLSM0b+adUTEvbs1PEaH2w=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/ansi-align": {[m
[32m+[m[32m      "version": "3.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/ansi-align/-/ansi-align-3.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-IOfwwBF5iczOjp/WeY4YxyjqAFMQoZufdQWDd19SEExbVLNXqvpzSJ/M7Za4/sCPmQ0+GRquoA7bGcINcxew6w==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "string-width": "^4.1.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/ansi-regex": {[m
[32m+[m[32m      "version": "5.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/ansi-regex/-/ansi-regex-5.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-quJQXlTSUGL2LH9SUXo8VwsY4soanhgo6LNSm84E1LBcE8s3O0wpdiRzyR9z/ZZJMlMWv37qOOb9pdJlMUEKFQ==",[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/ansi-styles": {[m
[32m+[m[32m      "version": "4.3.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/ansi-styles/-/ansi-styles-4.3.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-zbB9rCJAT1rbjiVDb2hqKFHNYLxgtk8NURxZ3IZwD3F6NtxbXZQCnnSi1Lkx+IDohdPlFp222wVALIheZJQSEg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "color-convert": "^2.0.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=8"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/chalk/ansi-styles?sponsor=1"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/anymatch": {[m
[32m+[m[32m      "version": "3.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/anymatch/-/anymatch-3.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-P43ePfOAIupkguHUycrc4qJ9kz8ZiuOUijaETwX7THt0Y/GNK7v0aa8rY816xWjZ7rJdA5XdMcpVFTKMq+RvWg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "normalize-path": "^3.0.0",[m
[32m+[m[32m        "picomatch": "^2.0.4"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/aproba": {[m
[32m+[m[32m      "version": "2.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/aproba/-/aproba-2.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-lYe4Gx7QT+MKGbDsA+Z+he/Wtef0BiwDOlK/XkBrdfsh9J/jPPXbX0tE9x9cl27Tmu5gg3QUbUrQYa/y+KOHPQ=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/are-we-there-yet": {[m
[32m+[m[32m      "version": "2.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/are-we-there-yet/-/are-we-there-yet-2.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-Ci/qENmwHnsYo9xKIcUJN5LeDKdJ6R1Z1j9V/J5wyq8nh/mYPEpIKJbBZXtZjG04HiK7zV/p6Vs9952MrMeUIw==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "delegates": "^1.0.0",[m
[32m+[m[32m        "readable-stream": "^3.6.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/array-flatten": {[m
[32m+[m[32m      "version": "1.1.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/array-flatten/-/array-flatten-1.1.1.tgz",[m
[32m+[m[32m      "integrity": "sha1-ml9pkFGx5wczKPKgCJaLZOopVdI="[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/balanced-match": {[m
[32m+[m[32m      "version": "1.0.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/balanced-match/-/balanced-match-1.0.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-3oSeUO0TMV67hN1AmbXsK4yaqU7tjiHlbxRDZOpH0KW9+CeX4bRAaX0Anxt0tx2MrpRpWwQaPwIlISEJhYU5Pw=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/bcrypt": {[m
[32m+[m[32m      "version": "5.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/bcrypt/-/bcrypt-5.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-9BTgmrhZM2t1bNuDtrtIMVSmmxZBrJ71n8Wg+YgdjHuIWYF7SjjmCPZFB+/5i/o/PIeRpwVJR3P+NrpIItUjqw==",[m
[32m+[m[32m      "hasInstallScript": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@mapbox/node-pre-gyp": "^1.0.0",[m
[32m+[m[32m        "node-addon-api": "^3.1.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 10.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/binary-extensions": {[m
[32m+[m[32m      "version": "2.2.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/binary-extensions/-/binary-extensions-2.2.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-jDctJ/IVQbZoJykoeHbhXpOlNBqGNcwXJKJog42E5HDPUwQTSdjCHdihjj0DlnheQ7blbT6dHOafNAiS8ooQKA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/body-parser": {[m
[32m+[m[32m      "version": "1.19.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/body-parser/-/body-parser-1.19.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-8ljfQi5eBk8EJfECMrgqNGWPEY5jWP+1IzkzkGdFFEwFQZZyaZ21UqdaHktgiMlH0xLHqIFtE/u2OYE5dOtViA==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "bytes": "3.1.1",[m
[32m+[m[32m        "content-type": "~1.0.4",[m
[32m+[m[32m        "debug": "2.6.9",[m
[32m+[m[32m        "depd": "~1.1.2",[m
[32m+[m[32m        "http-errors": "1.8.1",[m
[32m+[m[32m        "iconv-lite": "0.4.24",[m
[32m+[m[32m        "on-finished": "~2.3.0",[m
[32m+[m[32m        "qs": "6.9.6",[m
[32m+[m[32m        "raw-body": "2.4.2",[m
[32m+[m[32m        "type-is": "~1.6.18"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 0.8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/boxen": {[m
[32m+[m[32m      "version": "5.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/boxen/-/boxen-5.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-9gYgQKXx+1nP8mP7CzFyaUARhg7D3n1dF/FnErWmu9l6JvGpNUN278h0aSb+QjoiKSWG+iZ3uHrcqk0qrY9RQQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "ansi-align": "^3.0.0",[m
[32m+[m[32m        "camelcase": "^6.2.0",[m
[32m+[m[32m        "chalk": "^4.1.0",[m
[32m+[m[32m        "cli-boxes": "^2.2.1",[m
[32m+[m[32m        "string-width": "^4.2.2",[m
[32m+[m[32m        "type-fest": "^0.20.2",[m
[32m+[m[32m        "widest-line": "^3.1.0",[m
[32m+[m[32m        "wrap-ansi": "^7.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/brace-expansion": {[m
[32m+[m[32m      "version": "1.1.11",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/brace-expansion/-/brace-expansion-1.1.11.tgz",[m
[32m+[m[32m      "integrity": "sha512-iCuPHDFgrHX7H2vEI/5xpz07zSHB00TpugqhmYtVmMO6518mCuRMoOYFldEBl0g187ufozdaHgWKcYFb61qGiA==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "balanced-match": "^1.0.0",[m
[32m+[m[32m        "concat-map": "0.0.1"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/braces": {[m
[32m+[m[32m      "version": "3.0.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/braces/-/braces-3.0.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-b8um+L1RzM3WDSzvhm6gIz1yfTbBt6YTlcEKAvsmqCZZFw46z626lVj9j1yEPW33H5H+l