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

// Function: sub_00207388
// Address: 0x207388 - 0x20740c
void sub_00207388_0x207388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207388_0x207388");
#endif

    switch (ctx->pc) {
        case 0x2073a4u: goto label_2073a4;
        case 0x2073d8u: goto label_2073d8;
        default: break;
    }

    ctx->pc = 0x207388u;

    // 0x207388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20738c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20738cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207390: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x207390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207394: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x207398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20739c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20739Cu;
    SET_GPR_U32(ctx, 31, 0x2073A4u);
    ctx->pc = 0x2073A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20739Cu;
    // 0x2073a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20739Cu, 0x2073A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073A4u;
label_2073a4:
    // 0x2073a4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2073a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2073a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2073a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2073ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2073acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2073b0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2073B0u;
    {
        const bool branch_taken_0x2073b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2073B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073B0u;
        // 0x2073b4: 0x24847718  addiu       $a0, $a0, 0x7718 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073b0) {
            ctx->pc = 0x2073D0u;
            goto label_2073d0;
        }
    }
    ctx->pc = 0x2073B8u;
    // 0x2073b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2073b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2073bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2073bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2073c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2073c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2073c4: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x2073C4u;
    ctx->pc = 0x2073C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073C4u;
    // 0x2073c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2073CCu;
    // 0x2073cc: 0x0  nop
    ctx->pc = 0x2073ccu;
    // NOP
label_2073d0:
    // 0x2073d0: 0xc08703c  jal         func_21C0F0
    ctx->pc = 0x2073D0u;
    SET_GPR_U32(ctx, 31, 0x2073D8u);
    ctx->pc = 0x2073D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073D0u;
    // 0x2073d4: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0F0u, 0x2073D0u, 0x2073D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073D8u;
label_2073d8:
    // 0x2073d8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2073d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2073dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2073DCu;
    {
        const bool branch_taken_0x2073dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073DCu;
        // 0x2073e0: 0x24847748  addiu       $a0, $a0, 0x7748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073dc) {
            ctx->pc = 0x2073F8u;
            goto label_2073f8;
        }
    }
    ctx->pc = 0x2073E4u;
    // 0x2073e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2073e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2073e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2073e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2073ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2073ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2073f0: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x2073F0u;
    ctx->pc = 0x2073F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073F0u;
    // 0x2073f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2073F8u;
label_2073f8:
    // 0x2073f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2073f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2073fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2073fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207404: 0x3e00008  jr          $ra
    ctx->pc = 0x207404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207404u;
        // 0x207408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20740Cu;
}
