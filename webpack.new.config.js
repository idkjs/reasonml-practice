const path = require('path');

module.exports = {
  entry: {
    main: './src/re/Index.bs.js',
  },
  output: {
    path: path.join(__dirname, "bundledOutputs"),
    filename: '[name].js',
  },
};
