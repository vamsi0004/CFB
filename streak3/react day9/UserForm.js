import React from 'react'
import useInput from './hooks/useInput'

function UserForm() {
    const[firstName,bindFirstName,resetFirstName]=useInput('')
    const [lastName,bindLastName,resetLastName]=useInput('')

    const submitHandler=e=>{
        e.preventDefault()
        alert(`Hello ${firstName} ${lastName}`)
        resetFirstName()
        resetLastName()
    }
  return (
    <div>
        <form onSubmit={submitHandler}>
            <label>first name</label>
            <input 
            {...bindFirstName}
            type='text' 
            />
            <label>last name</label>
            <input 
            {...bindLastName}
            type='text' 
            />
            <button>submit</button>
        </form>
    </div>
  )
}

export default UserForm