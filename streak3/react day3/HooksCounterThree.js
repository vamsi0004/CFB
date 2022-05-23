import React, {useState} from 'react'

function HooksCounterThree() {

    const [name,setName] = useState({firstName : '' ,lastName: ''})

    return (
    <form>
        <input type="text" 
            value={name.firstName} 
            onChange={e => setName({fisrtName: e.target.value})}   
        />
        <input type="text" 
            value={name.lastName} 
            onChange={e => setName({lastName: e.target.value})}   
        />
        <h2>your first Name is - {name.firstName}</h2>
        <h2>your last Name is - {name.lastName}</h2>
    </form>
  )
}

export default HooksCounterThree