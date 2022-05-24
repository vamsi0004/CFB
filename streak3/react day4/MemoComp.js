import React from 'react'

function MemoComp({name}) {
    console.log('************parent component**************')
  return (
      
        <div> memo{name} </div>
  )
}


export default React.memo(MemoComp)
