var btnOpen=document.querySelector('.vip')
var modal=document.querySelector('.modal')
var iconClose=document.querySelector('.header i')
function toggleModal(){
    modal.classList.toggle('hide')
    console.log(e.target);
}
btnOpen.addEventListener('click',toggleModal)
modal.addEventListener('click',toggleModal)

{
    if(e.target==e.currentTarget)
    {
        toggleModal()
    }
}
iconClose.addEventListener('click',toggleModal)
