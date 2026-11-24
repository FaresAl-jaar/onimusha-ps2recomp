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

// Function: sub_0018EE30
// Address: 0x18ee30 - 0x18eee8
void sub_0018EE30_0x18ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EE30_0x18ee30");
#endif

    switch (ctx->pc) {
        case 0x18ee88u: goto label_18ee88;
        case 0x18eebcu: goto label_18eebc;
        default: break;
    }

    ctx->pc = 0x18ee30u;

    // 0x18ee30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ee34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18ee38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ee3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ee40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ee40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee44: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x18ee44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x18ee48: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x18EE48u;
    {
        const bool branch_taken_0x18ee48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE48u;
        // 0x18ee4c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee48) {
            ctx->pc = 0x18EEB0u;
            goto label_18eeb0;
        }
    }
    ctx->pc = 0x18EE50u;
    // 0x18ee50: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x18EE50u;
    {
        const bool branch_taken_0x18ee50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ee50) {
            ctx->pc = 0x18EEA0u;
            goto label_18eea0;
        }
    }
    ctx->pc = 0x18EE58u;
    // 0x18ee58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ee5c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18EE5Cu;
    {
        const bool branch_taken_0x18ee5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ee5c) {
            ctx->pc = 0x18EE80u;
            goto label_18ee80;
        }
    }
    ctx->pc = 0x18EE64u;
    // 0x18ee64: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EE64u;
    {
        const bool branch_taken_0x18ee64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee64) {
            ctx->pc = 0x18EE78u;
            goto label_18ee78;
        }
    }
    ctx->pc = 0x18EE6Cu;
    // 0x18ee6c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18EE6Cu;
    {
        const bool branch_taken_0x18ee6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee6c) {
            ctx->pc = 0x18EED8u;
            goto label_18eed8;
        }
    }
    ctx->pc = 0x18EE74u;
    // 0x18ee74: 0x0  nop
    ctx->pc = 0x18ee74u;
    // NOP
label_18ee78:
    // 0x18ee78: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x18ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18ee7c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x18ee7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_18ee80:
    // 0x18ee80: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x18EE80u;
    SET_GPR_U32(ctx, 31, 0x18EE88u);
    ctx->pc = 0x18EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE80u;
    // 0x18ee84: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x18EE80u, 0x18EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EE88u;
label_18ee88:
    // 0x18ee88: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18EE88u;
    {
        const bool branch_taken_0x18ee88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee88) {
            ctx->pc = 0x18EED8u;
            goto label_18eed8;
        }
    }
    ctx->pc = 0x18EE90u;
    // 0x18ee90: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x18ee90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x18ee94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ee98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18EE98u;
    {
        const bool branch_taken_0x18ee98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE98u;
        // 0x18ee9c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee98) {
            ctx->pc = 0x18EED8u;
            goto label_18eed8;
        }
    }
    ctx->pc = 0x18EEA0u;
label_18eea0:
    // 0x18eea0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x18eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18eea4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18EEA4u;
    {
        const bool branch_taken_0x18eea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEA4u;
        // 0x18eea8: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eea4) {
            ctx->pc = 0x18EED8u;
            goto label_18eed8;
        }
    }
    ctx->pc = 0x18EEACu;
    // 0x18eeac: 0x0  nop
    ctx->pc = 0x18eeacu;
    // NOP
label_18eeb0:
    // 0x18eeb0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x18eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x18eeb4: 0xc0e9114  jal         func_3A4450
    ctx->pc = 0x18EEB4u;
    SET_GPR_U32(ctx, 31, 0x18EEBCu);
    ctx->pc = 0x18EEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EEB4u;
    // 0x18eeb8: 0x24843340  addiu       $a0, $a0, 0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4450u, 0x18EEB4u, 0x18EEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EEBCu;
label_18eebc:
    // 0x18eebc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EEBCu;
    {
        const bool branch_taken_0x18eebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eebc) {
            ctx->pc = 0x18EED8u;
            goto label_18eed8;
        }
    }
    ctx->pc = 0x18EEC4u;
    // 0x18eec4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18eec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18eec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18eecc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x18eeccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18eed0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x18eed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x18eed4: 0x0  nop
    ctx->pc = 0x18eed4u;
    // NOP
label_18eed8:
    // 0x18eed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18eed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18eedc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18eedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18eee0: 0x3e00008  jr          $ra
    ctx->pc = 0x18EEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEE0u;
        // 0x18eee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EEE8u;
}
