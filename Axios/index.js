function showResponse(res){
    document.querySelector('#text').innerHTML = `
        <h1>Informações</h1>
        <pre>
            ${JSON.stringify(res.data,null,'\t')}
        </pre>
    `
}

function get(){
    axios.get("http://jsonplaceholder.typicode.com/todos")
        .then(res =>showResponse(res))
}

function getById(){
    const id = document.querySelector('#user').value
    axios.get(`http://jsonplaceholder.typicode.com/todos/${id}`)
    .then(res => showResponse(res))
}

function post(){
    const title= document.querySelector('#post').value
    const sabor= document.querySelector('#sabor').value

    axios.post("http://jsonplaceholder.typicode.com/posts",{title, sabor}).then(res => showResponse(res))
}

function put(){
    const id = document.querySelector('#update').value
    const title = document.querySelector('#update-title').value
        axios.put(`http://jsonplaceholder.typicode.com/posts/${id}`,{title}).then(res => showResponse(res))
}

function remove(){
    const id = document.querySelector('#userDelete')
    axios.delete(`https://jsonplaceholder.typicode.com/posts/${id}`)
}

function todo(){
    axios.all([
        axios.get("https://jsonplaceholder.typicode.com/todos"),
        axios.post("https://jsonplaceholder.typicode.com/posts",{title:"olá"})
    ]).then(axios.spread((posts,write)=>{
        showResponse(posts)
        if(write.status == 201){
            alert("post cadastrado")
        }
     }))
}
