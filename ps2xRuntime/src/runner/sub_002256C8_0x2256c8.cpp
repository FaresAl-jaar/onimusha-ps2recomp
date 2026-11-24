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

// Function: sub_002256C8
// Address: 0x2256c8 - 0x22573c
void sub_002256C8_0x2256c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002256C8_0x2256c8");
#endif

    switch (ctx->pc) {
        case 0x2256e8u: goto label_2256e8;
        case 0x225720u: goto label_225720;
        default: break;
    }

    ctx->pc = 0x2256c8u;

    // 0x2256c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2256c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2256cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2256ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2256d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2256d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2256d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2256d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2256d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2256dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2256e0: 0xc089c5a  jal         func_227168
    ctx->pc = 0x2256E0u;
    SET_GPR_U32(ctx, 31, 0x2256E8u);
    ctx->pc = 0x2256E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2256E0u;
    // 0x2256e4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227168u, 0x2256E0u, 0x2256E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256E8u;
label_2256e8:
    // 0x2256e8: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2256e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2256ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2256ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2256f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2256f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256f4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2256f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2256f8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2256F8u;
    {
        const bool branch_taken_0x2256f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2256FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256F8u;
        // 0x2256fc: 0x24c691c8  addiu       $a2, $a2, -0x6E38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256f8) {
            ctx->pc = 0x225718u;
            goto label_225718;
        }
    }
    ctx->pc = 0x225700u;
    // 0x225700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x225700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225704: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22570c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22570cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225710: 0x80898b2  j           func_2262C8
    ctx->pc = 0x225710u;
    ctx->pc = 0x225714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225710u;
    // 0x225714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    sub_002262C8_0x2262c8(rdram, ctx, runtime); return;
    ctx->pc = 0x225718u;
label_225718:
    // 0x225718: 0xc089da8  jal         func_2276A0
    ctx->pc = 0x225718u;
    SET_GPR_U32(ctx, 31, 0x225720u);
    ctx->pc = 0x2276A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2276A0u, 0x225718u, 0x225720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225720u;
label_225720:
    // 0x225720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x225724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22572c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22572cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225734: 0x8089554  j           func_225550
    ctx->pc = 0x225734u;
    ctx->pc = 0x225738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225734u;
    // 0x225738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225550u;
    sub_00225550_0x225550(rdram, ctx, runtime); return;
    ctx->pc = 0x22573Cu;
}
