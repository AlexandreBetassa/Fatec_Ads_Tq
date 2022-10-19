<?php
$titulo = "Cadastrar usuário";
include "./cabecalho.php";
?>

<div class="row">
    <div class="offset-4 col-4 text-center">
        <h2><b> Cadastro de usuário</b></h2>
        <div class="container p-4" style="border: 2px solid black">
            <form action="./salvar_usuario.php" method="post">
                <!-- linha do email -->
                <div class="mb-3">
                    <label for="exampleFormControlInput1" class="form-label">Email</label>
                    <input type="email" class="form-control text-center" id="exampleFormControlInput1" placeholder="name@example.com">
                </div>
                <!-- Senha -->
                <div class="mb-3">
                    <label for="exampleFormControlInput1" class="form-label">Login</label>
                    <input type="text" class="form-control text-center" name="login" placeholder="ID login">
                </div>
                <!-- Nome -->
                <div class="mb-3">
                    <label for="exampleFormControlInput1" class="form-label">Nome</label>
                    <input type="text" class="form-control text-center" name="nome" placeholder="Nome usuário">
                </div>

                <div class="mb-3">
                    <label for="exampleFormControlInput1" class="form-label">Senha</label>
                    <input type="password" class="form-control text-center" name="senha" placeholder="senha com 8 digitos">
                </div>
                <input class="btn btn-primary" type="submit" value="Submit">
        </div>

        </form>
    </div>
</div>

</form>



<?php
include "./rodape.php"
?>