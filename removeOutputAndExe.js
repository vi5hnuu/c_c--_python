const fs = require('fs');
const path = require('path');




function removeOExe(pth) {
  fs.readdir(pth, (err, files) => {
    if (err) throw err;
    // console.log(files)
    files.forEach(filename => {
      const stats = fs.statSync(path.join(pth, filename));
      // console.log('extension : ', ['.o', '.exe'].includes(path.extname(filename)), ' --- ', path.extname(filename))
      stats.isDirectory() ? removeOExe(path.join(pth, filename)) : (['.o', '.exe'].includes(path.extname(filename)) ? fs.unlinkSync(path.join(pth, filename)) : '');

    })
  });
}

removeOExe('New folder')