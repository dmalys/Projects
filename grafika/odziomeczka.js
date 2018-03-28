var canvas = document.getElementById('canvas');
var ctx = canvas.getContext('2d');

var positionX = 100.0;
var positionY = 175.0;
var velocityX = 4.0;
var velocityY = 0.0;
var gravity = 0.5;
var onGround = false;

window.addEventListener("mousedown", StartJump, false);
window.addEventListener("mouseup", EndJump, false);

Loop();

function StartJump()
{
    if(onGround)
    {
        velocityY = -12.0;
        onGround = false;
    }
}

function EndJump()
{
    if(velocityY < -6.0)
        velocityY = -6.0;
}

function Loop()
{
    Update();
    Render();
    window.setTimeout(Loop, 33);    
}

function Update()
{
    velocityY += gravity;
    positionY += velocityY;
    positionX += velocityX;
    
    if(positionY > 175.0)
    {
        positionY = 175.0;
        velocityY = 0.0;
        onGround = true;
    }
    
    if(positionX < 10 || positionX > 190)
}