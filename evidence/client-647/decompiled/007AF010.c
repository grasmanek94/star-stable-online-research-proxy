_QWORD *__fastcall sub_1407AF010(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax

  v4 = (_QWORD *)sub_1409DB470(a1: 24);
  if ( v4 != nullptr )
  {
    *v4 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(PXEngine::GameServerMessages::DeactivateScheduledEvent const &),CPXNetwork *>,std::tuple<PXEngine::GameServerMessages::DeactivateScheduledEvent>>::`vftable';
    v4[1] = *a2;
    v4[2] = a2[1];
    *a1 = v4;
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}