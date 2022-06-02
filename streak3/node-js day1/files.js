const fs=require('fs');
/*fs.readFile('./docs/blogs1.txt',(err,data)=>{
    if(err){
        console.log(err);
    }
    console.log(data.toString());
});  

console.log('last line');*/

/*fs.writeFile('./docs/blogs1.txt','hello world',()=>{
    console.log('file was written');
});*/

if(!fs.existsSync('./assests')){
    fs.mkdir('./assests',(err)=>{
        if(err){
            console.log(err);
        }
    
        console.log('folder created');
    })
}
else
{
    fs.rmdir('./assests',(err)=>{
        if(err)
        {
            console.log(err);
        }
        console.log('folder deleted');
    })
}


if(fs.existsSync('./docs/deleteme.txt')){
    fs.unlink('./docs/deleteme.txt',(err)=>{
        if(err){
            console.log(err);
        }
        console.log('file deleted')
    })
}

 

