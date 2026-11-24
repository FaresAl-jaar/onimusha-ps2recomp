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

// Function: sub_0036EFA0
// Address: 0x36efa0 - 0x36f014
void sub_0036EFA0_0x36efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EFA0_0x36efa0");
#endif

    switch (ctx->pc) {
        case 0x36effcu: goto label_36effc;
        case 0x36f008u: goto label_36f008;
        default: break;
    }

    ctx->pc = 0x36efa0u;

    // 0x36efa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36efa4: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x36efa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x36efa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36efac: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x36efacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x36efb0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x36efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x36efb4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x36EFB4u;
    {
        const bool branch_taken_0x36efb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36efb4) {
            ctx->pc = 0x36F000u;
            goto label_36f000;
        }
    }
    ctx->pc = 0x36EFBCu;
    // 0x36efbc: 0x908c0336  lbu         $t4, 0x336($a0)
    ctx->pc = 0x36efbcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 822)));
    // 0x36efc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36efc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36efc8: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x36efc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x36efcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36efccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36efd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36efd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36efd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36efd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36efd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36efd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36efdc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36efdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36efe0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x36efe0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36efe4: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x36efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x36efe8: 0xa0830336  sb          $v1, 0x336($a0)
    ctx->pc = 0x36efe8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 822), (uint8_t)GPR_U32(ctx, 3));
    // 0x36efec: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36efecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36eff0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36eff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36eff4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36EFF4u;
    SET_GPR_U32(ctx, 31, 0x36EFFCu);
    ctx->pc = 0x36EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EFF4u;
    // 0x36eff8: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36EFF4u, 0x36EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EFFCu;
label_36effc:
    // 0x36effc: 0x0  nop
    ctx->pc = 0x36effcu;
    // NOP
label_36f000:
    // 0x36f000: 0xc0ed6d4  jal         func_3B5B50
    ctx->pc = 0x36F000u;
    SET_GPR_U32(ctx, 31, 0x36F008u);
    ctx->pc = 0x36F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F000u;
    // 0x36f004: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B50u, 0x36F000u, 0x36F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F008u;
label_36f008:
    // 0x36f008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f00c: 0x3e00008  jr          $ra
    ctx->pc = 0x36F00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F00Cu;
        // 0x36f010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F014u;
}
