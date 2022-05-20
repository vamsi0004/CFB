import React, { Component } from 'react'

function FunctionClicks() {
    function clickHandler(){
      console.log('button clicked')  
    }



    return (
      <div>
          <button onClick={clickHandler}>click</button>
      </div>
    )
  }


export default FunctionClicks