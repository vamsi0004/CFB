import React from 'react'

function Stylesheets(props) {
  let className=props.primary ? 'primary' : ''

  return (
    <div>
        <h1 className='primary'>Stylesheets</h1>
    </div>
  )
}

export default Stylesheets