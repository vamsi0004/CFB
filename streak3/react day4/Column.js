import React from 'react'

function Column() {
    const items=[]
  return (
    <React.Fragment>
        {
            items.map(item =>(
                <React.Fragment key={item.id}>
                    <h1>Title</h1>
                    <p>{items.title}</p>
                </React.Fragment>

            ))
        }
        <td>Name</td>
        <td>Mahesh</td>

    </React.Fragment>
  )
}
export default Column