import React, { Component } from 'react'

class Font extends Component {

    constructor(props) {
      super(props)
    
      this.state = {
         username:'',
         comments:' comments'
      }
      
    }

    handleUsernameChange(event){
        this.setstate ({
            username: event.target.value
        });
    }
    handleCommentsChange = event => {
        this.setstate({
            comments:event.target.value
        })
    }
    handleSubmit= event =>{
        alert('submited :'+this.state.topic)

    }


  render() {
    return (
      <form onSubmit={this.handleSubmit}>
          <div>
            <label>user name : </label>
            <input type="text" 
                value={this.state.username}  
                onChange={this.handleUsernameChange}
            />
            </div>
            <div>
            <label>Text area: </label>
            <textarea type='text' 
                value={this.state.comments}
                onChange={this.handleCommentsChange} />
          </div>
          <div>
              <label>topic : </label>
              <select>
                  <option>HTML</option>
                  <option>CSS</option>
                  <option>JAVASCRIPT</option>
                  <option>BOOTSTRAP</option>
              </select>
          </div>
          <div>
              <input type='submit' value='submit' />
          </div>
      </form>
    )
  }
}

export default Font