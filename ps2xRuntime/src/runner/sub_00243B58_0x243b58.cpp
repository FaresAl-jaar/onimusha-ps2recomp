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

// Function: sub_00243B58
// Address: 0x243b58 - 0x243c1c
void sub_00243B58_0x243b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243B58_0x243b58");
#endif

    switch (ctx->pc) {
        case 0x243b98u: goto label_243b98;
        case 0x243bc8u: goto label_243bc8;
        case 0x243bd4u: goto label_243bd4;
        default: break;
    }

    ctx->pc = 0x243b58u;

    // 0x243b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243b60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x243b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x243b68: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x243B68u;
    {
        const bool branch_taken_0x243b68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x243B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B68u;
        // 0x243b6c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b68) {
            ctx->pc = 0x243B90u;
            goto label_243b90;
        }
    }
    ctx->pc = 0x243B70u;
    // 0x243b70: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x243b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x243b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243b78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243b78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243b7c: 0x2484bc00  addiu       $a0, $a0, -0x4400
    ctx->pc = 0x243b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949888));
    // 0x243b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243b84: 0x8090d8a  j           func_243628
    ctx->pc = 0x243B84u;
    ctx->pc = 0x243B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B84u;
    // 0x243b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
    ctx->pc = 0x243B8Cu;
    // 0x243b8c: 0x0  nop
    ctx->pc = 0x243b8cu;
    // NOP
label_243b90:
    // 0x243b90: 0xc049f18  jal         func_127C60
    ctx->pc = 0x243B90u;
    SET_GPR_U32(ctx, 31, 0x243B98u);
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x243B90u, 0x243B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B98u;
label_243b98:
    // 0x243b98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x243b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b9c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x243B9Cu;
    {
        const bool branch_taken_0x243b9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x243BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B9Cu;
        // 0x243ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b9c) {
            ctx->pc = 0x243BC0u;
            goto label_243bc0;
        }
    }
    ctx->pc = 0x243BA4u;
    // 0x243ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243ba8: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x243ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x243bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243bb4: 0xa0406140  sb          $zero, 0x6140($v0)
    ctx->pc = 0x243bb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x886140u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x886140u, _value); } while (0);
    // 0x243bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x243BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BB8u;
        // 0x243bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243BC0u;
label_243bc0:
    // 0x243bc0: 0xc090e88  jal         func_243A20
    ctx->pc = 0x243BC0u;
    SET_GPR_U32(ctx, 31, 0x243BC8u);
    ctx->pc = 0x243A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243A20u, 0x243BC0u, 0x243BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BC8u;
label_243bc8:
    // 0x243bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bcc: 0xc090f08  jal         func_243C20
    ctx->pc = 0x243BCCu;
    SET_GPR_U32(ctx, 31, 0x243BD4u);
    ctx->pc = 0x243BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BCCu;
    // 0x243bd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C20u, 0x243BCCu, 0x243BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BD4u;
label_243bd4:
    // 0x243bd4: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x243bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x243bd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243bdc: 0x24846140  addiu       $a0, $a0, 0x6140
    ctx->pc = 0x243bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24896));
    // 0x243be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243be4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x243BE4u;
    {
        const bool branch_taken_0x243be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x243BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BE4u;
        // 0x243be8: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243be4) {
            ctx->pc = 0x243C00u;
            goto label_243c00;
        }
    }
    ctx->pc = 0x243BECu;
    // 0x243bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243bf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243bf8: 0x8049522  j           func_125488
    ctx->pc = 0x243BF8u;
    ctx->pc = 0x243BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BF8u;
    // 0x243bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    sub_00125488_0x125488(rdram, ctx, runtime); return;
    ctx->pc = 0x243C00u;
label_243c00:
    // 0x243c00: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x243c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x243c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243c08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243c0c: 0x2484bc28  addiu       $a0, $a0, -0x43D8
    ctx->pc = 0x243c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949928));
    // 0x243c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243c14: 0x8090d8a  j           func_243628
    ctx->pc = 0x243C14u;
    ctx->pc = 0x243C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C14u;
    // 0x243c18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
    ctx->pc = 0x243C1Cu;
}
