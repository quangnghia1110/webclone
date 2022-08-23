var btnOpen1=document.querySelector('.vip1')
var modal1=document.querySelector('.modal1')
var iconClose1=document.querySelector('.header1 i')
function toggleModal(){
    modal1.classList.toggle('hide')
    console.log(e.target);
}
btnOpen1.addEventListener('click',toggleModal)
modal1.addEventListener('click',toggleModal)

{
    if(e.target==e.currentTarget)
    {
        toggleModal()
    }
}
iconClose.addEventListener('click',toggleModal)
