import axios from 'axios'
import React, {useState,useEffect} from 'react'

function DataFetching() {
    const [post,setPost]=useState({})
    const [id,setId]=useState(1)
    const [idFromButtonClick,setIdFromButtonClick]=(1)

    const handleClick=()=> {
        setIdFromButtonClick(id)
    }

    useEffect(() =>{
        axios.get(`http://jsonplaceholder.typicode.com/posts/${idFromButtonClick}`)
        .then(res=>{
            console.log(res)
            setPost(res.data)
        })
        .catch(err=>{
            console.log(err)
        })
    },[idFromButtonClick])

  return (
    <div>
        <input type="text"  value={id} onChange={e=>setId(e.target.value)}/>
        <button type="button" onClick={handleClick}>Fetch post</button>
        <div>{post.title}</div>
        {/*<ul>
            {posts.map(post =>(
                <li key={post.id}>{post.title}</li>
            ))}
        </ul>*/}
    </div>
  )
}

export default DataFetching