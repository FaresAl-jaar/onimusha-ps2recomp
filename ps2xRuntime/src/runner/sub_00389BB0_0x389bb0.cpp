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

// Function: sub_00389BB0
// Address: 0x389bb0 - 0x389c38
void sub_00389BB0_0x389bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389BB0_0x389bb0");
#endif

    switch (ctx->pc) {
        case 0x389c1cu: goto label_389c1c;
        default: break;
    }

    ctx->pc = 0x389bb0u;

    // 0x389bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389bb4: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x389bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x389bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x389bbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x389BBCu;
    {
        const bool branch_taken_0x389bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x389BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BBCu;
        // 0x389bc0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389bbc) {
            ctx->pc = 0x389BD0u;
            goto label_389bd0;
        }
    }
    ctx->pc = 0x389BC4u;
    // 0x389bc4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x389BC4u;
    {
        const bool branch_taken_0x389bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389bc4) {
            ctx->pc = 0x389C28u;
            goto label_389c28;
        }
    }
    ctx->pc = 0x389BCCu;
    // 0x389bcc: 0x0  nop
    ctx->pc = 0x389bccu;
    // NOP
label_389bd0:
    // 0x389bd0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x389bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x389bd4: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x389bd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x389bd8: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x389bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x389bdc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x389bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x389be0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x389be0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x389be4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x389be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x389be8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x389be8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x389bec: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x389becu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x389bf0: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x389BF0u;
    {
        const bool branch_taken_0x389bf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x389bf0) {
            ctx->pc = 0x389C28u;
            goto label_389c28;
        }
    }
    ctx->pc = 0x389BF8u;
    // 0x389bf8: 0x8e0506cc  lw          $a1, 0x6CC($s0)
    ctx->pc = 0x389bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x389bfc: 0x240300fb  addiu       $v1, $zero, 0xFB
    ctx->pc = 0x389bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x389c00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x389c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x389c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389c08: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x389c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x389c0c: 0xae0506cc  sw          $a1, 0x6CC($s0)
    ctx->pc = 0x389c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 5));
    // 0x389c10: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x389c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x389c14: 0xc0a69b8  jal         func_29A6E0
    ctx->pc = 0x389C14u;
    SET_GPR_U32(ctx, 31, 0x389C1Cu);
    ctx->pc = 0x389C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389C14u;
    // 0x389c18: 0xa2022ad8  sb          $v0, 0x2AD8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 10968), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6E0u, 0x389C14u, 0x389C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389C1Cu;
label_389c1c:
    // 0x389c1c: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x389c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x389c20: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x389c20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x389c24: 0x0  nop
    ctx->pc = 0x389c24u;
    // NOP
label_389c28:
    // 0x389c28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x389c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389c30: 0x3e00008  jr          $ra
    ctx->pc = 0x389C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C30u;
        // 0x389c34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389C38u;
}
