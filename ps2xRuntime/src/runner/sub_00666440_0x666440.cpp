#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00666440
// Address: 0x666440 - 0x666490
void sub_00666440_0x666440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00666440_0x666440");
#endif

    switch (ctx->pc) {
        case 0x666440u: goto label_666440;
        case 0x666444u: goto label_666444;
        case 0x666448u: goto label_666448;
        case 0x66644cu: goto label_66644c;
        case 0x666450u: goto label_666450;
        case 0x666454u: goto label_666454;
        case 0x666458u: goto label_666458;
        case 0x66645cu: goto label_66645c;
        case 0x666460u: goto label_666460;
        case 0x666464u: goto label_666464;
        case 0x666468u: goto label_666468;
        case 0x66646cu: goto label_66646c;
        case 0x666470u: goto label_666470;
        case 0x666474u: goto label_666474;
        case 0x666478u: goto label_666478;
        case 0x66647cu: goto label_66647c;
        case 0x666480u: goto label_666480;
        case 0x666484u: goto label_666484;
        case 0x666488u: goto label_666488;
        case 0x66648cu: goto label_66648c;
        default: break;
    }

    ctx->pc = 0x666440u;

label_666440:
    // 0x666440: 0x668960  .word       0x00668960                   # add         $s1, $v1, $a2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x666440u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_666444:
    // 0x666444: 0x0  nop
    ctx->pc = 0x666444u;
    // NOP
label_666448:
    // 0x666448: 0x6689e0  .word       0x006689E0                   # add         $s1, $v1, $a2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x666448u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_66644c:
    // 0x66644c: 0x0  nop
    ctx->pc = 0x66644cu;
    // NOP
label_666450:
    // 0x666450: 0x0  nop
    ctx->pc = 0x666450u;
    // NOP
label_666454:
    // 0x666454: 0x0  nop
    ctx->pc = 0x666454u;
    // NOP
label_666458:
    // 0x666458: 0x668ec0  .word       0x00668EC0                   # sll         $s1, $a2, 27 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x666458u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 27));
label_66645c:
    // 0x66645c: 0x0  nop
    ctx->pc = 0x66645cu;
    // NOP
label_666460:
    // 0x666460: 0x0  nop
    ctx->pc = 0x666460u;
    // NOP
label_666464:
    // 0x666464: 0x0  nop
    ctx->pc = 0x666464u;
    // NOP
label_666468:
    // 0x666468: 0x668960  .word       0x00668960                   # add         $s1, $v1, $a2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x666468u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_66646c:
    // 0x66646c: 0x668998  .word       0x00668998                   # mult        $s1, $v1, $a2 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x66646cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_666470:
    // 0x666470: 0x6689e0  .word       0x006689E0                   # add         $s1, $v1, $a2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x666470u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_666474:
    // 0x666474: 0x0  nop
    ctx->pc = 0x666474u;
    // NOP
label_666478:
    // 0x666478: 0x0  nop
    ctx->pc = 0x666478u;
    // NOP
label_66647c:
    // 0x66647c: 0x0  nop
    ctx->pc = 0x66647cu;
    // NOP
label_666480:
    // 0x666480: 0x668ec0  .word       0x00668EC0                   # sll         $s1, $a2, 27 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x666480u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 27));
label_666484:
    // 0x666484: 0x0  nop
    ctx->pc = 0x666484u;
    // NOP
label_666488:
    // 0x666488: 0x668e88  .word       0x00668E88                   # jr          $v1 # 00068E80 <InstrIdType: CPU_SPECIAL>
label_66648c:
    if (ctx->pc == 0x66648Cu) {
        ctx->pc = 0x666490u;
        goto label_fallthrough_0x666488;
    }
    ctx->pc = 0x666488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x666488u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x666488:
    ctx->pc = 0x666490u;
}
