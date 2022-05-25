import React, { Component } from 'react'

class HoverCounter extends Component {

    
  render() {
      const {count} =this.state
    return (
      <div>
          <h1 onMouseOver={this.incrementCount}> {this.props.name} Hovered {count} times</h1>
      </div>
    )
  }
}

export default UpdatedComponent(HoverCounter)