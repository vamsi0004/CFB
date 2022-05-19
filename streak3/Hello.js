import React from "react";


const Hello = ()=>{
    //return(
    //<div ClassNAme="dummyClass">
    //        <h1>Hello Mahesh</h1>
    //        <p>using JSX</p>
    //    </div>
    //)

        return React.createElement(
            'div', 
            {id:"Hello", className:'dummyClass'},   //id
            React.createElement('h1', null,'Hello mahesh' ) 
            )


}

export default Hello