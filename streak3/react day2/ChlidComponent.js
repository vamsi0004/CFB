import React from 'react'

function ChlidComponent(props) {
  return (
    <div>
        <button onClick={props.greethandler('child')}>greet parent</button>
    </div>
  )
}

export default ChlidComponent