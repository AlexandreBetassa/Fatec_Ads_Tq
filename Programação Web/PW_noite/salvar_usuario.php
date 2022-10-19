<?php 
if(isset($_POST) && !empty($_POST))
{
    if( empty( $_POST["Nome"] ))
    {
        echo "O campo NOme não pode estar vazio";
    }else if(empty($_POST["Email"])){
        echo "O Campo Email não pode estar vazio";
    }
    else
    {

    
?>

            <div class="mb-3">
                <label class="form-label">Email </label>
                <input type="email" class="form-control" name="Email" value="<?php echo $_POST["Email"];?>">
            </div>
            <div class="mb-3">
                <label class="form-label">Login</label>
                <input type="text" class="form-control" name="Login"  value="<?php echo $_POST["Login"];?>" />
            </div>
            <div class="mb-3">
                <label class="form-label">Nome</label>
                <input type="text" class="form-control" name="Nome"  value="<?php echo $_POST["Nome"];?>" />
            </div>
            <div class="mb-3">
                <label class="form-label">Senha</label>
                <input type="password" class="form-control" name="Senha"  value="<?php echo $_POST["Senha"];?>" />
            </div>
            <div class="mb-3">
               <button class="btn btn-success" type="submit">Enviar</button>
            </div>

            <?php 
            
        }
    }
        ?>