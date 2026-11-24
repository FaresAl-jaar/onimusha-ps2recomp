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

// Function: sub_00681A10
// Address: 0x681a10 - 0x681a50
void sub_00681A10_0x681a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00681A10_0x681a10");
#endif

    switch (ctx->pc) {
        case 0x681a10u: goto label_681a10;
        case 0x681a14u: goto label_681a14;
        case 0x681a18u: goto label_681a18;
        case 0x681a1cu: goto label_681a1c;
        case 0x681a20u: goto label_681a20;
        case 0x681a24u: goto label_681a24;
        case 0x681a28u: goto label_681a28;
        case 0x681a2cu: goto label_681a2c;
        case 0x681a30u: goto label_681a30;
        case 0x681a34u: goto label_681a34;
        case 0x681a38u: goto label_681a38;
        case 0x681a3cu: goto label_681a3c;
        case 0x681a40u: goto label_681a40;
        case 0x681a44u: goto label_681a44;
        case 0x681a48u: goto label_681a48;
        case 0x681a4cu: goto label_681a4c;
        default: break;
    }

    ctx->pc = 0x681a10u;

label_681a10:
    // 0x681a10: 0x726c665b  .word       0x726C665B                   # divu1       $zero, $s3, $t4 # 00006640 <InstrIdType: R5900_MMI>
    ctx->pc = 0x681a10u;
    { uint32_t divisor = GPR_U32(ctx, 12); if (divisor != 0) { ctx->lo1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo1=0xFFFFFFFFFFFFFFFFull; ctx->hi1=(uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
label_681a14:
    // 0x681a14: 0x2f66253a  sltiu       $a2, $k1, 0x253A
    ctx->pc = 0x681a14u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)9530) ? 1 : 0);
label_681a18:
    // 0x681a18: 0x3a6c6576  xori        $t4, $s3, 0x6576
    ctx->pc = 0x681a18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25974);
label_681a1c:
    // 0x681a1c: 0x612f6625  daddi       $t7, $t1, 0x6625
    ctx->pc = 0x681a1cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)26149; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_681a20:
    // 0x681a20: 0x253a6363  addiu       $k0, $t1, 0x6363
    ctx->pc = 0x681a20u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 25443));
label_681a24:
    // 0x681a24: 0x5d66  .word       0x00005D66                   # xor         $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681a24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_681a28:
    // 0x681a28: 0x5d64255b  .word       0x5D64255B                   # bgtzl       $t3, . + 4 + (0x255B << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_681a2c:
    if (ctx->pc == 0x681A2Cu) {
        ctx->pc = 0x681A30u;
        goto label_681a30;
    }
    ctx->pc = 0x681A28u;
    {
        const bool branch_taken_0x681a28 = (GPR_S64(ctx, 11) > 0);
        if (branch_taken_0x681a28) {
            ctx->pc = 0x68AF98u;
            return;
        }
    }
    ctx->pc = 0x681A30u;
label_681a30:
    // 0x681a30: 0x0  nop
    ctx->pc = 0x681a30u;
    // NOP
label_681a34:
    // 0x681a34: 0x0  nop
    ctx->pc = 0x681a34u;
    // NOP
label_681a38:
    // 0x681a38: 0x0  nop
    ctx->pc = 0x681a38u;
    // NOP
label_681a3c:
    // 0x681a3c: 0x0  nop
    ctx->pc = 0x681a3cu;
    // NOP
label_681a40:
    // 0x681a40: 0x374a50  .word       0x00374A50                   # mfhi        $t1 # 00370240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681a40u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_681a44:
    // 0x681a44: 0x374a58  .word       0x00374A58                   # mult        $t1, $at, $s7 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x681a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_681a48:
    // 0x681a48: 0x374a88  .word       0x00374A88                   # jr          $at # 00174A80 <InstrIdType: CPU_SPECIAL>
label_681a4c:
    if (ctx->pc == 0x681A4Cu) {
        ctx->pc = 0x681A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x681A48u;
        // 0x681a4c: 0x374d78  .word       0x00374D78                   # dsll        $t1, $s7, 21 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 23) << 21);
        ctx->in_delay_slot = false;
        ctx->pc = 0x681A50u;
        goto label_fallthrough_0x681a48;
    }
    ctx->pc = 0x681A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x681A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x681A48u;
        // 0x681a4c: 0x374d78  .word       0x00374D78                   # dsll        $t1, $s7, 21 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 23) << 21);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x681A48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x681a48:
    ctx->pc = 0x681A50u;
}
